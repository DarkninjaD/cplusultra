
#include <iostream>

/*
  using here is like pulling incode and using it as a declared method or value
  while namespace is taking everything in std and dumping it
  while std::cin and such is pulling just the single method
  regardless it becomes as if you defined it in your code.
*/

// using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main(int arg_Count, char *arg_Vector[])
{

  /*
    this code will pull args after the executable
    arg_Count is the amount of args coming in from the terminal
    the first one is the command name itself.
    arg_Vector is the whole list of args and what was inputted into the string.
  */

  // int fav_number;
  // cout << "this is how many args you sent to me " << arg_Count << " which one do you see it?";
  // cin >> fav_number;
  // cout << "is this your arg?" << arg_Vector[fav_number - 1] << endl;

  /*
    the ticks (') are not added into the number
    they are just there to help you read
  */

  long very_long_number = 7'600'000'000;
  cout << very_long_number << endl;

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
  // cout << __cplusplus << endl;

  return 0;
}