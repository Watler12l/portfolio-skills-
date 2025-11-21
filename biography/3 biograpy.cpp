#include <iostream>     
using namespace std;    // Allows us to write cin/cout/string without std:: prefix

int main() {
    string name;        // Variable to store the user's full name (string allows spaces with getline)
    string hometown;    // Variable to store user's hometown (string)
    int age;            // Variable to store user's age (integer)

    cout << "antonio watler: ";  // asking using to input fullname 
    getline(cin, name);                //allows the code to run efficiently with fullname

    cout << "England/london: ";   // this ask's for the user hometown 
    getline(cin, hometown);            // Read the full hometown including spaces

    cout << "31years old: ";        // Ask for the user's age

    // Input validation loop for age
    while (!(cin >> age)) {            // If it doent input a number the condition becomes true 
        cout << "Invalid age. Enter a number: "; // if invalid the ask again 
        cin.clear();                   // Clears the error state caused by invalid input
        cin.ignore(10000, '\n');       // Removes invalid input from the input buffer
    }

    // Output the values using ONE cout (assignment requirement)
    cout << name << "\n"               // Prints name on a new line 
         << hometown << "\n"           // Prints come town on a new line
         << age << endl;               // Print the age on new line 

    return 0;                          // Ends program
}

