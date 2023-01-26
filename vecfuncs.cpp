#include "vecfuncs.h"

void fillVector(vector<int>& vec) {
  int i;
  int num;

  for(i = 0; i < 5; i++) {
    cout << "Enter an int: ";
    cin >> num;
    vec.push_back(num);
  }
}

//here, include function description block
void findExtremes(vector<int>& vec, int& min, int& max) {
  //assuming at least 1 val in vec
  min = max = vec[0];
  for (int i = 0; i < vec.size(); i++) {
    if(vec[i] < min) {
      //set a new min 
      min = vec[i];
    }
    if(vec[i] > max) {
      //set a new min 
      max = vec[i];
    }
  }
}

