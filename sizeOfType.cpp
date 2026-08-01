#include <iostream>
#include <ostream>
#include <climits>

using std::endl;
using std::cout;

  /*
   * sizeof will give you size of bytes of a given type
   */

void sizeOfType() {
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
}
