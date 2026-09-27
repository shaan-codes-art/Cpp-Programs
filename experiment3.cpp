#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
    int Product_id;
    string Product_name;
    float Price;
    int MonthlySales[12];

    void GetData()
    {
        cout << "Enter Product id: ";
        cin >> Product_id;

        cout << "Enter Product name: ";
        cin >> Product_name;

        cout << "Enter product price: ";
        cin >> Price;

        cout << "Enter monthly sales:\n";

        for (int i = 0; i < 12; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> MonthlySales[i];
        }
    }

    int Total_quantity()
    {
        int total = 0;

        for (int i = 0; i < 12; i++)
        {
            total = total + MonthlySales[i];
        }

        return total;
    }

    float TotalBill()
    {
        return Total_quantity() * Price;
    }

    void display()
    {
        cout << "\n-------------------------\n";
        cout << "Product ID : " << Product_id << endl;
        cout << "Product Name : " << Product_name << endl;
        cout << "Price : " << Price << endl;
        cout << "Total Quantity : " << Total_quantity() << endl;
        cout << "Total Bill : " << TotalBill() << endl;
        cout << "-------------------------\n";
    }
};

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Product p[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of product " << i + 1 << ":\n";
        p[i].GetData();
    }

    cout << "\n===== Product Details =====\n";

    for (int i = 0; i < n; i++)
    {
        p[i].display();
    }

    return 0;
}