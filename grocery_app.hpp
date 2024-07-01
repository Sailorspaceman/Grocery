// Jonathon Johnson
// Grocery App
// 6/30

#ifndef GROCERY_APP_HPP
#define GROCERY_APP_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

class Grocery{
    public:
        Grocery(const string& inputFilename, const string& frequencyFilename);
        void ReadInputFile();

        void GenerateFrequencyFile();

        void DisplayInputItemFrequency();

        void DisplayAllItems();

        void DisplayHistogram();
    private:
    map<string, int> frequencyMap;
    string inputFilename;
    string frequencyFilename;
};

#endif