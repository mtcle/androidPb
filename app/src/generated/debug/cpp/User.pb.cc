// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: User.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "User.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace bean {

namespace {

const ::google::protobuf::Descriptor* User_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  User_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_User_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_User_2eproto() {
  protobuf_AddDesc_User_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "User.proto");
  GOOGLE_CHECK(file != NULL);
  User_descriptor_ = file->message_type(0);
  static const int User_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, phonenum_),
  };
  User_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      User_descriptor_,
      User::internal_default_instance(),
      User_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, _has_bits_),
      -1,
      -1,
      sizeof(User),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_User_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      User_descriptor_, User::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_User_2eproto() {
  User_default_instance_.Shutdown();
  delete User_reflection_;
}

void protobuf_InitDefaults_User_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  User_default_instance_.DefaultConstruct();
  User_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_User_2eproto_once_);
void protobuf_InitDefaults_User_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_User_2eproto_once_,
                 &protobuf_InitDefaults_User_2eproto_impl);
}
void protobuf_AddDesc_User_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_User_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nUser.proto\022\004bean\"2\n\004User\022\n\n\002id\030\001 \002(\005\022\014"
    "\n\004name\030\002 \002(\t\022\020\n\010phoneNum\030\003 \001(\tB\032\n\016com.mt"
    "cle.beanB\010UserBean", 98);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "User.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_User_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_User_2eproto_once_);
void protobuf_AddDesc_User_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_User_2eproto_once_,
                 &protobuf_AddDesc_User_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_User_2eproto {
  StaticDescriptorInitializer_User_2eproto() {
    protobuf_AddDesc_User_2eproto();
  }
} static_descriptor_initializer_User_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int User::kIdFieldNumber;
const int User::kNameFieldNumber;
const int User::kPhoneNumFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

User::User()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_User_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:bean.User)
}

void User::InitAsDefaultInstance() {
}

User::User(const User& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bean.User)
}

void User::SharedCtor() {
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  phonenum_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = 0;
}

User::~User() {
  // @@protoc_insertion_point(destructor:bean.User)
  SharedDtor();
}

void User::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  phonenum_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void User::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* User::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return User_descriptor_;
}

const User& User::default_instance() {
  protobuf_InitDefaults_User_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<User> User_default_instance_;

User* User::New(::google::protobuf::Arena* arena) const {
  User* n = new User;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void User::Clear() {
// @@protoc_insertion_point(message_clear_start:bean.User)
  if (_has_bits_[0 / 32] & 7u) {
    id_ = 0;
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_phonenum()) {
      phonenum_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool User::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:bean.User)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 id = 1;
      case 1: {
        if (tag == 8) {
          set_has_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // required string name = 2;
      case 2: {
        if (tag == 18) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "bean.User.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_phoneNum;
        break;
      }

      // optional string phoneNum = 3;
      case 3: {
        if (tag == 26) {
         parse_phoneNum:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_phonenum()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->phonenum().data(), this->phonenum().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "bean.User.phoneNum");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:bean.User)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:bean.User)
  return false;
#undef DO_
}

void User::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:bean.User)
  // required int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "bean.User.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // optional string phoneNum = 3;
  if (has_phonenum()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->phonenum().data(), this->phonenum().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "bean.User.phoneNum");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->phonenum(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:bean.User)
}

::google::protobuf::uint8* User::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:bean.User)
  // required int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "bean.User.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // optional string phoneNum = 3;
  if (has_phonenum()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->phonenum().data(), this->phonenum().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "bean.User.phoneNum");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->phonenum(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bean.User)
  return target;
}

size_t User::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:bean.User)
  size_t total_size = 0;

  if (has_id()) {
    // required int32 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  if (has_name()) {
    // required string name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  return total_size;
}
size_t User::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:bean.User)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());

    // required string name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional string phoneNum = 3;
  if (has_phonenum()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->phonenum());
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void User::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:bean.User)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const User* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const User>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:bean.User)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:bean.User)
    UnsafeMergeFrom(*source);
  }
}

void User::MergeFrom(const User& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:bean.User)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void User::UnsafeMergeFrom(const User& from) {
  GOOGLE_DCHECK(&from != this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_phonenum()) {
      set_has_phonenum();
      phonenum_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.phonenum_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void User::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:bean.User)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void User::CopyFrom(const User& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:bean.User)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool User::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void User::Swap(User* other) {
  if (other == this) return;
  InternalSwap(other);
}
void User::InternalSwap(User* other) {
  std::swap(id_, other->id_);
  name_.Swap(&other->name_);
  phonenum_.Swap(&other->phonenum_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata User::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = User_descriptor_;
  metadata.reflection = User_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// User

// required int32 id = 1;
bool User::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void User::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void User::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void User::clear_id() {
  id_ = 0;
  clear_has_id();
}
::google::protobuf::int32 User::id() const {
  // @@protoc_insertion_point(field_get:bean.User.id)
  return id_;
}
void User::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:bean.User.id)
}

// required string name = 2;
bool User::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void User::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
void User::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
void User::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
const ::std::string& User::name() const {
  // @@protoc_insertion_point(field_get:bean.User.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void User::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bean.User.name)
}
void User::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bean.User.name)
}
void User::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bean.User.name)
}
::std::string* User::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:bean.User.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* User::release_name() {
  // @@protoc_insertion_point(field_release:bean.User.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void User::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:bean.User.name)
}

// optional string phoneNum = 3;
bool User::has_phonenum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void User::set_has_phonenum() {
  _has_bits_[0] |= 0x00000004u;
}
void User::clear_has_phonenum() {
  _has_bits_[0] &= ~0x00000004u;
}
void User::clear_phonenum() {
  phonenum_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_phonenum();
}
const ::std::string& User::phonenum() const {
  // @@protoc_insertion_point(field_get:bean.User.phoneNum)
  return phonenum_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void User::set_phonenum(const ::std::string& value) {
  set_has_phonenum();
  phonenum_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bean.User.phoneNum)
}
void User::set_phonenum(const char* value) {
  set_has_phonenum();
  phonenum_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bean.User.phoneNum)
}
void User::set_phonenum(const char* value, size_t size) {
  set_has_phonenum();
  phonenum_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bean.User.phoneNum)
}
::std::string* User::mutable_phonenum() {
  set_has_phonenum();
  // @@protoc_insertion_point(field_mutable:bean.User.phoneNum)
  return phonenum_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* User::release_phonenum() {
  // @@protoc_insertion_point(field_release:bean.User.phoneNum)
  clear_has_phonenum();
  return phonenum_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void User::set_allocated_phonenum(::std::string* phonenum) {
  if (phonenum != NULL) {
    set_has_phonenum();
  } else {
    clear_has_phonenum();
  }
  phonenum_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), phonenum);
  // @@protoc_insertion_point(field_set_allocated:bean.User.phoneNum)
}

inline const User* User::internal_default_instance() {
  return &User_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace bean

// @@protoc_insertion_point(global_scope)
