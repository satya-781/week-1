#include <iostream>
using namespace std;

int main() {
    double marks[5], total = 0, percentage, average;

    cout << "Enter marks for five subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }
  
    average = total / 5;
    percentage = (total / 500) * 100;  
    
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    
    return 0;
}
