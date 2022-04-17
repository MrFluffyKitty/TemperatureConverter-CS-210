#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // variables
    ifstream inFS;
    ofstream outFS;
    string input;
    int numInput;

    // opens two files in the specified directories
    inFS.open("C:\\Users\\trist\\source\\repos\\TemperatureConverter\\FahrenheitTemperature.txt");
    outFS.open("C:\\Users\\trist\\source\\repos\\TemperatureConverter\\CelsiusTemperature.txt");
    // while true loop to iterate the contents in the directories
    while (true) {
        inFS >> input;
        inFS >> numInput;
        // fahrenheit converter
        numInput = ((numInput - 32) * 5) / 9;
        //outputs results in the specified directory
        outFS << input;
        outFS << " " << numInput << endl;
        // ends loop when finished reading
        if (inFS.eof()) {
            break;
        }
    }
    // closes both files
    inFS.close();
    outFS.close();
    return 0;
}