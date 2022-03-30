#include <string>
#include <iostream>
#include "EfficientTruckloads.h"
#include <math.h>
using namespace std;

int term[1000]; // index represents the number of crates

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {

    if (numCrates<=0 || loadSize<=0) {
        cout << "ERROR" << " ";
        return -1;
    }

    // base case
    if (loadSize >= numCrates) {
        return 1;
    }

    else {
    
    // If numCrates is odd, two lines below split into a larger and smaller pile.
    int largePile=numCrates/2 + numCrates%2; // larger pile, will be even
    int smallPile=numCrates/2;
    
    return numTrucks(largePile, loadSize) + numTrucks(smallPile, loadSize);
    }
}