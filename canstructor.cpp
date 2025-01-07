#include <iostream>
using namespace std;
class student
{
    public:
    string val;
    public:
    student(string name)
    {
        cout<<"WELCOME";
        val=name;
        cout<<val;
    }
};
int main()
{
    student obj1("techno");
}
