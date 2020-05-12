#include <iostream>
#include <map>
using namespace std;

// Given two arrays of the same size, returns a map built from the two arrays
void recFunc(char arrChar[], int arrInt[], int arrSize, map<char, int>& aMap){
    if (arrSize == 0 ) {
        aMap[arrChar[arrSize]] = arrInt[arrSize];
    }

    else {
        recFunc(arrChar, arrInt, --arrSize, aMap);
        aMap[arrChar[arrSize]] = arrInt[arrSize];
    }

}



int main() {

    const int arraySize = 3;

    char arrayChar[arraySize] = { 'a','b','c' };

    int arrayInt[arraySize] = { 1, 2, 3 };

    map<char, int> result;

    recFunc(arrayChar, arrayInt, arraySize, result);

    for (map<char, int>::iterator it = result.begin(); it != result.end(); ++it)

        cout << it->first << " => " << it->second << endl;

    //The expected output is: 

    // a => 1 

    // b => 2 

    // c => 3 

    return 0;

}
