#include <iostream>
using namespace std;

int main() {
    double l_cm, l_m, l_km;
    
    cout << "Enter length in centimeters: ";
    cin >> l_cm;
    
    l_m = l_cm / 100.0;
    l_km = l_cm / 100000.0;
    
    cout << "Length in meters: " << l_m << " m" << endl;
    cout << "Length in kilometers: " << l_km << " km" << endl;
    return 0;
}
