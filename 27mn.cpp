#include <iostream>
using namespace std;
int main() {
    int m;
    cin >> m;
    if (m == 2) {
        cout << "28 or 29 days";
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        cout << "30 days";
    } 
    else {
        cout << "31 days";
    }
}
