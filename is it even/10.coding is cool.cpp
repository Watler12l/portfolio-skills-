#include <iostream>
#include <string>
using namespace std;

int main() {
    int userNumber;

    cout << "Enter a number: ";
    cin >> userNumber;

    // Lambda function that returns a string message
    auto isEvenLambda = [](int num) -> string {
        return (num % 2 == 0) ? "The provided number is even" 
                               : "The provided number is odd";
    };

    // Call the lambda function and print result
    cout << isEvenLambda(userNumber) << endl;

    return 0;
}
