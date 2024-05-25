#include <iostream>
#define pi 3.141
using namespace std;

int main() {
    double radius, diameter, circumference, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    diameter = 2 * radius;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    cout << "Diameter: " << diameter << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}
