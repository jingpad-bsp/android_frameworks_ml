// clang-format off
// Generated file (from: tanh_v1_2.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_TANH, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type14);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_TANH, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {256}, 0.05f, 100);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {256}, 0.0078125f, 128);
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_TANH, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {256}, 0.05f, 100);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0}, 0.0078125f, 128);
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_TANH, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_INT32, {0});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type8(Type::TENSOR_INT32, {1});
  OperandType type9(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type3);
  auto roi = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type9);
  auto param2 = model->addOperand(&type10);
  auto param3 = model->addOperand(&type10);
  auto param4 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type7);
  auto classesOut = model->addOperand(&type6);
  auto batchSplitOut = model->addOperand(&type6);
  auto in = model->addOperand(&type12);
  auto param7 = model->addOperand(&type10);
  auto param8 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type9);
  auto param11 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type10);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type13);
  auto out = model->addOperand(&type13);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_TANH, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_relaxed(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_INT32, {0});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type8(Type::TENSOR_INT32, {1});
  OperandType type9(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type3);
  auto roi = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type9);
  auto param2 = model->addOperand(&type10);
  auto param3 = model->addOperand(&type10);
  auto param4 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type7);
  auto classesOut = model->addOperand(&type6);
  auto batchSplitOut = model->addOperand(&type6);
  auto in = model->addOperand(&type12);
  auto param7 = model->addOperand(&type10);
  auto param8 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type9);
  auto param11 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type10);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type13);
  auto out = model->addOperand(&type13);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_TANH, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_quant8(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.0078125f, 128);
  OperandType type19(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type20(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type6(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_INT32, {1});
  OperandType type9(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type21);
  auto roi = model->addOperand(&type19);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type9);
  auto param2 = model->addOperand(&type10);
  auto param3 = model->addOperand(&type10);
  auto param4 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto scoresOut = model->addOperand(&type22);
  auto roiOut = model->addOperand(&type20);
  auto classesOut = model->addOperand(&type6);
  auto batchSplitOut = model->addOperand(&type6);
  auto in = model->addOperand(&type17);
  auto param7 = model->addOperand(&type10);
  auto param8 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type9);
  auto param11 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type10);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type16);
  auto out = model->addOperand(&type18);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_TANH, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_float16(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type25(Type::FLOAT16, {});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type29(Type::TENSOR_FLOAT16, {0});
  OperandType type6(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type28);
  auto roi = model->addOperand(&type26);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type25);
  auto param2 = model->addOperand(&type10);
  auto param3 = model->addOperand(&type10);
  auto param4 = model->addOperand(&type25);
  auto param5 = model->addOperand(&type25);
  auto param6 = model->addOperand(&type25);
  auto scoresOut = model->addOperand(&type29);
  auto roiOut = model->addOperand(&type27);
  auto classesOut = model->addOperand(&type6);
  auto batchSplitOut = model->addOperand(&type6);
  auto in = model->addOperand(&type24);
  auto param7 = model->addOperand(&type10);
  auto param8 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type25);
  auto param10 = model->addOperand(&type25);
  auto param11 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type10);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type23);
  auto out = model->addOperand(&type23);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static _Float16 param1_init[] = {0.30000001192092896f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.4000000059604645f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_TANH, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type30(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_INT32, {0});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type8(Type::TENSOR_INT32, {1});
  OperandType type9(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type3);
  auto roi = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type9);
  auto param2 = model->addOperand(&type10);
  auto param3 = model->addOperand(&type10);
  auto param4 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type7);
  auto classesOut = model->addOperand(&type6);
  auto batchSplitOut = model->addOperand(&type6);
  auto in = model->addOperand(&type12);
  auto param7 = model->addOperand(&type10);
  auto param8 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type9);
  auto param11 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type10);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type13);
  auto out = model->addOperand(&type30);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_TANH, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape_relaxed(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type30(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_INT32, {0});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type8(Type::TENSOR_INT32, {1});
  OperandType type9(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type3);
  auto roi = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type9);
  auto param2 = model->addOperand(&type10);
  auto param3 = model->addOperand(&type10);
  auto param4 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type7);
  auto classesOut = model->addOperand(&type6);
  auto batchSplitOut = model->addOperand(&type6);
  auto in = model->addOperand(&type12);
  auto param7 = model->addOperand(&type10);
  auto param8 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type9);
  auto param11 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type10);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type13);
  auto out = model->addOperand(&type30);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_TANH, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape_quant8(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type19(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type20(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0078125f, 128);
  OperandType type6(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_INT32, {1});
  OperandType type9(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type21);
  auto roi = model->addOperand(&type19);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type9);
  auto param2 = model->addOperand(&type10);
  auto param3 = model->addOperand(&type10);
  auto param4 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto scoresOut = model->addOperand(&type22);
  auto roiOut = model->addOperand(&type20);
  auto classesOut = model->addOperand(&type6);
  auto batchSplitOut = model->addOperand(&type6);
  auto in = model->addOperand(&type17);
  auto param7 = model->addOperand(&type10);
  auto param8 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type9);
  auto param11 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type10);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type16);
  auto out = model->addOperand(&type31);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_TANH, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape_float16(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type25(Type::FLOAT16, {});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type32(Type::TENSOR_FLOAT16, {0});
  OperandType type6(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type28);
  auto roi = model->addOperand(&type26);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type25);
  auto param2 = model->addOperand(&type10);
  auto param3 = model->addOperand(&type10);
  auto param4 = model->addOperand(&type25);
  auto param5 = model->addOperand(&type25);
  auto param6 = model->addOperand(&type25);
  auto scoresOut = model->addOperand(&type32);
  auto roiOut = model->addOperand(&type27);
  auto classesOut = model->addOperand(&type6);
  auto batchSplitOut = model->addOperand(&type6);
  auto in = model->addOperand(&type24);
  auto param7 = model->addOperand(&type10);
  auto param8 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type25);
  auto param10 = model->addOperand(&type25);
  auto param11 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type10);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type23);
  auto out = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static _Float16 param1_init[] = {0.30000001192092896f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.4000000059604645f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_TANH, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

