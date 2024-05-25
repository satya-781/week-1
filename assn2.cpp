#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number :";
    cin>>a;
    if(a==0) cout<<"The enterred number is zero.";
    else if(a>0) cout<<"The enterred number is positive.";
    else cout<<"The enterred number is negative.";
    
    return 0; 
}