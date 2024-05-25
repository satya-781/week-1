#include <iostream>
using namespace std;

int main() {
    int y;
    
    cout << "Enter a year: ";
    cin >> y;
    
    if ((y % 4 == 0 && y % 100 != 0) || (y% 400 == 0)) {
        cout << y << "  leap year." << endl;
    } else {
        cout << y << "  not a leap year." << endl;
    }
    
    return 0;
}
