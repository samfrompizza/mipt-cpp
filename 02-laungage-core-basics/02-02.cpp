#include <iostream>
#include <cmath>
#include <print>

namespace
{
  constexpr double epsilon = 1e-12;
}

struct Eq
{
  double a;
  double b;
  double c;
};

bool floatEqual(const double l, const double r)
{
  if (std::abs(l - r) < epsilon)
    return true;
  return false;
}

double findDiscriminant(const Eq &eq)
{
  return eq.b * eq.b - 4 * eq.a * eq.c;
}

int solveEquation(const Eq &eq, double &x1, double &x2)
{
  if (floatEqual(eq.a, 0.0))
  {
    if (!floatEqual(eq.b, 0))
    {
      x1 = -eq.c / eq.b;
      return 1;
    }
    else
    {
      std::print("Invalid arguments!\n");
      return 0;
    }
  }

  else
  {
    double d = findDiscriminant(eq);
    if (d < 0.0)
    {
      std::print("No solutions in R!\n");
      return 0;
    }
    x1 = (-eq.b - std::sqrt(d)) / (2 * eq.a);
    x2 = (-eq.b + std::sqrt(d)) / (2 * eq.a);
  }
  return 2;
}

int main()
{
  Eq eq;
  std::cin >> eq.a >> eq.b >> eq.c;

  double x1, x2;
  int n = solveEquation(eq, x1, x2);
  if (n == 2 && floatEqual(x1, x2))
    n = 1;

  if (n == 2)
  {
    std::print("x1 = {}, x2 = {}\n", x1, x2);
  }
  else if (n == 1)
  {
    std::print("x = {}\n", x1);
  }

  return 0;
}