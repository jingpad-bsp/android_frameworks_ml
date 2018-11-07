// clang-format off
// Generated file (from: rotated_bbox_transform.mod.py). Do not edit
std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 250.0f, 290.0f, 300.0f, 280.0f, 0.1f, 1.0f, 121.0f, 60.5f, 2.0f, 0.5f, -200.0f, 2.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 2.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 2.0f, 100.0f, 135.0f, 50.0f, 130.0f, 58.0f, 2.0f, 100.0f, 135.0f, 50.0f, 130.0f, -1.05f, 3.0f, 700.0f, 1050.0f, 600.0f, 1900.0f, 185.0f, 3.0f, 700.0f, 1050.0f, 600.0f, 1900.0f, -185.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.01f, 0.3f, -0.1f, -0.2f, 0.1f, -0.01f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, -0.1f, 2.5f, 3.0f, 1.0f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 1.7f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, 0.5f, -1.5f, -1.2f, -1.7f, 0.2f, 0.2f, -3.0f, -4.0f, -1.0f, 1.0f, -0.5f, 0.3f, 0.5f, -1.0f, 0.2f, 0.2f, -3.0f, -4.0f, -1.1f, 1.0f, -0.5f, 0.3f, 0.5f, -1.1f, 0.3f, -0.2f, 1.1f, -0.8f, -0.1f, 0.1f, 0.05f, -0.5f, -0.5f, 0.1f, 0.3f, -0.2f, 1.1f, -0.8f, -0.1f, 0.1f, 0.05f, -0.5f, -0.5f, 0.1f}}, {2, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {280.0f, 318.0f, 366.420837f, 341.992798f, 0.672958f, 295.0f, 276.0f, 201.096008f, 341.992798f, -0.472958f, 241.0f, 121.099998f, 5.967299f, 0.367879f, -25.729584f, 241.800003f, 120.949997f, 250.000015f, 62.500004f, 37.295776f, 35.068058f, 98.56131f, 71.136116f, 198.12262f, -0.704224f, 25.0f, 60.714287f, 0.711244f, 3.887912f, 39.402824f, 17.857143f, 39.285713f, 105.557945f, 316.673828f, -29.352112f, 25.0f, 60.714287f, 0.711244f, 3.887912f, 24.597168f, 150.0f, 211.428574f, 0.177063f, 0.062286f, 0.704224f, 178.571442f, 182.5f, 130.151367f, 366.0f, 0.704224f, 150.0f, 211.428574f, 0.177054f, 0.0623f, -64.075356f, 178.571442f, 146.428574f, 130.151352f, 504.823792f, -64.075356f, 127.5f, 422.799561f, 256.0f, 177.400848f, -0.729584f, 365.0f, 548.75f, 110.363838f, 349.485474f, 10.729584f, 395.0f, 430.0f, 2707.50415f, 191.801697f, -10.729584f, 255.0f, 442.753632f, 1.0f, 137.492737f, 0.729584f}}},
  // int -> INT32 map
  {{1, {1, 1, 4, 2, 0}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 250.0f, 290.0f, 300.0f, 280.0f, 0.1f, 1.0f, 121.0f, 60.5f, 2.0f, 0.5f, -200.0f, 2.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 2.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 2.0f, 100.0f, 135.0f, 50.0f, 130.0f, 58.0f, 2.0f, 100.0f, 135.0f, 50.0f, 130.0f, -1.05f, 3.0f, 700.0f, 1050.0f, 600.0f, 1900.0f, 185.0f, 3.0f, 700.0f, 1050.0f, 600.0f, 1900.0f, -185.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.01f, 0.3f, -0.1f, -0.2f, 0.1f, -0.01f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, -0.1f, 2.5f, 3.0f, 1.0f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 1.7f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, 0.5f, -1.5f, -1.2f, -1.7f, 0.2f, 0.2f, -3.0f, -4.0f, -1.0f, 1.0f, -0.5f, 0.3f, 0.5f, -1.0f, 0.2f, 0.2f, -3.0f, -4.0f, -1.1f, 1.0f, -0.5f, 0.3f, 0.5f, -1.1f, 0.3f, -0.2f, 1.1f, -0.8f, -0.1f, 0.1f, 0.05f, -0.5f, -0.5f, 0.1f, 0.3f, -0.2f, 1.1f, -0.8f, -0.1f, 0.1f, 0.05f, -0.5f, -0.5f, 0.1f}}, {2, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {280.0f, 318.0f, 366.420837f, 341.992798f, 0.672958f, 295.0f, 276.0f, 201.096008f, 341.992798f, -0.472958f, 241.0f, 121.099998f, 5.967299f, 0.367879f, -25.729584f, 241.800003f, 120.949997f, 250.000015f, 62.500004f, 37.295776f, 35.068058f, 98.56131f, 71.136116f, 198.12262f, -0.704224f, 25.0f, 60.714287f, 0.711244f, 3.887912f, 39.402824f, 17.857143f, 39.285713f, 105.557945f, 316.673828f, -29.352112f, 25.0f, 60.714287f, 0.711244f, 3.887912f, 24.597168f, 150.0f, 211.428574f, 0.177063f, 0.062286f, 0.704224f, 178.571442f, 182.5f, 130.151367f, 366.0f, 0.704224f, 150.0f, 211.428574f, 0.177054f, 0.0623f, -64.075356f, 178.571442f, 146.428574f, 130.151352f, 504.823792f, -64.075356f, 127.5f, 422.799561f, 256.0f, 177.400848f, -0.729584f, 365.0f, 548.75f, 110.363838f, 349.485474f, 10.729584f, 395.0f, 430.0f, 2707.50415f, 191.801697f, -10.729584f, 255.0f, 442.753632f, 1.0f, 137.492737f, 0.729584f}}},
  // int -> INT32 map
  {{1, {1, 1, 4, 2, 0}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 250.0f, 290.0f, 300.0f, 280.0f, 0.1f, 1.0f, 121.0f, 60.5f, 2.0f, 0.5f, -200.0f, 2.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 2.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 2.0f, 100.0f, 135.0f, 50.0f, 130.0f, 58.0f, 2.0f, 100.0f, 135.0f, 50.0f, 130.0f, -1.05f, 3.0f, 700.0f, 1050.0f, 600.0f, 1900.0f, 185.0f, 3.0f, 700.0f, 1050.0f, 600.0f, 1900.0f, -185.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.01f, 0.3f, -0.1f, -0.2f, 0.1f, -0.01f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, -0.1f, 2.5f, 3.0f, 1.0f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 1.7f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, 0.5f, -1.5f, -1.2f, -1.7f, 0.2f, 0.2f, -3.0f, -4.0f, -1.0f, 1.0f, -0.5f, 0.3f, 0.5f, -1.0f, 0.2f, 0.2f, -3.0f, -4.0f, -1.1f, 1.0f, -0.5f, 0.3f, 0.5f, -1.1f, 0.3f, -0.2f, 1.1f, -0.8f, -0.1f, 0.1f, 0.05f, -0.5f, -0.5f, 0.1f, 0.3f, -0.2f, 1.1f, -0.8f, -0.1f, 0.1f, 0.05f, -0.5f, -0.5f, 0.1f}}, {2, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {280.0f, 318.0f, 366.420837f, 341.992798f, 0.672958f, 295.0f, 276.0f, 201.096008f, 341.992798f, -0.472958f, 120.5f, 60.549999f, 2.983649f, 0.18394f, -205.729584f, 120.900002f, 60.474998f, 125.000008f, 31.250002f, -142.704224f, 24.54764f, 68.992912f, 49.79528f, 138.685837f, -0.704224f, 17.5f, 42.5f, 0.497871f, 2.721538f, 39.402824f, 12.5f, 27.499998f, 73.890564f, 221.671677f, -29.352112f, 17.5f, 42.5f, 0.497871f, 2.721538f, -155.402832f, 105.0f, 148.0f, 0.123944f, 0.0436f, 0.704224f, 125.000008f, 127.75f, 91.105957f, 256.199982f, 0.704224f, 105.0f, 148.0f, 0.123938f, 0.04361f, -64.075356f, 125.000008f, 102.5f, 91.105942f, 353.376648f, -64.075356f, 790.0f, 860.0f, 5415.008301f, 383.603394f, 179.270416f, 730.0f, 1097.5f, 220.727676f, 698.970947f, 190.729584f, 790.0f, 860.0f, 5415.008301f, 383.603394f, -190.729584f, 730.0f, 1097.5f, 220.727676f, 698.970947f, -179.270416f}}},
  // int -> INT32 map
  {{1, {1, 1, 4, 2, 0}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 250.0f, 290.0f, 300.0f, 280.0f, 0.1f, 1.0f, 121.0f, 60.5f, 2.0f, 0.5f, -200.0f, 2.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 2.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 2.0f, 100.0f, 135.0f, 50.0f, 130.0f, 58.0f, 2.0f, 100.0f, 135.0f, 50.0f, 130.0f, -1.05f, 3.0f, 700.0f, 1050.0f, 600.0f, 1900.0f, 185.0f, 3.0f, 700.0f, 1050.0f, 600.0f, 1900.0f, -185.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.01f, 0.3f, -0.1f, -0.2f, 0.1f, -0.01f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, -0.1f, 2.5f, 3.0f, 1.0f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 1.7f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, 0.5f, -1.5f, -1.2f, -1.7f, 0.2f, 0.2f, -3.0f, -4.0f, -1.0f, 1.0f, -0.5f, 0.3f, 0.5f, -1.0f, 0.2f, 0.2f, -3.0f, -4.0f, -1.1f, 1.0f, -0.5f, 0.3f, 0.5f, -1.1f, 0.3f, -0.2f, 1.1f, -0.8f, -0.1f, 0.1f, 0.05f, -0.5f, -0.5f, 0.1f, 0.3f, -0.2f, 1.1f, -0.8f, -0.1f, 0.1f, 0.05f, -0.5f, -0.5f, 0.1f}}, {2, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {280.0f, 318.0f, 366.420837f, 341.992798f, 0.672958f, 295.0f, 276.0f, 201.096008f, 341.992798f, -0.472958f, 120.5f, 60.549999f, 2.983649f, 0.18394f, -205.729584f, 120.900002f, 60.474998f, 125.000008f, 31.250002f, -142.704224f, 24.54764f, 68.992912f, 49.79528f, 138.685837f, -0.704224f, 17.5f, 42.5f, 0.497871f, 2.721538f, 39.402824f, 12.5f, 27.499998f, 73.890564f, 221.671677f, -29.352112f, 17.5f, 42.5f, 0.497871f, 2.721538f, -155.402832f, 105.0f, 148.0f, 0.123944f, 0.0436f, 0.704224f, 125.000008f, 127.75f, 91.105957f, 256.199982f, 0.704224f, 105.0f, 148.0f, 0.123938f, 0.04361f, -64.075356f, 125.000008f, 102.5f, 91.105942f, 353.376648f, -64.075356f, 790.0f, 860.0f, 5415.008301f, 383.603394f, 179.270416f, 730.0f, 1097.5f, 220.727676f, 698.970947f, 190.729584f, 790.0f, 860.0f, 5415.008301f, 383.603394f, -190.729584f, 730.0f, 1097.5f, 220.727676f, 698.970947f, -179.270416f}}},
  // int -> INT32 map
  {{1, {1, 1, 4, 2, 0}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_3 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 250.0f, 290.0f, 300.0f, 280.0f, 0.1f, 1.0f, 121.0f, 60.5f, 2.0f, 0.5f, -200.0f, 2.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 2.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 2.0f, 100.0f, 135.0f, 50.0f, 130.0f, 58.0f, 2.0f, 100.0f, 135.0f, 50.0f, 130.0f, -1.05f, 3.0f, 700.0f, 1050.0f, 600.0f, 1900.0f, 185.0f, 3.0f, 700.0f, 1050.0f, 600.0f, 1900.0f, -185.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.01f, 0.3f, -0.1f, -0.2f, 0.1f, -0.01f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, -0.1f, 2.5f, 3.0f, 1.0f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 1.7f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, 0.5f, -1.5f, -1.2f, -1.7f, 0.2f, 0.2f, -3.0f, -4.0f, -1.0f, 1.0f, -0.5f, 0.3f, 0.5f, -1.0f, 0.2f, 0.2f, -3.0f, -4.0f, -1.1f, 1.0f, -0.5f, 0.3f, 0.5f, -1.1f, 0.3f, -0.2f, 1.1f, -0.8f, -0.1f, 0.1f, 0.05f, -0.5f, -0.5f, 0.1f, 0.3f, -0.2f, 1.1f, -0.8f, -0.1f, 0.1f, 0.05f, -0.5f, -0.5f, 0.1f}}, {2, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {280.0f, 318.0f, 366.420837f, 341.992767f, 0.672958f, 295.0f, 276.0f, 201.096008f, 341.992767f, -0.472958f, 120.5f, 60.549999f, 2.983649f, 0.18394f, -25.729584f, 120.900002f, 60.474998f, 125.000008f, 31.250002f, 37.295776f, 12.5f, 27.499998f, 73.890564f, 221.671677f, -0.704224f, 17.5f, 42.5f, 0.497871f, 2.721538f, 39.402824f, 12.5f, 27.499998f, 73.890564f, 221.671677f, -29.352112f, 17.5f, 42.5f, 0.497871f, 2.721538f, 24.597168f, 105.0f, 148.0f, 0.123938f, 0.04361f, 0.704224f, 125.000008f, 102.5f, 91.105942f, 353.376648f, 0.704224f, 105.0f, 148.0f, 0.123938f, 0.04361f, -64.075356f, 125.000008f, 102.5f, 91.105942f, 353.376648f, -64.075356f, 790.0f, 860.0f, 5415.008301f, 383.603394f, -0.729584f, 730.0f, 1097.5f, 220.727676f, 698.970947f, 10.729584f, 790.0f, 860.0f, 5415.008301f, 383.603394f, -10.729584f, 730.0f, 1097.5f, 220.727676f, 698.970947f, 0.729584f}}},
  // int -> INT32 map
  {{1, {1, 1, 4, 2, 0}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_relaxed_3 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 250.0f, 290.0f, 300.0f, 280.0f, 0.1f, 1.0f, 121.0f, 60.5f, 2.0f, 0.5f, -200.0f, 2.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 2.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 2.0f, 100.0f, 135.0f, 50.0f, 130.0f, 58.0f, 2.0f, 100.0f, 135.0f, 50.0f, 130.0f, -1.05f, 3.0f, 700.0f, 1050.0f, 600.0f, 1900.0f, 185.0f, 3.0f, 700.0f, 1050.0f, 600.0f, 1900.0f, -185.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.01f, 0.3f, -0.1f, -0.2f, 0.1f, -0.01f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, -0.1f, 2.5f, 3.0f, 1.0f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 1.7f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, 0.5f, -1.5f, -1.2f, -1.7f, 0.2f, 0.2f, -3.0f, -4.0f, -1.0f, 1.0f, -0.5f, 0.3f, 0.5f, -1.0f, 0.2f, 0.2f, -3.0f, -4.0f, -1.1f, 1.0f, -0.5f, 0.3f, 0.5f, -1.1f, 0.3f, -0.2f, 1.1f, -0.8f, -0.1f, 0.1f, 0.05f, -0.5f, -0.5f, 0.1f, 0.3f, -0.2f, 1.1f, -0.8f, -0.1f, 0.1f, 0.05f, -0.5f, -0.5f, 0.1f}}, {2, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {280.0f, 318.0f, 366.420837f, 341.992767f, 0.672958f, 295.0f, 276.0f, 201.096008f, 341.992767f, -0.472958f, 120.5f, 60.549999f, 2.983649f, 0.18394f, -25.729584f, 120.900002f, 60.474998f, 125.000008f, 31.250002f, 37.295776f, 12.5f, 27.499998f, 73.890564f, 221.671677f, -0.704224f, 17.5f, 42.5f, 0.497871f, 2.721538f, 39.402824f, 12.5f, 27.499998f, 73.890564f, 221.671677f, -29.352112f, 17.5f, 42.5f, 0.497871f, 2.721538f, 24.597168f, 105.0f, 148.0f, 0.123938f, 0.04361f, 0.704224f, 125.000008f, 102.5f, 91.105942f, 353.376648f, 0.704224f, 105.0f, 148.0f, 0.123938f, 0.04361f, -64.075356f, 125.000008f, 102.5f, 91.105942f, 353.376648f, -64.075356f, 790.0f, 860.0f, 5415.008301f, 383.603394f, -0.729584f, 730.0f, 1097.5f, 220.727676f, 698.970947f, 10.729584f, 790.0f, 860.0f, 5415.008301f, 383.603394f, -10.729584f, 730.0f, 1097.5f, 220.727676f, 698.970947f, 0.729584f}}},
  // int -> INT32 map
  {{1, {1, 1, 4, 2, 0}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_single_batch = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 100.0f, 135.0f, 50.0f, 130.0f, 58.0f, 100.0f, 135.0f, 50.0f, 130.0f, -1.05f}}, {1, {-0.5f, -0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 1.7f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, 0.5f, -1.5f, -1.2f, -1.7f, 0.2f, 0.2f, -3.0f, -4.0f, -1.0f, 1.0f, -0.5f, 0.3f, 0.5f, -1.0f, 0.2f, 0.2f, -3.0f, -4.0f, -1.1f, 1.0f, -0.5f, 0.3f, 0.5f, -1.1f}}, {2, {256.0f, 256.0f, 0.7f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {12.5f, 27.499998f, 73.890564f, 221.671677f, -0.704224f, 17.5f, 42.5f, 0.497871f, 2.721538f, 39.402824f, 12.5f, 27.499998f, 73.890564f, 221.671677f, -29.352112f, 17.5f, 42.5f, 0.497871f, 2.721538f, 24.597168f, 105.0f, 148.0f, 0.123938f, 0.04361f, 0.704224f, 125.000008f, 102.5f, 91.105942f, 353.376648f, 0.704224f, 105.0f, 148.0f, 0.123938f, 0.04361f, -64.075356f, 125.000008f, 102.5f, 91.105942f, 353.376648f, -64.075356f}}},
  // int -> INT32 map
  {{1, {4}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_single_batch_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 15.0f, 35.0f, 10.0f, 30.0f, -58.0f, 100.0f, 135.0f, 50.0f, 130.0f, 58.0f, 100.0f, 135.0f, 50.0f, 130.0f, -1.05f}}, {1, {-0.5f, -0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 1.7f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, 0.5f, -1.5f, -1.2f, -1.7f, 0.2f, 0.2f, -3.0f, -4.0f, -1.0f, 1.0f, -0.5f, 0.3f, 0.5f, -1.0f, 0.2f, 0.2f, -3.0f, -4.0f, -1.1f, 1.0f, -0.5f, 0.3f, 0.5f, -1.1f}}, {2, {256.0f, 256.0f, 0.7f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {12.5f, 27.499998f, 73.890564f, 221.671677f, -0.704224f, 17.5f, 42.5f, 0.497871f, 2.721538f, 39.402824f, 12.5f, 27.499998f, 73.890564f, 221.671677f, -29.352112f, 17.5f, 42.5f, 0.497871f, 2.721538f, 24.597168f, 105.0f, 148.0f, 0.123938f, 0.04361f, 0.704224f, 125.000008f, 102.5f, 91.105942f, 353.376648f, 0.704224f, 105.0f, 148.0f, 0.123938f, 0.04361f, -64.075356f, 125.000008f, 102.5f, 91.105942f, 353.376648f, -64.075356f}}},
  // int -> INT32 map
  {{1, {4}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

