#include "CameraClient.h"
#include <opencv2/imgcodecs.hpp>
#include "CameraCmd.h"
#include <regex>
#include <fstream>
#include <iostream>
namespace
{
	double readDouble(const std::string& data, const int pos)
	{
		if (pos + sizeof(double) > data.size()) return 0;
		std::string strFromQDataStream(data.data() + pos, sizeof(double));
		std::string str;
		str.resize(sizeof(double));
		for (int i = 0; i < sizeof(double); i++)
		{
			str[i] = strFromQDataStream[sizeof(double) - 1 - i];
		}
		double v;
		memcpy(&v, str.c_str(), sizeof(double));
		return v;
	}

	cv::Mat asMat(const std::string& data, size_t offset = 0)
	{
		return cv::Mat(data.size() - offset, 1, cv::DataType<uchar>::type,
			const_cast<char*>((data.data() + offset)));
	}
	cv::Mat matC1ToC3(const cv::Mat& matC1)
	{
		if (matC1.empty())
			return cv::Mat();
		if (matC1.channels() != 1 || (matC1.rows % 3) != 0)
			return cv::Mat();

		std::vector<cv::Mat> channels;
		for (int i = 0; i < 3; i++) {
			channels.push_back(matC1(cv::Rect(0, i * matC1.rows / 3, matC1.cols, matC1.rows / 3)));
		}
		cv::Mat matC3;
		cv::merge(channels, matC3);
		return matC3;
	}
	cv::Mat read32FC1Mat(const std::string& data, size_t offset = 0)
	{
		if (data.empty()) return {};
		const double scale = readDouble(data, offset);
		cv::Mat bias16U =
			cv::imdecode(asMat(data, sizeof(double) + offset), cv::ImreadModes::IMREAD_ANYDEPTH);
		cv::Mat bias32F = cv::Mat::zeros(bias16U.size(), CV_32FC1);
		bias16U.convertTo(bias32F, CV_32FC1);
		cv::Mat mat32F =
			bias32F + cv::Mat(bias32F.size(), bias32F.type(), cv::Scalar::all(-Encode32FBias));
		return scale == 0 ? cv::Mat() : mat32F / scale;
	}
	int writeTotxt(cv::Mat mat)
	{
		std::ofstream out("D:\\c++.txt");
		if (out.is_open())
			for (int i = 0; i < mat.rows; i++)
			{
				for (int j = 0; j < mat.cols; j++)
				{
					out << mat.at<cv::Vec3f>(i, j)[0]<<" ";
					out << mat.at<cv::Vec3f>(i, j)[1]<<" ";
					out << mat.at<cv::Vec3f>(i, j)[2]<<" ";
				}
				out << "\n";
			}
		out.close();
		return 0;
	}
	cv::Mat read32FC3Mat(const std::string& data)
	{
		if (data.empty()) return cv::Mat();
		const double scale = readDouble(data, 0);
		cv::Mat matC1 = cv::imdecode(asMat(data, sizeof(double)), cv::ImreadModes::IMREAD_ANYDEPTH);
		cv::Mat bias16UC3 = matC1ToC3(matC1);
		cv::Mat bias32F = cv::Mat::zeros(bias16UC3.size(), CV_32FC3);
		
		bias16UC3.convertTo(bias32F, CV_32FC3);
		cv::Mat depth32F =
			bias32F + cv::Mat(bias32F.size(), bias32F.type(), cv::Scalar::all(-Encode32FBias));
		cv::Mat rel = depth32F / scale;	
		std::cout << scale << std::endl;
		writeTotxt(rel);
		/*cv::imwrite("D:\\1.png", bias16UC3);
		cv::imwrite("D:\\2.png", bias32F);*/
		//cv::imwrite("D:\\3.png", rel);
		return rel;
	}
	
}

cv::Mat CameraClient::captureDepthImg()
{
	const mmind::Response response = sendRequest(NetCamCmd::CaptureImage, ImageType::DEPTH);
	if (response.imagedepth().empty())
	{
		std::cout << "Client depth image is empty!" << std::endl;
		return {};
	}
	return read32FC1Mat(response.imagedepth(), 2);
}

cv::Mat CameraClient::captureColorImg()
{
	/*if (expTime > 0)
	{
		std::string error = setCameraParameter("camera2DExpTime", expTime);
	}*/
	const mmind::Response response = sendRequest(NetCamCmd::CaptureImage, ImageType::COLOR);
	if (response.imagergb().empty())
	{
		std::cout << "Client color image is empty!" << std::endl;
		return {};
	}
	return cv::imdecode(asMat(response.imagergb()), cv::ImreadModes::IMREAD_COLOR);
}

pcl::PointCloud<pcl::PointXYZRGB> CameraClient::captureRgbPointCloud()
{
	const mmind::Response response = sendRequest(NetCamCmd::CaptureGratingImage, 4);
	cv::Mat depthC3 = read32FC3Mat(response.imagegrating());
	const cv::Mat color = captureColorImg();
	return PointCloudTools::getRgbCloudFromDepthC3(depthC3, color);
}

pcl::PointCloud<pcl::PointXYZ> CameraClient::capturePointCloud()
{
	const mmind::Response response = sendRequest(NetCamCmd::CaptureGratingImage, 4);
	cv::Mat depthC3 = read32FC3Mat(response.imagegrating());
	return PointCloudTools::getCloudFromDepthC3(depthC3);
}

CameraIntri CameraClient::getCameraIntri()
{
	const mmind::Response response = sendRequest(NetCamCmd::GetCameraIntri, 0);
	std::cout << "Camera intrinsics: " << std::endl
		<< response.camintri() << std::endl;

	const auto start = response.camintri().find_last_of("[");
	const auto end = response.camintri().find_last_of("]");
	if (start == std::string::npos || end == std::string::npos || end < start)
	{
		std::cout << "Wrong camera intrinsics." << std::endl;
		return{};
	}
	const std::string intriStr = response.camintri().substr(start + 1, end - start - 1);

	std::regex re(",");
	std::vector<std::string> intriValue(std::sregex_token_iterator(intriStr.begin(),
		intriStr.end(), re, -1), std::sregex_token_iterator());
	if (intriValue.size() != 4)
	{
		std::cout << "Wrong intrinsics value" << std::endl;
		return{};
	}

	CameraIntri intri;
	intri.fx = std::stod(intriValue[0].c_str());
	intri.fy = std::stod(intriValue[1].c_str());
	intri.u = std::stod(intriValue[2].c_str());
	intri.v = std::stod(intriValue[3].c_str());

	std::cout.precision(17);
	std::cout << "fx = " << intri.fx << std::endl
		<< "fy = " << intri.fy << std::endl
		<< "u = " << intri.u << std::endl
		<< "v = " << intri.v << std::endl;

	return intri;
}

std::string CameraClient::getCameraId()
{
	return  getCameraStatus().eyeid();
}

std::string CameraClient::getCameraIp()
{
	return  getCameraStatus().ip();
}

std::string CameraClient::getCameraVersion()
{
	return  getCameraStatus().version();
}

std::string CameraClient::getParameter(std::string paraName, std::string& error)
{
	return getCameraParameter(paraName, error);
}

std::string  CameraClient::setParamater(std::string paraName, double value)
{
	std::string rel = setCameraParameter(paraName, value);
	return rel;
}

mmind::CameraStatus CameraClient::getCameraStatus()
{
	const mmind::Response response = sendRequest(NetCamCmd::GetCameraStatus, 0);
	mmind::CameraStatus cameraStatus;
	if (!cameraStatus.ParseFromString(response.camerastatus()))
	{
		std::cout << "Camera status is empty!";
		return{};
	}
	return cameraStatus;
}

std::string CameraClient::getCameraParameter(const std::string& propertyName, std::string& error)
{
	const mmind::Response response = sendRequest(NetCamCmd::GetCameraParameter, propertyName);
	std::string value = response.parametervalue();
	error = response.error();
	return value;
}

std::string CameraClient::setCameraParameter(const std::string& propertyName, double value)
{
	mmind::Request request;
	request.set_command(NetCamCmd::SetCameraParameter);
	request.set_valuestring(propertyName);
	request.set_valuedouble(value);
	mmind::Response response = sendReq<mmind::Response>(request);
	return response.error();
}

mmind::Response CameraClient::sendRequest(int command, double value)
{
	mmind::Request request;
	request.set_command(command);
	request.set_valuedouble(value);
	return sendReq<mmind::Response>(request);
}

mmind::Response CameraClient::sendRequest(int command, const std::string& value)
{
	mmind::Request request;
	request.set_command(command);
	request.set_valuestring(value);
	return sendReq<mmind::Response>(request);
}
