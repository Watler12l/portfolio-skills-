#include <iostream>      // Includes input/output library so we can use cout and cin
using namespace std;     // Allows us to use standard library names without std:: prefix

int main() {
    int month;           // Variable to store the user's month number (1–12)

    // Ask the user to enter a month number
    cout << "Enter month number (1–12): ";
    cin >> month;        // Read user input and store it in 'month'

    // Switch statement to determine the number of days in a month
    switch (month) {

        // -----------------------------
        // Months with 31 days
        // -----------------------------
        case 1:   // January
        case 3:   // March
        case 5:   // May
        case 7:   // July
        case 8:   // August
        case 10:  // October
        case 12:  // December
            cout << "This month has 31 days." << endl;
            break;      // Exit switch once a match is found

        // -----------------------------
        // Months with 30 days
        // -----------------------------
        case 4:   // April
        case 6:   // June
        case 9:   // September
        case 11:  // November
            cout << "This month has 30 days." << endl;
            break;      // Exit switch

        // -----------------------------
        // February (special case)
        // -----------------------------
        case 2:
            cout << "February has 28 or 29 days." << endl;
            break;

        // -----------------------------
        // If the user enters a number outside 1–12
        // -----------------------------
        default:
            cout << "Invalid month number!" << endl;
            break;
    }

    return 0;  // End of program
}