#include <iostream>
using namespace std;
int main() {
    int amount;
    cin >> amount;
    cout << "100s : " << amount / 100 << endl;
    amount = amount % 100;
    cout << "50s : " << amount / 50 << endl;
    amount = amount % 50;
    cout << "10 s: " << amount / 10 << endl;
}
