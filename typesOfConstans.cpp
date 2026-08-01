#include <iostream>
#include <ostream>

using std::endl;
using std::cout;

  /*
   * C++ has many diffrent type of constants 
   *  - Literal constants
   *  - Declared constants
   *  - Constant Expression
   *  - Enumerated constants
   *  - Defined constants
   */

void typesOfConstans() { 

  // Literal constants 
  std::string literal_constants = "this is a literal constants";
  cout << literal_constants << " \n" << endl; 

  // this is Defined constants it's completed in per-process
  #define pi 3.141
  const double pi2 {3.141};
}
