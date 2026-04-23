#include<iostream>
using namespace std;

int main()
{
    // int a,b;
    // cout<<"Enter the value of a and b: ";
    // cin>>a>>b;
    // if(a>b)
    // {
    //     cout<<a<<" is greater than "<<b;
    // }
    // else{
    //     cout<<b<<" is greater than "<<a;
    // }
    // return 0;


    //Checking the number is +ve , -ve or zero;
    int a;
    cout<<"Enter the value of a:";
    cin>>a;

    if(a>0)
    {
        cout<<"A is positive"<<endl;
    }
    else{
        if(a<0)
        {
            cout<<"A is negative"<<endl;
        }
        else{
            cout<<"A is 0"<<endl;
        }
    }
    return 0;
}