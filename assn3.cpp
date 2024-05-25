#include<iostream>
using namespace std;
int main (){
     int a,s=0;
    cout<<"Enter a number :";
    cin>>a;
    do{
    s=s+a%10;a=a/10;}
    while(a!=0);
    cout<<s;
    return 0;
}