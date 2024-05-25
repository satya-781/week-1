#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;
    
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    
    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is equilateral." << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "The triangle is isosceles." << endl;
    } else {
        cout << "The triangle is scalene." << endl;
    }
    return 0;
}
