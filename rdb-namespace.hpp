#include <iostream>
#include <string>

#ifndef RDB_NAMESPACE_HPP
#define RDB_NAMESPACE_HPP

namespace rdb {
  template <typename T>
  void print(T x, int newLine = 1) {
    if (newLine == 0) {
      std::cout << x;
    } else {
      std::cout << x;

      for (int i = 0; i < newLine; ++i) {
        std::cout << std::endl;
      }
    }
  }

  template <typename T>
  T input(std::string msg, T var, int newLine = 1) {
    std::cout << msg;
    std::cin >> var;

    if (newLine > 0) {
      for (int i = 0; i < newLine; ++i) {
        std::cout << std::endl;
      }
    }

    return var;
  }
}

#endif // RDB_NAMESPACE_HPP