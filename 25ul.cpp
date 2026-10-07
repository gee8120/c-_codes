#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    if ('A'<=ch<= 'Z') {
        cout << "Uppercase";
    }
    else if ('a'<=ch <= 'z') {
        cout << "Lowercase";
    }
    return 0;
}
