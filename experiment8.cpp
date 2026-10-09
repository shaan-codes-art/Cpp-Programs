
#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void getPerson()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }

    void showPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
    int rollNo;
    float marks;

public:
    void getStudent()
    {
        getPerson();

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void showStudent()
    {
        showPerson();

        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.getStudent();

    cout << "\nStudent Details:" << endl;
    s.showStudent();

    return 0;
}

