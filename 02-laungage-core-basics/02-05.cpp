#include <iostream>
#include <cmath>
#include <print>

double calcPi(double epsilon)
{
  double pi = 0.0;
  double diff = 1.0;
  int n = 0;
  while (std::abs(diff) > epsilon)
  {
    pi += diff;
    n++;
    diff = (n % 2 == 0 ? 1.0 : -1.0) / (2 * n + 1);
  }
  return 4 * pi;
}

double calcExp(double epsilon)
{
  double e = 0.0;
  double diff = 1.0;
  int n = 0;
  while (diff > epsilon)
  {
    e += diff;
    n++;
    diff /= n;
  }
  return e;
}

int main()
{
  double epsilon;
  std::cin >> epsilon;

  std::print("pi = {}\n", calcPi(epsilon));
  std::print("e = {}\n", calcExp(epsilon));

  return 0;
}
