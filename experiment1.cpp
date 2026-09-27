#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    float marks;

public:
    void getinfo()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void showinfo()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;

        if (marks >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    Student s;

    s.getinfo();
    s.showinfo();

    return 0;
}