#include <iostream>
#include <string>
using namespace std;

int main() {
    // Array of names
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    const int arraySize = 6;

    // Ask user for search term
    string searchTerm;
    cout << "Enter the name to search for: ";
    cin >> searchTerm;

    bool found = false;

    // Search through the array
    for (int i = 0; i < arraySize; i++) {
        if (names[i] == searchTerm) {
            found = true;
            break;
        }
    }

    // Output result
    if (found)
        cout << searchTerm << " was found in the array!" << endl;
    else
        cout << searchTerm << " was NOT found in the array." << endl;

    return 0;
}