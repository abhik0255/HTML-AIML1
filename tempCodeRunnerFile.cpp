#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Number 1:";
    cin>>num1;
    cout<<"Number 2:";
    cin>>num2;

    if(num1 > num2)
    {
        cout<<"Number 1 is greater than Number 2";
        
    }

    else if(num1 < num2)
    {
        cout<<"Number 1 is less than Number 2";
    }

    else
    {
        cout<<"Number 1 is equal to Number 2";
    }
    return 0;
}