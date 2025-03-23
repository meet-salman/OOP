#include <iostream>
using namespace std;

class Earbuds
{
public:
    string model,
        color;
    float connectivity,
        batteryBackup,
        price;

    void setDetails(string m, string c, float cn, float btb, float p);

    void getDetails()
    {
        cout << "Model: " << model << endl
             << "Color: " << color << endl
             << "Connectivity: " << "Bluetooth V" << connectivity << endl
             << "Battery Backup: " << batteryBackup << " Hours" << endl
             << "Price: " << price << " PKR" << endl;
    }

    void powerOn()
    {
        cout << "Pairing...\n";
    }
};

void Earbuds ::setDetails(string m, string c, float cn, float btb, float p)
{
    model = m;
    color = c;
    connectivity = cn;
    batteryBackup = btb;
    price = p;
}

int main()
{
    Earbuds bluks;
    bluks.setDetails("BX-502", "Black", 5.3, 6, 3199);
    bluks.getDetails();
    bluks.powerOn();

    cout << endl;
    cout << endl;

    Earbuds amgras;
    bluks.setDetails("Future A8 Pro", "White", 5.3, 5, 2199);
    bluks.getDetails();
    bluks.powerOn();

    return 0;
}