#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section;
    double gpa;
};

int main()
{
    Student a; // call the student class

    a.gpa = 3.02; // set the value
    a.roll = 75;
    a.section = 'A';

    char temp[100] = "Shakil"; // here we set the array on a temp variable
    strcpy(a.name, temp);      // then here we copy the array temp to a.name

    cout << a.name << " " << a.roll << " " << a.section << " " << a.gpa << endl;

    return 0;
}