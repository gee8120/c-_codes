#include <iostream>
using namespace std;

int main() {
    float radius;
    cout << "Enter the radius of the sphere : ";
    cin >> radius;
    float volume = (4.0/3.0) * 3.141 * radius * radius * radius;

    cout << "Volume of the sphere is : " << volume << endl;
    return 0;
}