#include<iostream>
#include<conio.h>
using namespace std;

class New
{
private:
    int x;
    int y;
public:
    New(int, int);
    New(const New &Copy);
    void display();
};

New::New (int a, int b) : x(a), y(b){}
New::New(const New &Copy) : x(Copy.x), y(Copy.y){}
void New::display()
{
    cout<<x<<" "<<y<<endl;
}

main()
{
    New ob1(10, 20);
    New ob2=ob1;
    ob1.display();
    ob2.display();
    getch();
}
