#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter your number: ";
    cin>>a;
    int num=2;
    while(num<a)
    {
        if(a%num==0)
        {
            cout<<"Number is not prime for "<< num <<endl;
        }
        else{
            cout<<"Number is prime for "<< num << endl;
        }
        num=num+1;
    }
}
