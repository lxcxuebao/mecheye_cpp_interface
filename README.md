# Mech-Eye Interface
----------------------------
Official C++ interface for Mech-Eye cameras.
## Prerequisites
-----------------------
In Order to use this interface you will need the following Prerequisites installed:
1. [Cmake](https://cmake.org/) -Version > 3.7 is required.
2. [Visual Studio](https://visualstudio.microsoft.com/) -Version > 2015 is recommended.
## Using the MechEye_OpenInterface
------------------------------------------
### Configure the project
Run Cmake and modify the paths of the include and libary
### Connect to the camera 
Change the `const std::string cameraIP = "your camera IP"`;
### Build the project
Copy corresponding dll files in the “dependencies for MechEye_OpenInterface” folder to the .exe file path. Then, run the .exe file and the camera can be triggered to operate the defined functions. 
###  Customrized functions 
It can be realized by adding the corresponding .cpp file and including it in the main.cpp.
