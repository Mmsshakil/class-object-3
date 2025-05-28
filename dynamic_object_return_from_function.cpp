#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    char section;

    Student(int roll, char section)
    {
        this->roll = roll;
        this->section = section;
    }
};

Student *fun()
{
    Student *rahim = new Student(24, 'B');
    return rahim;
}

int main()
{
    Student *p = fun();
    cout << p->roll << " " << p->section << endl;

    return 0;
}