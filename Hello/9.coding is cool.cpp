#include <iostream>
#include <string>
using namespace std;

// Function returns a string instead of printing directly
string hello() {
    return "Hello";
}

int main() {
    // Call function and print its return value
    cout << hello() << endl;

    return 0;
}
