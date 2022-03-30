#include <string>
#include <iostream>
#include "EfficientTruckloads.h"
#include <math.h>
using namespace std;

int term[1000]= {0}; //array to store the box values 

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    
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

    // memoization
    else if (term[numCrates]!=0) {
        cout << "memoization is working" << endl;
        return term[numCrates];
    }
    
    else {
    
    // If numCrates is odd, two lines below split into a larger and smaller pile.
    int largePile=numCrates/2 + numCrates%2; // larger pile
    int smallPile=numCrates/2; // smaller

    term[numCrates] = numTrucks(largePile, loadSize) + numTrucks(smallPile, loadSize);

    cout << "The trucks required for 9 boxes is: " << term[9] << endl;

    return term[numCrates];
    
    }
}
