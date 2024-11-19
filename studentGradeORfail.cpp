#include<iostream>
using namespace std;
int main()
{
    string name,branch;
    int m1,m2,m3,total,average;
    cout<<"Enter a name";
    cin>>name;
    cout<<"\n Enter a branch";
    cin>>branch;
    cout<<"\n Enter m1,m2,m3";
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    average=total/3;
    cout<<"name"<<name<<endl;
    cout<<"branch="<<branch<<endl;
    cout<<"m1="<<m1<<" "<<"m2="<<m2<<" "<<"m3="<<m3<<endl;
    cout<<"total="<<total<<endl;
    cout<<"average="<<average;
    if(total>=80)
    {
        cout<<"Grade A";
    }
    else
    if(total>=60)
    {
        cout<<"Grade C";
    }
    else
    {
        cout<<"Fail";
    }
    return 0;
}
