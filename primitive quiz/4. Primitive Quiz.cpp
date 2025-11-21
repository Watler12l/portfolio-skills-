#include <iostream>     // Needed for input/output (cin, cout)
#include <string>       // Needed for using string variables
#include <algorithm>    // Needed for transform() to convert strings to lowercase
using namespace std;

// Function to convert any text to lowercase
// This allows us to compare answers without worrying about capital letters
string toLowerCase(string text) {
    transform(text.begin(), text.end(), text.begin(), ::tolower);
    return text;  // Return the converted lowercase string
}

int main() {
    // Store the question
    string question = "What is the capital of France?";

    // Store the correct answer in lowercase
    // (We will convert the user input to lowercase too)
    string correctAnswer = "paris";

    // Variable to hold the user's answer
    string userAnswer;

    // Ask the question
    cout << question << " ";

    // Get the user's full answer (including spaces if any)
    getline(cin, userAnswer);

    // Convert the user's answer to lowercase
    // This ensures "Paris", "PARIS", "PaRiS" are all accepted
    userAnswer = toLowerCase(userAnswer);

    // Compare user's answer with the correct one
    if (userAnswer == correctAnswer) {
        cout << "Correct!" << endl;   // If it matches
    } else {
        cout << "Wrong!" << endl;     // If it doesn't match
    }

    return 0;   // End of the program
}
