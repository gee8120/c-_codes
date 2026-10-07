#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c, d;
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    if (d >= 0)
    {
        cout << (-b + sqrt(d)) / (2 * a) << endl; // x may be
        cout << (-b - sqrt(d)) / (2 * a) << endl; // y may be
    }
    else {
        cout << "No real roots";
    }
    return 0;
}
