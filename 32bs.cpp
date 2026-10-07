#include <iostream>
using namespace std;
int main() {
    int a,b; // a is selling price and b is buyimg price
    cin >> a >> b;
    
    if (a > b) {
        cout << "Profit  : " << a - b;
    } else {
        cout << "Loss: " << b - a;
    }
    return 0;
}
