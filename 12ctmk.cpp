#include <iostream>
using namespace std;
int main() {
    float cm;
    cout << "Enter length in centimeters: ";
    cin >> cm;
    float meters = cm / 100.0;
    float kilometers = cm / 100000.0;
    cout << "Meters: " << meters << endl;
    cout << "Kilometers: " << kilometers << endl;
}