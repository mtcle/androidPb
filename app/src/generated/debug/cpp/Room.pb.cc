// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Room.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Room.pb.h"

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

const ::google::protobuf::Descriptor* Room_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Room_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Room_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_Room_2eproto() {
  protobuf_AddDesc_Room_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Room.proto");
  GOOGLE_CHECK(file != NULL);
  Room_descriptor_ = file->message_type(0);
  static const int Room_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Room, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Room, roomname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Room, roomdesc_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Room, userlist_),
  };
  Room_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Room_descriptor_,
      Room::internal_default_instance(),
      Room_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Room, _has_bits_),
      -1,
      -1,
      sizeof(Room),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Room, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Room_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Room_descriptor_, Room::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Room_2eproto() {
  Room_default_instance_.Shutdown();
  delete Room_reflection_;
}

void protobuf_InitDefaults_Room_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::bean::protobuf_InitDefaults_User_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  Room_default_instance_.DefaultConstruct();
  Room_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_Room_2eproto_once_);
void protobuf_InitDefaults_Room_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_Room_2eproto_once_,
                 &protobuf_InitDefaults_Room_2eproto_impl);
}
void protobuf_AddDesc_Room_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_Room_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nRoom.proto\022\004bean\032\nUser.proto\"T\n\004Room\022\n"
    "\n\002id\030\001 \002(\005\022\020\n\010roomName\030\002 \002(\t\022\020\n\010roomDesc"
    "\030\003 \001(\t\022\034\n\010userList\030\004 \003(\0132\n.bean.UserB\032\n\016"
    "com.mtcle.beanB\010RoomBean", 144);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Room.proto", &protobuf_RegisterTypes);
  ::bean::protobuf_AddDesc_User_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Room_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_Room_2eproto_once_);
void protobuf_AddDesc_Room_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_Room_2eproto_once_,
                 &protobuf_AddDesc_Room_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Room_2eproto {
  StaticDescriptorInitializer_Room_2eproto() {
    protobuf_AddDesc_Room_2eproto();
  }
} static_descriptor_initializer_Room_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Room::kIdFieldNumber;
const int Room::kRoomNameFieldNumber;
const int Room::kRoomDescFieldNumber;
const int Room::kUserListFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Room::Room()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_Room_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:bean.Room)
}

void Room::InitAsDefaultInstance() {
}

Room::Room(const Room& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bean.Room)
}

void Room::SharedCtor() {
  _cached_size_ = 0;
  roomname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  roomdesc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = 0;
}

Room::~Room() {
  // @@protoc_insertion_point(destructor:bean.Room)
  SharedDtor();
}

void Room::SharedDtor() {
  roomname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  roomdesc_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Room::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Room::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Room_descriptor_;
}

const Room& Room::default_instance() {
  protobuf_InitDefaults_Room_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Room> Room_default_instance_;

Room* Room::New(::google::protobuf::Arena* arena) const {
  Room* n = new Room;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Room::Clear() {
// @@protoc_insertion_point(message_clear_start:bean.Room)
  if (_has_bits_[0 / 32] & 7u) {
    id_ = 0;
    if (has_roomname()) {
      roomname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_roomdesc()) {
      roomdesc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  userlist_.Clear();
  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Room::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:bean.Room)
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
        if (input->ExpectTag(18)) goto parse_roomName;
        break;
      }

      // required string roomName = 2;
      case 2: {
        if (tag == 18) {
         parse_roomName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_roomname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->roomname().data(), this->roomname().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "bean.Room.roomName");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_roomDesc;
        break;
      }

      // optional string roomDesc = 3;
      case 3: {
        if (tag == 26) {
         parse_roomDesc:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_roomdesc()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->roomdesc().data(), this->roomdesc().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "bean.Room.roomDesc");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_userList;
        break;
      }

      // repeated .bean.User userList = 4;
      case 4: {
        if (tag == 34) {
         parse_userList:
          DO_(input->IncrementRecursionDepth());
         parse_loop_userList:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_userlist()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_userList;
        input->UnsafeDecrementRecursionDepth();
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
  // @@protoc_insertion_point(parse_success:bean.Room)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:bean.Room)
  return false;
#undef DO_
}

void Room::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:bean.Room)
  // required int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // required string roomName = 2;
  if (has_roomname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->roomname().data(), this->roomname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "bean.Room.roomName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->roomname(), output);
  }

  // optional string roomDesc = 3;
  if (has_roomdesc()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->roomdesc().data(), this->roomdesc().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "bean.Room.roomDesc");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->roomdesc(), output);
  }

  // repeated .bean.User userList = 4;
  for (unsigned int i = 0, n = this->userlist_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->userlist(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:bean.Room)
}

::google::protobuf::uint8* Room::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:bean.Room)
  // required int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // required string roomName = 2;
  if (has_roomname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->roomname().data(), this->roomname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "bean.Room.roomName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->roomname(), target);
  }

  // optional string roomDesc = 3;
  if (has_roomdesc()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->roomdesc().data(), this->roomdesc().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "bean.Room.roomDesc");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->roomdesc(), target);
  }

  // repeated .bean.User userList = 4;
  for (unsigned int i = 0, n = this->userlist_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->userlist(i), false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bean.Room)
  return target;
}

size_t Room::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:bean.Room)
  size_t total_size = 0;

  if (has_id()) {
    // required int32 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  if (has_roomname()) {
    // required string roomName = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->roomname());
  }

  return total_size;
}
size_t Room::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:bean.Room)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());

    // required string roomName = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->roomname());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional string roomDesc = 3;
  if (has_roomdesc()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->roomdesc());
  }

  // repeated .bean.User userList = 4;
  {
    unsigned int count = this->userlist_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->userlist(i));
    }
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

void Room::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:bean.Room)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Room* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Room>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:bean.Room)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:bean.Room)
    UnsafeMergeFrom(*source);
  }
}

void Room::MergeFrom(const Room& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:bean.Room)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Room::UnsafeMergeFrom(const Room& from) {
  GOOGLE_DCHECK(&from != this);
  userlist_.MergeFrom(from.userlist_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_roomname()) {
      set_has_roomname();
      roomname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.roomname_);
    }
    if (from.has_roomdesc()) {
      set_has_roomdesc();
      roomdesc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.roomdesc_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void Room::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:bean.Room)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Room::CopyFrom(const Room& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:bean.Room)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Room::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->userlist())) return false;
  return true;
}

void Room::Swap(Room* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Room::InternalSwap(Room* other) {
  std::swap(id_, other->id_);
  roomname_.Swap(&other->roomname_);
  roomdesc_.Swap(&other->roomdesc_);
  userlist_.UnsafeArenaSwap(&other->userlist_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Room::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Room_descriptor_;
  metadata.reflection = Room_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Room

// required int32 id = 1;
bool Room::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Room::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void Room::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void Room::clear_id() {
  id_ = 0;
  clear_has_id();
}
::google::protobuf::int32 Room::id() const {
  // @@protoc_insertion_point(field_get:bean.Room.id)
  return id_;
}
void Room::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:bean.Room.id)
}

// required string roomName = 2;
bool Room::has_roomname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Room::set_has_roomname() {
  _has_bits_[0] |= 0x00000002u;
}
void Room::clear_has_roomname() {
  _has_bits_[0] &= ~0x00000002u;
}
void Room::clear_roomname() {
  roomname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_roomname();
}
const ::std::string& Room::roomname() const {
  // @@protoc_insertion_point(field_get:bean.Room.roomName)
  return roomname_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Room::set_roomname(const ::std::string& value) {
  set_has_roomname();
  roomname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bean.Room.roomName)
}
void Room::set_roomname(const char* value) {
  set_has_roomname();
  roomname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bean.Room.roomName)
}
void Room::set_roomname(const char* value, size_t size) {
  set_has_roomname();
  roomname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bean.Room.roomName)
}
::std::string* Room::mutable_roomname() {
  set_has_roomname();
  // @@protoc_insertion_point(field_mutable:bean.Room.roomName)
  return roomname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Room::release_roomname() {
  // @@protoc_insertion_point(field_release:bean.Room.roomName)
  clear_has_roomname();
  return roomname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Room::set_allocated_roomname(::std::string* roomname) {
  if (roomname != NULL) {
    set_has_roomname();
  } else {
    clear_has_roomname();
  }
  roomname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), roomname);
  // @@protoc_insertion_point(field_set_allocated:bean.Room.roomName)
}

// optional string roomDesc = 3;
bool Room::has_roomdesc() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Room::set_has_roomdesc() {
  _has_bits_[0] |= 0x00000004u;
}
void Room::clear_has_roomdesc() {
  _has_bits_[0] &= ~0x00000004u;
}
void Room::clear_roomdesc() {
  roomdesc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_roomdesc();
}
const ::std::string& Room::roomdesc() const {
  // @@protoc_insertion_point(field_get:bean.Room.roomDesc)
  return roomdesc_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Room::set_roomdesc(const ::std::string& value) {
  set_has_roomdesc();
  roomdesc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bean.Room.roomDesc)
}
void Room::set_roomdesc(const char* value) {
  set_has_roomdesc();
  roomdesc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bean.Room.roomDesc)
}
void Room::set_roomdesc(const char* value, size_t size) {
  set_has_roomdesc();
  roomdesc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bean.Room.roomDesc)
}
::std::string* Room::mutable_roomdesc() {
  set_has_roomdesc();
  // @@protoc_insertion_point(field_mutable:bean.Room.roomDesc)
  return roomdesc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Room::release_roomdesc() {
  // @@protoc_insertion_point(field_release:bean.Room.roomDesc)
  clear_has_roomdesc();
  return roomdesc_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Room::set_allocated_roomdesc(::std::string* roomdesc) {
  if (roomdesc != NULL) {
    set_has_roomdesc();
  } else {
    clear_has_roomdesc();
  }
  roomdesc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), roomdesc);
  // @@protoc_insertion_point(field_set_allocated:bean.Room.roomDesc)
}

// repeated .bean.User userList = 4;
int Room::userlist_size() const {
  return userlist_.size();
}
void Room::clear_userlist() {
  userlist_.Clear();
}
const ::bean::User& Room::userlist(int index) const {
  // @@protoc_insertion_point(field_get:bean.Room.userList)
  return userlist_.Get(index);
}
::bean::User* Room::mutable_userlist(int index) {
  // @@protoc_insertion_point(field_mutable:bean.Room.userList)
  return userlist_.Mutable(index);
}
::bean::User* Room::add_userlist() {
  // @@protoc_insertion_point(field_add:bean.Room.userList)
  return userlist_.Add();
}
::google::protobuf::RepeatedPtrField< ::bean::User >*
Room::mutable_userlist() {
  // @@protoc_insertion_point(field_mutable_list:bean.Room.userList)
  return &userlist_;
}
const ::google::protobuf::RepeatedPtrField< ::bean::User >&
Room::userlist() const {
  // @@protoc_insertion_point(field_list:bean.Room.userList)
  return userlist_;
}

inline const Room* Room::internal_default_instance() {
  return &Room_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace bean

// @@protoc_insertion_point(global_scope)