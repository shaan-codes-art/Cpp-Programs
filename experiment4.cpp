
#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary, bonus, totalSalary;

public:
    // Default constructor
    Employee()
    {
        id = 0;
        name = "Unknown";
        salary = 0;
        bonus = 0;
    }

    // Parameterized constructor
    Employee(int i, string n, float s, float b)
    {
        id = i;
        name = n;
        salary = s;
        bonus = b;
    }

    void display()
    {
        totalSalary = salary + bonus;

        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main()
{
    Employee e1;
    Employee e2(101, "Rahul", 30000, 5000);

    cout << "Default Constructor:" << endl;
    e1.display();

    cout << "\nParameterized Constructor:" << endl;
    e2.display();

    return 0;
}
