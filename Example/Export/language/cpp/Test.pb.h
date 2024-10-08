// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Test.proto

#ifndef PROTOBUF_Test_2eproto__INCLUDED
#define PROTOBUF_Test_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_Test_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsTestImpl();
void InitDefaultsTest();
void InitDefaultsTestTable_DataEntry_DoNotUseImpl();
void InitDefaultsTestTable_DataEntry_DoNotUse();
void InitDefaultsTestTableImpl();
void InitDefaultsTestTable();
inline void InitDefaults() {
  InitDefaultsTest();
  InitDefaultsTestTable_DataEntry_DoNotUse();
  InitDefaultsTestTable();
}
}  // namespace protobuf_Test_2eproto
class Test;
class TestDefaultTypeInternal;
extern TestDefaultTypeInternal _Test_default_instance_;
class TestTable;
class TestTableDefaultTypeInternal;
extern TestTableDefaultTypeInternal _TestTable_default_instance_;
class TestTable_DataEntry_DoNotUse;
class TestTable_DataEntry_DoNotUseDefaultTypeInternal;
extern TestTable_DataEntry_DoNotUseDefaultTypeInternal _TestTable_DataEntry_DoNotUse_default_instance_;

// ===================================================================

class Test : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Test) */ {
 public:
  Test();
  virtual ~Test();

  Test(const Test& from);

  inline Test& operator=(const Test& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Test(Test&& from) noexcept
    : Test() {
    *this = ::std::move(from);
  }

  inline Test& operator=(Test&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Test& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Test* internal_default_instance() {
    return reinterpret_cast<const Test*>(
               &_Test_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Test* other);
  friend void swap(Test& a, Test& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Test* New() const PROTOBUF_FINAL { return New(NULL); }

  Test* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Test& from);
  void MergeFrom(const Test& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Test* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string infos = 5;
  int infos_size() const;
  void clear_infos();
  static const int kInfosFieldNumber = 5;
  const ::std::string& infos(int index) const;
  ::std::string* mutable_infos(int index);
  void set_infos(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_infos(int index, ::std::string&& value);
  #endif
  void set_infos(int index, const char* value);
  void set_infos(int index, const char* value, size_t size);
  ::std::string* add_infos();
  void add_infos(const ::std::string& value);
  #if LANG_CXX11
  void add_infos(::std::string&& value);
  #endif
  void add_infos(const char* value);
  void add_infos(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& infos() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_infos();

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // int64 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // int32 hp_num = 3;
  void clear_hp_num();
  static const int kHpNumFieldNumber = 3;
  ::google::protobuf::int32 hp_num() const;
  void set_hp_num(::google::protobuf::int32 value);

  // int32 attack = 4;
  void clear_attack();
  static const int kAttackFieldNumber = 4;
  ::google::protobuf::int32 attack() const;
  void set_attack(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Test)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> infos_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int64 id_;
  ::google::protobuf::int32 hp_num_;
  ::google::protobuf::int32 attack_;
  mutable int _cached_size_;
  friend struct ::protobuf_Test_2eproto::TableStruct;
  friend void ::protobuf_Test_2eproto::InitDefaultsTestImpl();
};
// -------------------------------------------------------------------

class TestTable_DataEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<TestTable_DataEntry_DoNotUse, 
    ::google::protobuf::int64, ::Test,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<TestTable_DataEntry_DoNotUse, 
    ::google::protobuf::int64, ::Test,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  TestTable_DataEntry_DoNotUse();
  TestTable_DataEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const TestTable_DataEntry_DoNotUse& other);
  static const TestTable_DataEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const TestTable_DataEntry_DoNotUse*>(&_TestTable_DataEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class TestTable : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:TestTable) */ {
 public:
  TestTable();
  virtual ~TestTable();

  TestTable(const TestTable& from);

  inline TestTable& operator=(const TestTable& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestTable(TestTable&& from) noexcept
    : TestTable() {
    *this = ::std::move(from);
  }

  inline TestTable& operator=(TestTable&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestTable& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestTable* internal_default_instance() {
    return reinterpret_cast<const TestTable*>(
               &_TestTable_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(TestTable* other);
  friend void swap(TestTable& a, TestTable& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestTable* New() const PROTOBUF_FINAL { return New(NULL); }

  TestTable* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TestTable& from);
  void MergeFrom(const TestTable& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(TestTable* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<int64, .Test> Data = 1;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 1;
  const ::google::protobuf::Map< ::google::protobuf::int64, ::Test >&
      data() const;
  ::google::protobuf::Map< ::google::protobuf::int64, ::Test >*
      mutable_data();

  // @@protoc_insertion_point(class_scope:TestTable)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      TestTable_DataEntry_DoNotUse,
      ::google::protobuf::int64, ::Test,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > data_;
  mutable int _cached_size_;
  friend struct ::protobuf_Test_2eproto::TableStruct;
  friend void ::protobuf_Test_2eproto::InitDefaultsTestTableImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Test

// int64 id = 1;
inline void Test::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Test::id() const {
  // @@protoc_insertion_point(field_get:Test.id)
  return id_;
}
inline void Test::set_id(::google::protobuf::int64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:Test.id)
}

// string name = 2;
inline void Test::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Test::name() const {
  // @@protoc_insertion_point(field_get:Test.name)
  return name_.GetNoArena();
}
inline void Test::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Test.name)
}
#if LANG_CXX11
inline void Test::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Test.name)
}
#endif
inline void Test::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Test.name)
}
inline void Test::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Test.name)
}
inline ::std::string* Test::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Test.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Test::release_name() {
  // @@protoc_insertion_point(field_release:Test.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Test::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Test.name)
}

// int32 hp_num = 3;
inline void Test::clear_hp_num() {
  hp_num_ = 0;
}
inline ::google::protobuf::int32 Test::hp_num() const {
  // @@protoc_insertion_point(field_get:Test.hp_num)
  return hp_num_;
}
inline void Test::set_hp_num(::google::protobuf::int32 value) {
  
  hp_num_ = value;
  // @@protoc_insertion_point(field_set:Test.hp_num)
}

// int32 attack = 4;
inline void Test::clear_attack() {
  attack_ = 0;
}
inline ::google::protobuf::int32 Test::attack() const {
  // @@protoc_insertion_point(field_get:Test.attack)
  return attack_;
}
inline void Test::set_attack(::google::protobuf::int32 value) {
  
  attack_ = value;
  // @@protoc_insertion_point(field_set:Test.attack)
}

// repeated string infos = 5;
inline int Test::infos_size() const {
  return infos_.size();
}
inline void Test::clear_infos() {
  infos_.Clear();
}
inline const ::std::string& Test::infos(int index) const {
  // @@protoc_insertion_point(field_get:Test.infos)
  return infos_.Get(index);
}
inline ::std::string* Test::mutable_infos(int index) {
  // @@protoc_insertion_point(field_mutable:Test.infos)
  return infos_.Mutable(index);
}
inline void Test::set_infos(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:Test.infos)
  infos_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Test::set_infos(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:Test.infos)
  infos_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Test::set_infos(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  infos_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:Test.infos)
}
inline void Test::set_infos(int index, const char* value, size_t size) {
  infos_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Test.infos)
}
inline ::std::string* Test::add_infos() {
  // @@protoc_insertion_point(field_add_mutable:Test.infos)
  return infos_.Add();
}
inline void Test::add_infos(const ::std::string& value) {
  infos_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:Test.infos)
}
#if LANG_CXX11
inline void Test::add_infos(::std::string&& value) {
  infos_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:Test.infos)
}
#endif
inline void Test::add_infos(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  infos_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:Test.infos)
}
inline void Test::add_infos(const char* value, size_t size) {
  infos_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:Test.infos)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Test::infos() const {
  // @@protoc_insertion_point(field_list:Test.infos)
  return infos_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Test::mutable_infos() {
  // @@protoc_insertion_point(field_mutable_list:Test.infos)
  return &infos_;
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// TestTable

// map<int64, .Test> Data = 1;
inline int TestTable::data_size() const {
  return data_.size();
}
inline void TestTable::clear_data() {
  data_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::int64, ::Test >&
TestTable::data() const {
  // @@protoc_insertion_point(field_map:TestTable.Data)
  return data_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::int64, ::Test >*
TestTable::mutable_data() {
  // @@protoc_insertion_point(field_mutable_map:TestTable.Data)
  return data_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Test_2eproto__INCLUDED
