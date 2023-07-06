#include <iostream>

using namespace std;

/*
void sayHi(string name, int age)
{
    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old" << endl;
}
*/

void sayHi(string name, int age); // function stub

int main()
{
    sayHi("Mike", 60);
    sayHi("Tom", 45);
    sayHi("Steve", 19);

    return 0;
}

void sayHi(string name, int age)
{
    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old" << endl;
}