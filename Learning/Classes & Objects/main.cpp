#include <iostream>
using namespace std;

class Earbuds
{
public:
    string model = "BX-502",
           color = "Black";
    float connectivity = 5.3,
          batteryBackup = 6,
          price = 3199;

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

int main()
{
    Earbuds bluks;
    bluks.getDetails();
    bluks.powerOn();

    return 0;
}