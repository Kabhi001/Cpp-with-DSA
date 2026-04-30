//From Fahrenheit to celsius remember the formula : (F-32)*5/9;

#include<iostream>
using namespace std;

int main()
{
    float f;
    cout<<"Enter your Fahrenheit: ";
    cin>>f;
    float c;
    c=(f-32)*5/9;
    cout<<"Your Temp. in Celsius: "<<c;
    return 0;
}