#include <cmath>
#include <print>
#include <iostream>

namespace
{
  constexpr double kSqrt5 = 2.2360679774997896964;
  constexpr double kPhi = (1.0 + kSqrt5) / 2.0;
  constexpr double kPsi = (1.0 - kSqrt5) / 2.0;
}

inline static int fibonacci(int n)
{
  return static_cast<int>(std::round((std::pow(kPhi, n) - std::pow(kPsi, n)) / kSqrt5));
}

int main()
{
  int n = 0;
  std::cin >> n;
  std::print("{}\n", fibonacci(n));
}