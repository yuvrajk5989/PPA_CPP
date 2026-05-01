#include <iostream>
using namespace std;

class Demo
{
public:
    int i, j;

    Demo(int a, int b)
    {
        i = a;
        j = b;
    }
    void Display()
    {
        cout << i << "\n";
        cout << j << "\n";
    }
};

int main()
{
    Demo dobj1(10, 20);
    Demo dobj2(50, 60);

    dobj1.Display(); // 10, 20
    dobj2.Display(); // 50, 60

    return 0;
}