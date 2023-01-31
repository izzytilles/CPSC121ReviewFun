#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void openFile(ifstream&, string);
void storeIntsInArray(ifstream&, int []);
void printIntsFromFile(ifstream&, int []);

int main() {
    
    //if file exists, open. if not, terminate

    //read ints from file, and store them in an array. between 1 and 10 ints in file (declare array)

    //cout ints, with comma and space between each no.

    //reverse the ints in the array, 

    ifstream numberFile;
    //int maxArrSize = 10;
    //int arrayOfInts[maxArrSize];

    openFile(numberFile, "number.txt");

    //storeIntsInArray (numberFile, arrayOfInts);

    //openFile (numberfile);

    //printIntsFromFile(numberFile, arrayOfInts);

}

void openFile(ifstream& inFile, string fname) {
    inFile.open(fname);
    if(inFile.is_open()) {
        cout << "file opened\n";
    }
    else {
        cout << "file failed\n";
        exit(-1);
    }
}

void storeIntsInArray(ifstream& numberfile, int arrayOfInts[]) {
    int valueInFile = 0;
    int numberOfInts = 0;
    if (numberfile.is_open()) {
        while(numberfile >> valueInFile) {
            arrayOfInts[numberOfInts] = valueInFile;
            numberOfInts += 1;
        }
    }
}

void printIntsFromFile(ifstream& numberfile, int arrayOfInts[]) {
    int valueInFile = 0;
    int intValue = 0;
    int numberOfInts;
    if (numberfile.is_open()) {
        while(numberfile >> valueInFile) {
            arrayOfInts[numberOfInts] = valueInFile;
            numberOfInts += 1;
        }
        for (int i = 0; i < numberOfInts; i++) {
            cout << arrayOfInts [i];
            cout << ", ";
        }
    }
}