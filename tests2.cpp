// CMakeVcpkgManifest.cpp : Defines the entry point for the application.
//

#include <gtest/gtest.h>
using namespace std;
// Tests factorial of 0.

int Factorial(int n) {
  return n  ;
}

TEST(FactorialTest, Handles) {
  EXPECT_EQ(Factorial(5), 5);
}

// Tests factorial of positive numbers.
TEST(FactorialTest, HandlesPositiveInput) {
  EXPECT_EQ(Factorial(1), 1);
  EXPECT_EQ(Factorial(2), 2);
  EXPECT_EQ(Factorial(3), 3);
  EXPECT_EQ(Factorial(8), 8);
}

