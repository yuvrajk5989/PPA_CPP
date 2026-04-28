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

    void gun()
    {
        cout << "Inside Base gun\n";
    }

    void sun()
    {
        cout << "Inside Base sun\n";
    }
}; // 8 Bytes

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

    void run()
    {
        cout << "Inside Derived run\n";
    } // Definition
}; //  16 Bytes

int main()
{
    cout << sizeof(Base) << "\n";    // 8
    cout << sizeof(Derived) << "\n"; // 16
    return 0;
}