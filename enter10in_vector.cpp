#include "vecfuncs.h"
  
int main() {
  vector<int> userNums;
  int min, max;

  fillVector(userNums);

  cout << "size: " << userNums.size() <<endl;

  //task 1: define and call f(x) to find and return min and   max # in vector
  findExtremes(userNums, min, max);
  cout << "min: " << min << " max: " << max << endl;
  //task 2: convert to 3 file format 
}
