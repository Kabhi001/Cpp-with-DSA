#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter your character : "<<endl;
    cin>>a;
    if(a>=97 && a<=122)
    {
        cout<<"It's a lower alphabet"<<endl;
    }
    else if(a>=65 && a<=90)
    {
        cout<<"It's a Capital Alphabet"<<endl;
    }
    else{
        cout<<"It's a numeric value"<<endl;
    }
    return 0;
}