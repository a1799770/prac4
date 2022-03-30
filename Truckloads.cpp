#include <string>
#include <iostream>
#include "Truckloads.h"
#include <math.h>
using namespace std;

int Truckloads::numTrucks(int numCrates, int loadSize) {
    
    if (numCrates<0 || loadSize<=0) {
        cout << "ERROR" << " ";
        return 0;
    }

    else if (numCrates==0) {
        return 0; // zero trucks needed
    }
    
    
    // base case
    else if (loadSize >= numCrates) {
        return 1;
    }
    
    else {
    
    // If numCrates is odd, two lines below split into a larger and smaller pile.
    int largePile=numCrates/2 + numCrates%2; // larger pile
    int smallPile=numCrates/2;
    
    return numTrucks(largePile, loadSize) + numTrucks(smallPile, loadSize);
    }
}