#include <iostream>

/*
  using here is  pulling incode and using it as a declared method or value
  while namespace is taking everything in std and dumping it
  while std::cin and such is pulling just the single method
  regardless it becomes as if you defined it in your code.
*/

// using namespace std;
using std::cout;
using std::endl;
int main(int arg_Count, char *arg_Vector[]) {

  /*
    the ticks (') are not added into the number
    they are just there to help you read
  */

  long very_long_number = 7'600'000'000;
  cout << very_long_number << endl;
  return 0;
}
