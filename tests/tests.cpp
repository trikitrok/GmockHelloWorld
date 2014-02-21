#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace testing;

int main(int argc, char* argv[]) {
  // The following line must be executed to initialize Google Mock
  // (and Google Test) before running the tests.
  InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}