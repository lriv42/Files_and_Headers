/*
    Author: liam rivers
    Date: 6/6/2023
    Purpose: in class lab
*/
#include "perfect.h"

/*************************************************************************************
    function name:      findPerfect
    function purpose:   sends numbers to the isPerfect function to determine if they
                        are a perfect square or not. If it is then it prints hat number
                        to the file the user determines.
**************************************************************************************/
void findPerfect (int lower, int upper, string filename){
    long long square = 0;
    ofstream outfile;

    outfile.open(filename);

    for (int i=lower; i <= upper; i++){
        if (isPerfect(i)) {
            outfile << i << endl;
        }
    }
    outfile.close();
}
/***************************************************************************************
    function name:      isPerfect
    function purpose:   determines if a number is a perfect square or not, if it is then
                        it will return true.
***************************************************************************************/

bool isPerfect(long long x) {
    int squareRootNum = 0;
    squareRootNum = sqrt(x);
    if ( squareRootNum * squareRootNum == x){
        return true;
    }
    else if(x < 0){
        return false;
    }
    else{
        return false;
    }
}