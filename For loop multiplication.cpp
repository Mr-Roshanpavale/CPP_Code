#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n";
    cin>>n;
    int i;
    for(i=0;i<=10;i++)
    {
        cout<<n<<"X"<<i<<"="<<n+i<<endl;
    }
    return 0;
}
