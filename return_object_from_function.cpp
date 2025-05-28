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

Student fun()
{
    Student rahim(24, 'B');
    return rahim;
}

int main()
{
    Student obj = fun(); // call the function and set value on object named obj
    cout << obj.roll << " " << obj.section << endl;

    return 0;
}