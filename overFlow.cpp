#include <iostream>
#include <ostream>

using std::cin;
using std::cout;
using std::endl;

void overFlow() {
  /*
   * this code bellow will overflow the ide and complier will point this out but keep a mind out
   */
  short value1 {30000};
  short value2 {1000};
  short total {value1 * value2};
  cout << total << endl;
}
