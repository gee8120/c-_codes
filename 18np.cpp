#include <iostream>
using namespace std;

int main() {
    int nu;
    cout << "Enter a number: ";
    cin >> nu;
    if (nu > 0) {
        cout << "The number is positive." << endl;
    } else if (nu < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
}