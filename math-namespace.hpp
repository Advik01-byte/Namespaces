#include <iostream>

#ifndef MATH_NAMESPACE_HPP
#define MATH_NAMESPACE_HPP

namespace math {
  const double pi = 3.14159;
  const double e = 2.71828;

  class oper {
    public:
      double add(double x, double y) {
        return x + y;
      }
      int add(int x, int y) {
        return x + y;
      }

      double multiply(double x, double y) {
        return x * y;
      }
      int multiply(int x, int y) {
        return x * y;
      }

      double divide(double x, double y) {
        return x / y;
      }
      int divide(int x, int y) {
        return x / y;
      }

      double minus(double x, double y) {
        return x - y;
      }
      int minus(int x, int y) {
        return x - y;
      }
  };

  oper operators;
}

#endif // MATH_NAMESPACE_HPP