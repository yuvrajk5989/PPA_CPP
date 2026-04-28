#include <iostream>
using namespace std;

class Base
{
public:
    int i, j;

    void fun()
    {
        cout << "Inside Base fun\n";
    }

    virtual void gun()
    {
        cout << "Inside Base gun\n";
    }

    virtual void sun()
    {
        cout << "Inside Base sun\n";
    }
}; //

class Derived : public Base
{
public:
    int x, y;

    void fun()
    {
        cout << "Inside Derived fun\n";
    } // Redefinition

    void sun()
    {
        cout << "Inside Derived sun\n";
    } // Redefinition

    virtual void run()
    {
        cout << "Inside Derived run\n";
    } // Definition
}; // 24

int main()
{
    cout << sizeof(Base) << "\n";    // 16
    cout << sizeof(Derived) << "\n"; // 24
    return 0;
}