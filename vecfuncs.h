//header file guard code prevents problem of 
//double inclusion of a header file 
//ifndef is 'if not defined'
//VECFUNCS_H is a random name, normal format 
//is file name in all caps with _ instead of .
#ifndef VECFUNCS_H
#define VECFUNCS_H

#include <iostream>
#include <vector>

using namespace std;

//& to pass vector by reference 
void fillVector(vector<int>&);

//pass ints by reference to return 2 manipulated values
void findExtremes(vector<int>&, int&, int&);

#endif