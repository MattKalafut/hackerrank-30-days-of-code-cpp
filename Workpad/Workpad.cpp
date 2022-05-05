#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare a variable named 'input_string' to hold our input.
    string inputString;

    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    getline(cin, inputString);

    // Print a string literal saying "Hello, World." to stdout using cout.
    cout << "Hello, World." << endl;

    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    cout << inputString << endl;

    return 0;
}