#include <iostream>
using namespace std;

int main() {
    int firstNumber;
    int secondNumber;
    int temp;

    cout << "Enter first number: "<<endl;
    cin >> firstNumber;

    cout << "Enter second number: "<<endl;
    cin >> secondNumber;

    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    cout << "After swapping:" << endl;
    cout << "First number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;

    return 0;
}
