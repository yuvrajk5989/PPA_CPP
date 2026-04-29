#include <iostream>
using namespace std;

class Base
{
private:
    int i, j;

public:
    Base()
    {
        cout << "Inside Base Constructor\n";
        i = 0;
        j = 0;
    }

    ~Base()
    {
        cout << "Inside Base Destructor\n";
    }

    void fun()
    {
        cout << "Inside fun of Base\n";
    }
};

class Derived : public Base
{
public:
    int x;

    Derived()
    {
        cout << "Inside Derived Constructor\n";
        x = 0;
    }

    ~Derived()
    {
        cout << "Inside Derived Destructor\n";
    }

    void gun()
    {
        cout << "Inside gun of Derived\n";
    }
};

int main()
{
    cout << "Inside Main\n";

    Derived dobj;

    cout << "Size of base class object is : " << sizeof(Base) << "\n";       // 8
    cout << "Size of Derived class oblect is : " << sizeof(Derived) << "\n"; // 12

    // cout << dobj.i << "\n"; // Error
    // cout << dobj.j << "\n"; // Error
    cout << dobj.x << "\n"; // 0

    cout << "End of main\n";

    return 0;
}