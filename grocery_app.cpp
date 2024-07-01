// Jonathon Johnson
// Grocery App
// 6/30

#include "grocery_app.hpp"

// constructor for functions
Grocery::Grocery(const string& inputFilename, const string& frequencyFilename)    : inputFilename(inputFilename), frequencyFilename(frequencyFilename) {}

// Read in from file
void Grocery::ReadInputFile() {
    ifstream inputFile(inputFilename);
    string item;
    while (inputFile >> item) {
        frequencyMap[item]++;
    }
    inputFile.close();
}

// Generate file to be called back later
void Grocery::GenerateFrequencyFile() {
    ofstream outputFile(frequencyFilename);
    for (const auto& entry : frequencyMap) {
        outputFile << entry.first << " " << entry.second << endl;
    }
    outFile.close();
}

// Dispalay specific item frequency
void Grocery::DisplayInputItemFrequency() {
    string item;
    cout << "What item are you looking for? ";
    cin >> item;
    auto it = frequencyMap.find(item);
    if (it != frequencyMap.end()) {
        cout << "Frequency of " << item << ": " << it->second << endl;
    }
    else {
        cout << item << " not found." << endl;
    }
}

//Function to display items and their frequencies
void Grocery::DisplayAllItems() {
    for(const auto& entry : frequencyMap) {
        cout << entry.first << ": " << entry.second << endl;
    }
}

//Function to display items and their frequencies in a histogram
void Grocery::DisplayHistogram(){
    for(const auto& entry : frequencyMap){
        cout << entry.first << " ";
        for(int i = 0; i < entry.second; ++i){
            cout << "~";
        }
        cout << endl;
    }
}