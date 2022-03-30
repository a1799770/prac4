#include "Reverse.h"
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int Reverse::reverseDigit(int integer) {

    //Exclude negatives
    if (integer <0) {
        cout << "number is negative please enter a positive number" <<endl;
        return -1;
    }
    //base condition
    if (integer==0) {
        return 0;
    }

    //Find the 'length' of the integer
    int length = log10(integer);

    // Implementing recursion
    return ((integer%10 * pow(10, length)) + reverseDigit(integer/10));
}

string Reverse::reverseString(string String) {
    if (String.length() ==1) {
        return String;
    }
    else { 
        return reverseString(String.substr(1,String.length())) + String.at(0);
    }

}
