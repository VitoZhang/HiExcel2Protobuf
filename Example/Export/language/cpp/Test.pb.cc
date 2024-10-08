// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Test.proto

#include "Test.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
class TestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Test>
      _instance;
} _Test_default_instance_;
class TestTable_DataEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TestTable_DataEntry_DoNotUse>
      _instance;
} _TestTable_DataEntry_DoNotUse_default_instance_;
class TestTableDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TestTable>
      _instance;
} _TestTable_default_instance_;
namespace protobuf_Test_2eproto {
void InitDefaultsTestImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_Test_default_instance_;
    new (ptr) ::Test();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Test::InitAsDefaultInstance();
}

void InitDefaultsTest() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsTestImpl);
}

void InitDefaultsTestTable_DataEntry_DoNotUseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_Test_2eproto::InitDefaultsTest();
  {
    void* ptr = &::_TestTable_DataEntry_DoNotUse_default_instance_;
    new (ptr) ::TestTable_DataEntry_DoNotUse();
  }
  ::TestTable_DataEntry_DoNotUse::InitAsDefaultInstance();
}

void InitDefaultsTestTable_DataEntry_DoNotUse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsTestTable_DataEntry_DoNotUseImpl);
}

void InitDefaultsTestTableImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_Test_2eproto::InitDefaultsTestTable_DataEntry_DoNotUse();
  {
    void* ptr = &::_TestTable_default_instance_;
    new (ptr) ::TestTable();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::TestTable::InitAsDefaultInstance();
}

void InitDefaultsTestTable() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsTestTableImpl);
}

::google::protobuf::Metadata file_level_metadata[3];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test, hp_num_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test, attack_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test, infos_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::TestTable_DataEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::TestTable_DataEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::TestTable_DataEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::TestTable_DataEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::TestTable, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::TestTable, data_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Test)},
  { 10, 17, sizeof(::TestTable_DataEntry_DoNotUse)},
  { 19, -1, sizeof(::TestTable)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Test_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_TestTable_DataEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_TestTable_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Test.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\nTest.proto\"O\n\004Test\022\n\n\002id\030\001 \001(\003\022\014\n\004name"
      "\030\002 \001(\t\022\016\n\006hp_num\030\003 \001(\005\022\016\n\006attack\030\004 \001(\005\022\r"
      "\n\005infos\030\005 \003(\t\"c\n\tTestTable\022\"\n\004Data\030\001 \003(\013"
      "2\024.TestTable.DataEntry\0322\n\tDataEntry\022\013\n\003k"
      "ey\030\001 \001(\003\022\024\n\005value\030\002 \001(\0132\005.Test:\0028\001B\014\252\002\tT"
      "ableToolb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 216);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Test.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Test_2eproto

// ===================================================================

void Test::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Test::kIdFieldNumber;
const int Test::kNameFieldNumber;
const int Test::kHpNumFieldNumber;
const int Test::kAttackFieldNumber;
const int Test::kInfosFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Test::Test()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_Test_2eproto::InitDefaultsTest();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Test)
}
Test::Test(const Test& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      infos_(from.infos_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&attack_) -
    reinterpret_cast<char*>(&id_)) + sizeof(attack_));
  // @@protoc_insertion_point(copy_constructor:Test)
}

void Test::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&attack_) -
      reinterpret_cast<char*>(&id_)) + sizeof(attack_));
  _cached_size_ = 0;
}

Test::~Test() {
  // @@protoc_insertion_point(destructor:Test)
  SharedDtor();
}

void Test::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Test::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Test::descriptor() {
  ::protobuf_Test_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Test_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Test& Test::default_instance() {
  ::protobuf_Test_2eproto::InitDefaultsTest();
  return *internal_default_instance();
}

Test* Test::New(::google::protobuf::Arena* arena) const {
  Test* n = new Test;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Test::Clear() {
// @@protoc_insertion_point(message_clear_start:Test)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  infos_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&attack_) -
      reinterpret_cast<char*>(&id_)) + sizeof(attack_));
  _internal_metadata_.Clear();
}

bool Test::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Test)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Test.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 hp_num = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &hp_num_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 attack = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &attack_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string infos = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_infos()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->infos(this->infos_size() - 1).data(),
            static_cast<int>(this->infos(this->infos_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Test.infos"));
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
  // @@protoc_insertion_point(parse_success:Test)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Test)
  return false;
#undef DO_
}

void Test::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Test)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->id(), output);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Test.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // int32 hp_num = 3;
  if (this->hp_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->hp_num(), output);
  }

  // int32 attack = 4;
  if (this->attack() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->attack(), output);
  }

  // repeated string infos = 5;
  for (int i = 0, n = this->infos_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->infos(i).data(), static_cast<int>(this->infos(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Test.infos");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->infos(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Test)
}

::google::protobuf::uint8* Test::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Test)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->id(), target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Test.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // int32 hp_num = 3;
  if (this->hp_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->hp_num(), target);
  }

  // int32 attack = 4;
  if (this->attack() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->attack(), target);
  }

  // repeated string infos = 5;
  for (int i = 0, n = this->infos_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->infos(i).data(), static_cast<int>(this->infos(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Test.infos");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(5, this->infos(i), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Test)
  return target;
}

size_t Test::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Test)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated string infos = 5;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->infos_size());
  for (int i = 0, n = this->infos_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->infos(i));
  }

  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // int64 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->id());
  }

  // int32 hp_num = 3;
  if (this->hp_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->hp_num());
  }

  // int32 attack = 4;
  if (this->attack() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->attack());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Test::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Test)
  GOOGLE_DCHECK_NE(&from, this);
  const Test* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Test>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Test)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Test)
    MergeFrom(*source);
  }
}

void Test::MergeFrom(const Test& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Test)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  infos_.MergeFrom(from.infos_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.hp_num() != 0) {
    set_hp_num(from.hp_num());
  }
  if (from.attack() != 0) {
    set_attack(from.attack());
  }
}

void Test::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Test)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Test::CopyFrom(const Test& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Test)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Test::IsInitialized() const {
  return true;
}

void Test::Swap(Test* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Test::InternalSwap(Test* other) {
  using std::swap;
  infos_.InternalSwap(&other->infos_);
  name_.Swap(&other->name_);
  swap(id_, other->id_);
  swap(hp_num_, other->hp_num_);
  swap(attack_, other->attack_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Test::GetMetadata() const {
  protobuf_Test_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Test_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

TestTable_DataEntry_DoNotUse::TestTable_DataEntry_DoNotUse() {}
TestTable_DataEntry_DoNotUse::TestTable_DataEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void TestTable_DataEntry_DoNotUse::MergeFrom(const TestTable_DataEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata TestTable_DataEntry_DoNotUse::GetMetadata() const {
  ::protobuf_Test_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Test_2eproto::file_level_metadata[1];
}
void TestTable_DataEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void TestTable::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TestTable::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TestTable::TestTable()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_Test_2eproto::InitDefaultsTestTable();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:TestTable)
}
TestTable::TestTable(const TestTable& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_.MergeFrom(from.data_);
  // @@protoc_insertion_point(copy_constructor:TestTable)
}

void TestTable::SharedCtor() {
  _cached_size_ = 0;
}

TestTable::~TestTable() {
  // @@protoc_insertion_point(destructor:TestTable)
  SharedDtor();
}

void TestTable::SharedDtor() {
}

void TestTable::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestTable::descriptor() {
  ::protobuf_Test_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Test_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TestTable& TestTable::default_instance() {
  ::protobuf_Test_2eproto::InitDefaultsTestTable();
  return *internal_default_instance();
}

TestTable* TestTable::New(::google::protobuf::Arena* arena) const {
  TestTable* n = new TestTable;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TestTable::Clear() {
// @@protoc_insertion_point(message_clear_start:TestTable)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  _internal_metadata_.Clear();
}

bool TestTable::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:TestTable)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<int64, .Test> Data = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          TestTable_DataEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              TestTable_DataEntry_DoNotUse,
              ::google::protobuf::int64, ::Test,
              ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::int64, ::Test > > parser(&data_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
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
  // @@protoc_insertion_point(parse_success:TestTable)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:TestTable)
  return false;
#undef DO_
}

void TestTable::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:TestTable)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<int64, .Test> Data = 1;
  if (!this->data().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::int64, ::Test >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::int64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->data().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->data().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::int64, ::Test >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::int64, ::Test >::const_iterator
          it = this->data().begin();
          it != this->data().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<TestTable_DataEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(data_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<TestTable_DataEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::google::protobuf::int64, ::Test >::const_iterator
          it = this->data().begin();
          it != this->data().end(); ++it) {
        entry.reset(data_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:TestTable)
}

::google::protobuf::uint8* TestTable::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:TestTable)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<int64, .Test> Data = 1;
  if (!this->data().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::int64, ::Test >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::int64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->data().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->data().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::int64, ::Test >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::int64, ::Test >::const_iterator
          it = this->data().begin();
          it != this->data().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<TestTable_DataEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(data_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<TestTable_DataEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::google::protobuf::int64, ::Test >::const_iterator
          it = this->data().begin();
          it != this->data().end(); ++it) {
        entry.reset(data_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TestTable)
  return target;
}

size_t TestTable::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TestTable)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<int64, .Test> Data = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->data_size());
  {
    ::google::protobuf::scoped_ptr<TestTable_DataEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::google::protobuf::int64, ::Test >::const_iterator
        it = this->data().begin();
        it != this->data().end(); ++it) {
      entry.reset(data_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestTable::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TestTable)
  GOOGLE_DCHECK_NE(&from, this);
  const TestTable* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TestTable>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TestTable)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TestTable)
    MergeFrom(*source);
  }
}

void TestTable::MergeFrom(const TestTable& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TestTable)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
}

void TestTable::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TestTable)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestTable::CopyFrom(const TestTable& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TestTable)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestTable::IsInitialized() const {
  return true;
}

void TestTable::Swap(TestTable* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TestTable::InternalSwap(TestTable* other) {
  using std::swap;
  data_.Swap(&other->data_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TestTable::GetMetadata() const {
  protobuf_Test_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Test_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
