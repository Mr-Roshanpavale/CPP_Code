#include <iostream>
using namespace std;
int main()
{
    int i,num;
    cout<<"Enter a number:";
    cin>>num;
    for(i=2;i<num-1;i++)
    {
        if(num%i==0)
        {
            cout<<"COMPOSITE";
            exit(0);
        }
    }
    cout<<"PRIME";
}
