#include <iostream>
#include <vector>

using namespace std;

//& to pass vector by reference 
void fillVector(vector<int>&);
  
int main() {
  vector<int> userNums;

  fillVector(userNums);

  cout << "size: " << userNums.size() <<endl;

  //task 1: define and call f(x) to find and return min and max # in vector
  //tasl 2: convert to 3 file format 
}

void fillVector(vector<int>& vec) {
  int i;
  int num;

  for(i = 0; i < 5; i++) {
    cout << "Enter an int: ";
    cin >> num;
    vec.push_back(num);
  }
}