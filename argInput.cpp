#include <iostream>
#include <ostream>

using std::cin;
using std::cout;
using std::endl;
void argInput(int arg_count, char *arg_vector[]) {

  /*
    this code will pull args after the executable
    arg_Count is the amount of args coming in from the terminal
    the first one is the command name itself.
    arg_Vector is the whole list of args and what was inputted into the string.
  */

  int fav_number;
  cout << "this is how many args you sent to me " << arg_count << " which one do you see it?";
  cin >> fav_number;
  cout << "is this your arg?" << arg_vector[fav_number - 1] << endl;
}
