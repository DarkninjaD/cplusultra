
#include <climits>
#include <iostream>
#include <ostream>

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

  /*
   * this code bellow will overflow the ide and complier will point this out but keep a mind out
   */
  short value1 {30000};
  short value2 {1000};
  short total {value1 * value2};
  cout << total << endl;

  /*
   * sizeof will give you size of bytes of a given type
   */

  cout << "char: " << sizeof(char) << " bytes" << endl;
  cout << "unsigned char: " << sizeof(unsigned char) << " bytes" << endl;
  cout << "int: " << sizeof(int) << " bytes" << endl;
  cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
  cout << "long int" << sizeof(long int) << " bytes" << endl;
  cout << "short: " << sizeof(short) << " bytes" << endl;
  cout << "long: " << sizeof(long) << " bytes" << endl;
  cout << "long long" << sizeof(long long) << "bytes" << endl;
  cout << "unsigned long" << sizeof(unsigned long) << "bytes" << endl;
  cout << "float" << sizeof(float) << "bytes" << endl;
  cout << "double" << sizeof(double) << "bytes" << endl;
  cout << "long double" << sizeof(long double) << "bytes" << endl;
 

  /*
   * since they are all CAPs I think it's a macro that tells you the max and min of a given base type
   */
  cout << "Max & Min Value of char: " << CHAR_MAX << " & " << CHAR_MIN << endl;
 
  /*
   * C++ has many diffrent type of constants 
   *  - Literal constants
   *  - Declared constants
   *  - Constant Expression
   *  - Enumerated constants
   *  - Defined constants
   */

  // Literal constants 
  std::string literal_constants = "this is a literal constants";
  cout << literal_constants << " \n" << endl; 

  // this is Defined constants it's completed in per-process
  #define pi 3.141
  const double pi2 {3.141};
  return 0;
}
