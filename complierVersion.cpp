#include <iostream>

using std::cout;
using std::endl;

void complierVersion() {
  /*
   __cplusplus is a macro that tells you what complier version your using.
   good for understand features that you may think should be there but isn't
    199711L => per C++11
    201103L => C++11
    201402L => C++14
    201703L => C++17
    202002L => C++20
    202302L => C++23
    [ref](https://en.cppreference.com/w/cpp/preprocessor/replace#Predefined_macros)
  */
  cout << __cplusplus << endl;
}
