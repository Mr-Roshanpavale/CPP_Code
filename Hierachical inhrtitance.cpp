# include <iostream>
using namespace std;
class techohack 
{
    public:
    void techohack1()
    {
        cout<<"WELCOME\n";
    }
};
class staff:public techohack
{
    string a;
    public:
    void name()
    {
        cout<<"Enter a name\n";
        cin>>a;
    }
};
class student:public techohack
{
    string c,d;
    public:
    void name2()
    {
        cout<<"Enter a name\n";
        cin>>c;
        cout<<"Enter a course\n";
        cin>>d;
    }
};
int main()
{
    staff obj;
    obj.techohack1();
    obj.name();
    student obj1;
    obj1.name2();

}
