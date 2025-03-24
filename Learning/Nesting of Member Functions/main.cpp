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

    void setDetails(string m, string c, float cn, float btb, float p)
    {
        model = m;
        color = c;
        connectivity = cn;
        batteryBackup = btb;
        price = p;
    }

    void getDetails()
    {
        cout << "Model: " << model << endl
             << "Color: " << color << endl
             << "Connectivity: " << "Bluetooth V" << connectivity << endl
             << "Battery Backup: " << batteryBackup << " Hours" << endl
             << "Price: " << price << " PKR" << endl;
    }

    void powerOn(int on);
    bool pairing(int on);
    void connection(bool isOn);
};

void Earbuds ::powerOn(int on)
{
    cout << "Power " << (on ? "On\n" : "Off\n");

    connection(pairing(on));
}

bool Earbuds ::pairing(int on)
{
    cout << "Pairing...\n";
    if (on)
    {
        cout << "Paired\n";
        return true;
    }
    else
    {
        cout << "Pairing Failed\n";
        return false;
    }
}

void Earbuds ::connection(bool isOn)
{
    if (isOn)
    {
        cout << "Connected\n";
    }
    else
    {
        cout << "Connection Failed\n";
    }
}

int main()
{
    Earbuds bluks;
    bluks.setDetails("BX-502", "Black", 5.3, 6, 3199);
    bluks.getDetails();

    cout << endl;

    bluks.powerOn(1);

    return 0;
}