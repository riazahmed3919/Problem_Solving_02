#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char name[100], int roll, char section, int math_marks, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student Abul("Abul", 3, 'A', 50, 5);
    Student Babul("Babul", 21, 'A', 75, 5);
    Student Bulbul("Bulbul", 48, 'A', 43, 5);

    if (Abul.math_marks > Babul.math_marks && Abul.math_marks > Bulbul.math_marks)
    {
        cout << Abul.name << " " << Abul.math_marks << endl;
    }
    else if (Babul.math_marks > Bulbul.math_marks)
    {
        cout << Babul.name << " " << Babul.math_marks << endl;
    }
    else
    {
        cout << Bulbul.name << " " << Bulbul.math_marks << endl;
    }

    return 0;
}