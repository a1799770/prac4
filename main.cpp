#include <iostream>
#include <math.h>
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include "Reverse.h"
using namespace std;

 
int main() {
    // Creating classes
    Truckloads* truck= new Truckloads();
    EfficientTruckloads* efficient= new EfficientTruckloads();
    Reverse* reverse= new Reverse();
    
    //Creating input variables
    int ReverseInt;
    string ReverseString;
    int NumCrates;
    int LoadSize;
    
    
    // Getting the inputs from user
    cin >> ReverseInt;
    cin >> ReverseString;
    cin >> NumCrates;
    cin >> LoadSize;
    
    cout << reverse->reverseDigit(ReverseInt) << " " << reverse->reverseString(ReverseString);
    cout << " " << truck->numTrucks(NumCrates, LoadSize) << " " << efficient->numTrucks(NumCrates, LoadSize) << endl;
    
    return 0;
}