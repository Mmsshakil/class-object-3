#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    char section;

    Student(int roll, char section)
    {
        this->roll = roll; // we use this because to use same name ,this is a pointer which save the address of rahim or karim
        // (*this).roll = roll;  // this is same as before we can use one of them

        this->section = section;
    }
};

int main()
{

    Student rahim(24, 'B');
    Student karim(53, 'A');

    cout << rahim.roll << " " << rahim.section << endl;
    cout << karim.roll << " " << karim.section << endl;

    return 0;
}