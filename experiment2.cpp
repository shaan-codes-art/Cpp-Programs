#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:

    void getInfo()
    {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Breadth: ";
        cin >> breadth;
    }

    void showInfo();
};

void Rectangle::showInfo()
{
    float area, perimeter;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
}

int main()
{
    Rectangle r;

    r.getInfo();
    r.showInfo();
    return 0;
}