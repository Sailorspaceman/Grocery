//Jonathon Johnson
//Grocery App
// 6/30


#include <iostream>
#include "grocery_app.hpp"

int main () {
    const string inputFile = "input.txt";
    const string outputFile = "frequency.dat";

    Grocery appfunction(inputFilename, frequencyFilename);

    appfunction.ReadInputFile();

    appfunction.GenerateFrequencyFile();

    int choice;

    while(true){
        cout << " Corner Grocer" << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "1. Display frequency for a specific item" << endl;
        cout << "2. Display a list of all items and their frequencies" << endl;
        cout << "3. Display histogram of all  items" << endl;
        cout << "4. Exit Application" << endl;
        cout << "Please enter your selection as a number 1-4:" << endl;

        cin >> choice;

        switch(choice) {
            case 1:
                appfunction.DisplayInputItemFrequency();
                break;
            case 2:
                appfunction.DisplayAllItems();
                break;
            case 3:
                appfunction.DisplayHistogram();
                break;
            case 4:
                cout << "Exiting Application\n"
                return 0;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n"
                break;

        }

    }
return 0;
}