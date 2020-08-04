// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cameraStatus.proto

#include "cameraStatus.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace mmind {
class CameraStatusDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CameraStatus>
      _instance;
} _CameraStatus_default_instance_;
}  // namespace mmind
namespace protobuf_cameraStatus_2eproto {
static void InitDefaultsCameraStatus() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mmind::_CameraStatus_default_instance_;
    new (ptr) ::mmind::CameraStatus();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mmind::CameraStatus::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_CameraStatus =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsCameraStatus}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_CameraStatus.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mmind::CameraStatus, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mmind::CameraStatus, ip_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mmind::CameraStatus, version_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mmind::CameraStatus, serialid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mmind::CameraStatus, eyeid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mmind::CameraStatus, cameratype_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mmind::CameraStatus, commit_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::mmind::CameraStatus)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::mmind::_CameraStatus_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "cameraStatus.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\022cameraStatus.proto\022\005mmind\"p\n\014CameraSta"
      "tus\022\n\n\002ip\030\001 \001(\t\022\017\n\007version\030\002 \001(\t\022\020\n\010seri"
      "alId\030\003 \003(\t\022\r\n\005eyeId\030\004 \001(\t\022\022\n\ncameraType\030"
      "\005 \001(\005\022\016\n\006commit\030\006 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 149);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cameraStatus.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_cameraStatus_2eproto
namespace mmind {

// ===================================================================

void CameraStatus::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CameraStatus::kIpFieldNumber;
const int CameraStatus::kVersionFieldNumber;
const int CameraStatus::kSerialIdFieldNumber;
const int CameraStatus::kEyeIdFieldNumber;
const int CameraStatus::kCameraTypeFieldNumber;
const int CameraStatus::kCommitFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CameraStatus::CameraStatus()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_cameraStatus_2eproto::scc_info_CameraStatus.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:mmind.CameraStatus)
}
CameraStatus::CameraStatus(const CameraStatus& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      serialid_(from.serialid_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.ip().size() > 0) {
    ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ip_);
  }
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.version().size() > 0) {
    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  eyeid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.eyeid().size() > 0) {
    eyeid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.eyeid_);
  }
  commit_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.commit().size() > 0) {
    commit_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.commit_);
  }
  cameratype_ = from.cameratype_;
  // @@protoc_insertion_point(copy_constructor:mmind.CameraStatus)
}

void CameraStatus::SharedCtor() {
  ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  eyeid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  commit_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  cameratype_ = 0;
}

CameraStatus::~CameraStatus() {
  // @@protoc_insertion_point(destructor:mmind.CameraStatus)
  SharedDtor();
}

void CameraStatus::SharedDtor() {
  ip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  eyeid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  commit_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CameraStatus::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* CameraStatus::descriptor() {
  ::protobuf_cameraStatus_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cameraStatus_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CameraStatus& CameraStatus::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_cameraStatus_2eproto::scc_info_CameraStatus.base);
  return *internal_default_instance();
}


void CameraStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:mmind.CameraStatus)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  serialid_.Clear();
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  eyeid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  commit_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  cameratype_ = 0;
  _internal_metadata_.Clear();
}

bool CameraStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mmind.CameraStatus)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string ip = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->ip().data(), static_cast<int>(this->ip().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "mmind.CameraStatus.ip"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string version = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->version().data(), static_cast<int>(this->version().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "mmind.CameraStatus.version"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string serialId = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_serialid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->serialid(this->serialid_size() - 1).data(),
            static_cast<int>(this->serialid(this->serialid_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "mmind.CameraStatus.serialId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string eyeId = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_eyeid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->eyeid().data(), static_cast<int>(this->eyeid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "mmind.CameraStatus.eyeId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 cameraType = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cameratype_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string commit = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_commit()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->commit().data(), static_cast<int>(this->commit().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "mmind.CameraStatus.commit"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:mmind.CameraStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mmind.CameraStatus)
  return false;
#undef DO_
}

void CameraStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mmind.CameraStatus)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string ip = 1;
  if (this->ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip().data(), static_cast<int>(this->ip().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mmind.CameraStatus.ip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->ip(), output);
  }

  // string version = 2;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), static_cast<int>(this->version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mmind.CameraStatus.version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->version(), output);
  }

  // repeated string serialId = 3;
  for (int i = 0, n = this->serialid_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->serialid(i).data(), static_cast<int>(this->serialid(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mmind.CameraStatus.serialId");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->serialid(i), output);
  }

  // string eyeId = 4;
  if (this->eyeid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->eyeid().data(), static_cast<int>(this->eyeid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mmind.CameraStatus.eyeId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->eyeid(), output);
  }

  // int32 cameraType = 5;
  if (this->cameratype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->cameratype(), output);
  }

  // string commit = 6;
  if (this->commit().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->commit().data(), static_cast<int>(this->commit().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mmind.CameraStatus.commit");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->commit(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:mmind.CameraStatus)
}

::google::protobuf::uint8* CameraStatus::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mmind.CameraStatus)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string ip = 1;
  if (this->ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip().data(), static_cast<int>(this->ip().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mmind.CameraStatus.ip");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->ip(), target);
  }

  // string version = 2;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), static_cast<int>(this->version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mmind.CameraStatus.version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->version(), target);
  }

  // repeated string serialId = 3;
  for (int i = 0, n = this->serialid_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->serialid(i).data(), static_cast<int>(this->serialid(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mmind.CameraStatus.serialId");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->serialid(i), target);
  }

  // string eyeId = 4;
  if (this->eyeid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->eyeid().data(), static_cast<int>(this->eyeid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mmind.CameraStatus.eyeId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->eyeid(), target);
  }

  // int32 cameraType = 5;
  if (this->cameratype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->cameratype(), target);
  }

  // string commit = 6;
  if (this->commit().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->commit().data(), static_cast<int>(this->commit().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mmind.CameraStatus.commit");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->commit(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mmind.CameraStatus)
  return target;
}

size_t CameraStatus::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mmind.CameraStatus)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated string serialId = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->serialid_size());
  for (int i = 0, n = this->serialid_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->serialid(i));
  }

  // string ip = 1;
  if (this->ip().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->ip());
  }

  // string version = 2;
  if (this->version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->version());
  }

  // string eyeId = 4;
  if (this->eyeid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->eyeid());
  }

  // string commit = 6;
  if (this->commit().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->commit());
  }

  // int32 cameraType = 5;
  if (this->cameratype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->cameratype());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CameraStatus::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mmind.CameraStatus)
  GOOGLE_DCHECK_NE(&from, this);
  const CameraStatus* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CameraStatus>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mmind.CameraStatus)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mmind.CameraStatus)
    MergeFrom(*source);
  }
}

void CameraStatus::MergeFrom(const CameraStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mmind.CameraStatus)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  serialid_.MergeFrom(from.serialid_);
  if (from.ip().size() > 0) {

    ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ip_);
  }
  if (from.version().size() > 0) {

    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  if (from.eyeid().size() > 0) {

    eyeid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.eyeid_);
  }
  if (from.commit().size() > 0) {

    commit_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.commit_);
  }
  if (from.cameratype() != 0) {
    set_cameratype(from.cameratype());
  }
}

void CameraStatus::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mmind.CameraStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CameraStatus::CopyFrom(const CameraStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mmind.CameraStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CameraStatus::IsInitialized() const {
  return true;
}

void CameraStatus::Swap(CameraStatus* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CameraStatus::InternalSwap(CameraStatus* other) {
  using std::swap;
  serialid_.InternalSwap(CastToBase(&other->serialid_));
  ip_.Swap(&other->ip_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  version_.Swap(&other->version_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  eyeid_.Swap(&other->eyeid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  commit_.Swap(&other->commit_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(cameratype_, other->cameratype_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata CameraStatus::GetMetadata() const {
  protobuf_cameraStatus_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cameraStatus_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mmind
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::mmind::CameraStatus* Arena::CreateMaybeMessage< ::mmind::CameraStatus >(Arena* arena) {
  return Arena::CreateInternal< ::mmind::CameraStatus >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
