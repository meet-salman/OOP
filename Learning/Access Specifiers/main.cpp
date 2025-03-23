#include <iostream>
using namespace std;

class Earbuds
{
private:
    string manufacturer;
    float buyingPrice;

public:
    string model,
        color;
    float connectivity,
        batteryBackup,
        sellingPrice;

    void setDetails(string mnf, string m, string c, float cn, float btb, float sp, float bp);

    void getDetails()
    {
        cout << "Model: " << model << endl
             << "Color: " << color << endl
             << "Connectivity: Bluetooth - V" << connectivity << endl
             << "Battery Backup: " << batteryBackup << " hours" << endl
             << "Seling Price: " << sellingPrice << " PKR" << endl
             << "Manufacturer: " << manufacturer << endl
             << "Buying Price: " << buyingPrice << " PKR" << endl;
    }

    void powerOn()
    {
        cout << "Pairing...\n";
    }
};

void Earbuds ::setDetails(string mnf, string m, string c, float cn, float btb, float sp, float byp)
{
    model = m;
    color = c;
    connectivity = cn;
    batteryBackup = btb;
    sellingPrice = sp;
    manufacturer = mnf;
    buyingPrice = byp;
}

int main()
{
    Earbuds bluks;
    bluks.setDetails("Shenzhen", "BX-502", "Black", 5.3, 6, 3199, 2476);
    bluks.getDetails();
    bluks.powerOn();

    cout << endl;
    cout << endl;

    Earbuds amgras;
    amgras.setDetails("Shenzhen", "Future A8 Pro", "White", 5.3, 5, 2199, 1567.78);
    amgras.getDetails();
    amgras.powerOn();

    // // ==> Private Attributes are nor Accesseble Publically
    // cout << "Manufacturer: " << amgras.manufacturer << endl
    //      << "Buying Price: " << amgras.buyingPrice << " PKR" << endl;

    return 0;
}