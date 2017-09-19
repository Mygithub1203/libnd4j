// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_NODE_ND4J_GRAPH_H_
#define FLATBUFFERS_GENERATED_NODE_ND4J_GRAPH_H_

#include "flatbuffers/flatbuffers.h"

namespace nd4j {
namespace graph {

struct FlatVariable;

struct FlatNode;

enum OpType {
  OpType_TRANSFORM = 0,
  OpType_ACCUMULATION = 1,
  OpType_INDEX_ACCUMULATION = 2,
  OpType_SCALAR = 3,
  OpType_BROADCAST = 4,
  OpType_SUMMARYSTATS = 7,
  OpType_SHAPE = 8,
  OpType_AGGREGATION = 9,
  OpType_CUSTOM = 10,
  OpType_VARIABLE = 119,
  OpType_MIN = OpType_TRANSFORM,
  OpType_MAX = OpType_VARIABLE
};

inline OpType (&EnumValuesOpType())[10] {
  static OpType values[] = {
    OpType_TRANSFORM,
    OpType_ACCUMULATION,
    OpType_INDEX_ACCUMULATION,
    OpType_SCALAR,
    OpType_BROADCAST,
    OpType_SUMMARYSTATS,
    OpType_SHAPE,
    OpType_AGGREGATION,
    OpType_CUSTOM,
    OpType_VARIABLE
  };
  return values;
}

enum OpClass {
  OpClass_TRANFSFORM = 0,
  OpClass_REDUCTION = 1,
  OpClass_MULTIPLICATOR = 2,
  OpClass_MIN = OpClass_TRANFSFORM,
  OpClass_MAX = OpClass_MULTIPLICATOR
};

inline OpClass (&EnumValuesOpClass())[3] {
  static OpClass values[] = {
    OpClass_TRANFSFORM,
    OpClass_REDUCTION,
    OpClass_MULTIPLICATOR
  };
  return values;
}

inline const char **EnumNamesOpClass() {
  static const char *names[] = {
    "TRANFSFORM",
    "REDUCTION",
    "MULTIPLICATOR",
    nullptr
  };
  return names;
}

inline const char *EnumNameOpClass(OpClass e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesOpClass()[index];
}

enum DataType {
  DataType_INHERIT = 0,
  DataType_HALF = 1,
  DataType_FLOAT = 2,
  DataType_DOUBLE = 3,
  DataType_MIN = DataType_INHERIT,
  DataType_MAX = DataType_DOUBLE
};

inline DataType (&EnumValuesDataType())[4] {
  static DataType values[] = {
    DataType_INHERIT,
    DataType_HALF,
    DataType_FLOAT,
    DataType_DOUBLE
  };
  return values;
}

inline const char **EnumNamesDataType() {
  static const char *names[] = {
    "INHERIT",
    "HALF",
    "FLOAT",
    "DOUBLE",
    nullptr
  };
  return names;
}

inline const char *EnumNameDataType(DataType e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesDataType()[index];
}

struct FlatVariable FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4,
    VT_NAME = 6,
    VT_SHAPE = 8,
    VT_VALUES = 10,
    VT_DEVICE = 12
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::Vector<int32_t> *shape() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_SHAPE);
  }
  const flatbuffers::Vector<float> *values() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_VALUES);
  }
  int32_t device() const {
    return GetField<int32_t>(VT_DEVICE, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.Verify(name()) &&
           VerifyOffset(verifier, VT_SHAPE) &&
           verifier.Verify(shape()) &&
           VerifyOffset(verifier, VT_VALUES) &&
           verifier.Verify(values()) &&
           VerifyField<int32_t>(verifier, VT_DEVICE) &&
           verifier.EndTable();
  }
};

struct FlatVariableBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(FlatVariable::VT_ID, id, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(FlatVariable::VT_NAME, name);
  }
  void add_shape(flatbuffers::Offset<flatbuffers::Vector<int32_t>> shape) {
    fbb_.AddOffset(FlatVariable::VT_SHAPE, shape);
  }
  void add_values(flatbuffers::Offset<flatbuffers::Vector<float>> values) {
    fbb_.AddOffset(FlatVariable::VT_VALUES, values);
  }
  void add_device(int32_t device) {
    fbb_.AddElement<int32_t>(FlatVariable::VT_DEVICE, device, 0);
  }
  FlatVariableBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FlatVariableBuilder &operator=(const FlatVariableBuilder &);
  flatbuffers::Offset<FlatVariable> Finish() {
    const auto end = fbb_.EndTable(start_, 5);
    auto o = flatbuffers::Offset<FlatVariable>(end);
    return o;
  }
};

inline flatbuffers::Offset<FlatVariable> CreateFlatVariable(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> shape = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> values = 0,
    int32_t device = 0) {
  FlatVariableBuilder builder_(_fbb);
  builder_.add_device(device);
  builder_.add_values(values);
  builder_.add_shape(shape);
  builder_.add_name(name);
  builder_.add_id(id);
  return builder_.Finish();
}

inline flatbuffers::Offset<FlatVariable> CreateFlatVariableDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    const char *name = nullptr,
    const std::vector<int32_t> *shape = nullptr,
    const std::vector<float> *values = nullptr,
    int32_t device = 0) {
  return nd4j::graph::CreateFlatVariable(
      _fbb,
      id,
      name ? _fbb.CreateString(name) : 0,
      shape ? _fbb.CreateVector<int32_t>(*shape) : 0,
      values ? _fbb.CreateVector<float>(*values) : 0,
      device);
}

struct FlatNode FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4,
    VT_NAME = 6,
    VT_OPTYPE = 8,
    VT_OPNUM = 10,
    VT_INPUT = 12,
    VT_DATATYPE = 14,
    VT_OUTPUT = 16,
    VT_EXTRAPARAMS = 18,
    VT_EXTRAINTEGER = 20,
    VT_DIMENSIONS = 22,
    VT_DEVICE = 24,
    VT_SCALAR = 26
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  OpType opType() const {
    return static_cast<OpType>(GetField<int8_t>(VT_OPTYPE, 0));
  }
  int16_t opNum() const {
    return GetField<int16_t>(VT_OPNUM, 0);
  }
  const flatbuffers::Vector<int32_t> *input() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_INPUT);
  }
  DataType dataType() const {
    return static_cast<DataType>(GetField<int8_t>(VT_DATATYPE, 0));
  }
  const flatbuffers::Vector<int32_t> *output() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_OUTPUT);
  }
  const flatbuffers::Vector<float> *extraParams() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_EXTRAPARAMS);
  }
  const flatbuffers::Vector<int32_t> *extraInteger() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_EXTRAINTEGER);
  }
  const flatbuffers::Vector<int32_t> *dimensions() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_DIMENSIONS);
  }
  int32_t device() const {
    return GetField<int32_t>(VT_DEVICE, 0);
  }
  float scalar() const {
    return GetField<float>(VT_SCALAR, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.Verify(name()) &&
           VerifyField<int8_t>(verifier, VT_OPTYPE) &&
           VerifyField<int16_t>(verifier, VT_OPNUM) &&
           VerifyOffset(verifier, VT_INPUT) &&
           verifier.Verify(input()) &&
           VerifyField<int8_t>(verifier, VT_DATATYPE) &&
           VerifyOffset(verifier, VT_OUTPUT) &&
           verifier.Verify(output()) &&
           VerifyOffset(verifier, VT_EXTRAPARAMS) &&
           verifier.Verify(extraParams()) &&
           VerifyOffset(verifier, VT_EXTRAINTEGER) &&
           verifier.Verify(extraInteger()) &&
           VerifyOffset(verifier, VT_DIMENSIONS) &&
           verifier.Verify(dimensions()) &&
           VerifyField<int32_t>(verifier, VT_DEVICE) &&
           VerifyField<float>(verifier, VT_SCALAR) &&
           verifier.EndTable();
  }
};

struct FlatNodeBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(FlatNode::VT_ID, id, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(FlatNode::VT_NAME, name);
  }
  void add_opType(OpType opType) {
    fbb_.AddElement<int8_t>(FlatNode::VT_OPTYPE, static_cast<int8_t>(opType), 0);
  }
  void add_opNum(int16_t opNum) {
    fbb_.AddElement<int16_t>(FlatNode::VT_OPNUM, opNum, 0);
  }
  void add_input(flatbuffers::Offset<flatbuffers::Vector<int32_t>> input) {
    fbb_.AddOffset(FlatNode::VT_INPUT, input);
  }
  void add_dataType(DataType dataType) {
    fbb_.AddElement<int8_t>(FlatNode::VT_DATATYPE, static_cast<int8_t>(dataType), 0);
  }
  void add_output(flatbuffers::Offset<flatbuffers::Vector<int32_t>> output) {
    fbb_.AddOffset(FlatNode::VT_OUTPUT, output);
  }
  void add_extraParams(flatbuffers::Offset<flatbuffers::Vector<float>> extraParams) {
    fbb_.AddOffset(FlatNode::VT_EXTRAPARAMS, extraParams);
  }
  void add_extraInteger(flatbuffers::Offset<flatbuffers::Vector<int32_t>> extraInteger) {
    fbb_.AddOffset(FlatNode::VT_EXTRAINTEGER, extraInteger);
  }
  void add_dimensions(flatbuffers::Offset<flatbuffers::Vector<int32_t>> dimensions) {
    fbb_.AddOffset(FlatNode::VT_DIMENSIONS, dimensions);
  }
  void add_device(int32_t device) {
    fbb_.AddElement<int32_t>(FlatNode::VT_DEVICE, device, 0);
  }
  void add_scalar(float scalar) {
    fbb_.AddElement<float>(FlatNode::VT_SCALAR, scalar, 0.0f);
  }
  FlatNodeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FlatNodeBuilder &operator=(const FlatNodeBuilder &);
  flatbuffers::Offset<FlatNode> Finish() {
    const auto end = fbb_.EndTable(start_, 12);
    auto o = flatbuffers::Offset<FlatNode>(end);
    return o;
  }
};

inline flatbuffers::Offset<FlatNode> CreateFlatNode(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    OpType opType = OpType_TRANSFORM,
    int16_t opNum = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> input = 0,
    DataType dataType = DataType_INHERIT,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> output = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> extraParams = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> extraInteger = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> dimensions = 0,
    int32_t device = 0,
    float scalar = 0.0f) {
  FlatNodeBuilder builder_(_fbb);
  builder_.add_scalar(scalar);
  builder_.add_device(device);
  builder_.add_dimensions(dimensions);
  builder_.add_extraInteger(extraInteger);
  builder_.add_extraParams(extraParams);
  builder_.add_output(output);
  builder_.add_input(input);
  builder_.add_name(name);
  builder_.add_id(id);
  builder_.add_opNum(opNum);
  builder_.add_dataType(dataType);
  builder_.add_opType(opType);
  return builder_.Finish();
}

inline flatbuffers::Offset<FlatNode> CreateFlatNodeDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    const char *name = nullptr,
    OpType opType = OpType_TRANSFORM,
    int16_t opNum = 0,
    const std::vector<int32_t> *input = nullptr,
    DataType dataType = DataType_INHERIT,
    const std::vector<int32_t> *output = nullptr,
    const std::vector<float> *extraParams = nullptr,
    const std::vector<int32_t> *extraInteger = nullptr,
    const std::vector<int32_t> *dimensions = nullptr,
    int32_t device = 0,
    float scalar = 0.0f) {
  return nd4j::graph::CreateFlatNode(
      _fbb,
      id,
      name ? _fbb.CreateString(name) : 0,
      opType,
      opNum,
      input ? _fbb.CreateVector<int32_t>(*input) : 0,
      dataType,
      output ? _fbb.CreateVector<int32_t>(*output) : 0,
      extraParams ? _fbb.CreateVector<float>(*extraParams) : 0,
      extraInteger ? _fbb.CreateVector<int32_t>(*extraInteger) : 0,
      dimensions ? _fbb.CreateVector<int32_t>(*dimensions) : 0,
      device,
      scalar);
}

inline const nd4j::graph::FlatNode *GetFlatNode(const void *buf) {
  return flatbuffers::GetRoot<nd4j::graph::FlatNode>(buf);
}

inline bool VerifyFlatNodeBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<nd4j::graph::FlatNode>(nullptr);
}

inline void FinishFlatNodeBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<nd4j::graph::FlatNode> root) {
  fbb.Finish(root);
}

}  // namespace graph
}  // namespace nd4j

#endif  // FLATBUFFERS_GENERATED_NODE_ND4J_GRAPH_H_