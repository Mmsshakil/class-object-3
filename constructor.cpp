#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    char section;

    // make a constructor
    Student(int r, char s)
    {
        roll = r;
        section = s;
    }
};

int main()
{

    // rahim.roll = 24;
    // rahim.section = 'B';
    // karim.roll = 53;
    // karim.section = 'A';

    Student rahim(24, 'B'); // we use constractor to make the input part easy
    Student karim(53, 'A');

    cout << rahim.roll << " " << rahim.section << endl;
    cout << karim.roll << " " << karim.section << endl;

    return 0;
}