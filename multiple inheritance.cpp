#include <iostream>
using namespace std;
class techahack
{
    public:
    void techanohack1()
    {
        cout<<"WELCOME\n";
    }
};
class staff:public techahack
{
    string a,b ;
    public:
    void name()
    {
        cout<<"Enter a name\n"; 
        cin>>a;
        cout<<"Enter a designation\n";
        cin>>b;
    }
};
class student:public staff
{
    string c,d;
    public:
    void name2()
    {
        cout<<"Enter a name\n";
        cin>>c;
        cout<<"Enter a cource\n";
        cin>>d;
    }
};
int main()
{
    student obj;
    obj.techanohack1();
    obj.name();
    obj.name2();
}
