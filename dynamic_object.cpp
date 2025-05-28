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

int main()
{

    Student rahim(24, 'B');
    // Student karim(53, 'A');

    Student *karim = new Student(53, 'A'); // this is a dynamic object

    cout << rahim.roll << " " << rahim.section << endl;
    cout << karim->roll << " " << (*karim).section << endl;
    // (*karim).section and karim->roll are same

    return 0;
}