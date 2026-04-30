#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter your number: "<<endl;
    cin>>a;
    int i=1;
    while(i<=a)  //while ka mtlb hota ha jab tak condition rahega tab tak loop chalega
    {
        cout<<i<<" ";
        i=i+1;
    }
}