#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
};

int main()
{
    Person p1;
    p1.name = "Doe";
    cout << "Name: " << p1.name << endl;
    return 0;
}