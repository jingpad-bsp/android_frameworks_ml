// clang-format off
// Generated file (from: reshape_quant8_weights_as_inputs.mod.py). Do not edit
std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{1, {-1}}},
  // int -> QUANT8_ASYMM map
  {{0, {1, 2, 3, 4, 5, 6, 7, 8, 9}}},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {1, 2, 3, 4, 5, 6, 7, 8, 9}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

