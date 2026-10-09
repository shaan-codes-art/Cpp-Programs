#include <iostream>
using namespace std;

// 1. Static Data Members and Static Member Functions
class Student
{
    int rollNo;
    static int count;

public:
    void getData(int r)
    {
        rollNo = r;
        count++;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
    }

    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;

// 2. Friend Function
class B;

class A
{
    int value1;

public:
    A(int x)
    {
        value1 = x;
    }

    friend void compare(A, B);
};

class B
{
    int value2;

public:
    B(int y)
    {
        value2 = y;
    }

    friend void compare(A, B);
};

void compare(A a, B b)
{
    if (a.value1 > b.value2)
        cout << "Class A value is greater" << endl;
    else if (a.value1 < b.value2)
        cout << "Class B value is greater" << endl;
    else
        cout << "Both values are equal" << endl;
}

// 3. Friend Class
class FriendB;

class FriendA
{
    int number;

public:
    FriendA()
    {
        number = 100;
    }

    friend class FriendB;
};

class FriendB
{
public:
    void display(FriendA obj)
    {
        cout << "Private Number: "
             << obj.number << endl;
    }
};

int main()
{
    int choice;

    cout << "===== MENU =====" << endl;
    cout << "1. Static Members" << endl;
    cout << "2. Friend Function" << endl;
    cout << "3. Friend Class" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        Student s1, s2, s3;

        s1.getData(1);
        s2.getData(2);
        s3.getData(3);

        s1.display();
        s2.display();
        s3.display();

        Student::showCount();
        break;
    }

    case 2:
    {
        A obj1(50);
        B obj2(30);

        compare(obj1, obj2);
        break;
    }

    case 3:
    {
        FriendA obj1;
        FriendB obj2;

        obj2.display(obj1);
        break;
    }

    default:
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}

