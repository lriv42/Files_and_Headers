/*
    Author: liam rivers
    Date: 6/6/2023
    Purpose: in class lab
*/
#include "perfect.h"

int main(){
    //declaring variables
    ifstream infile;
    string userFile;
    //bool used to determine if program continues running or not
    bool programRun = true;
    int fileNum1 = 0;
    int fileNum2 = 0;

    //using a while loop allows me to exti program if range.txt cannot be opened
    while(programRun == true){
        
        //determines if the range text file is open or not
        infile.open("range.txt");
        if(!infile.is_open()){
            cout << "range.txt could not be opened." << endl;
            programRun = false;
        }

        //gets the numbers from range.txt
        infile >> fileNum1;
        infile >> fileNum2;

        //gets name of file user wants numbers printed to
        cout << "What is the name of the file you want the perfect square numbers to  " << endl;
        cout << "be printed to? (example: perfect.txt)" << endl;
        cout << endl;
        getline(cin, userFile);

        //calls the findPerfect function
       findPerfect(fileNum1, fileNum2, userFile);

        //closing range.txt file
        infile.close();

        //success message
        cout << endl;
        cout << "The perfect squares have been successfully printed to " << userFile << endl;
        break;
    }

    return 0;
}