#include <iostream>
using namespace std;

int main() {
    // password stored here 
    const string correctPassword = "12345";
    string password;

    // do...while ensures code runs once 
    do {
        cout << "Enter password: ";
        cin >> password; // User types their attempt
    } 
    // Loop keeps going until correct password is aquired 
    while (password != correctPassword);

    // Correct password entered
    cout << "Welcome to the Secure Area!" << endl;

    return 0;
}
