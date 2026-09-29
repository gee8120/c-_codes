#include <iostream>
using namespace std;

int main() {
    float s1, s2, s3, s4;
    cout << "Enter marks for 5 subjects : ";
    cin >> s1 >> s2 >> s3 >> s4;

    float average = (s1 + s2 + s3 + s4) / 4.0;

    cout << "The average is: " << average << endl;
    return 0;
}