//Find sum of all number starting from 1 to a

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter your number: ";
    cin>>a;
    int sum=0;
    int i=1;
    while(i<=a)
    {
        cout<<i<<" "<<endl;;
        sum=sum+i;
        i=i+1;
    }
    cout<<"Sum of all the digits: "<<sum;
}