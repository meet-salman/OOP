#include <iostream>
using namespace std;

// Parent Class of Earbuds
class Earbuds
{
public:
    string brand,
        model,
        color;
    float connectivity,
        batteryBackup,
        price;

    void displayAirPods();
    void setDetails(string b, string m, string c, float cn, float btb, float p);
};

// Setter Method of Parent Class of Earbuds
void Earbuds ::setDetails(string b, string m, string c, float cn, float btb, float p)
{
    brand = b;
    model = m;
    color = c;
    connectivity = cn;
    batteryBackup = btb;
    price = p;
}

// Getter Method of Parent Class of Earbuds
void Earbuds::displayAirPods()
{
    cout << "Model: " << model << endl
         << "Color: " << color << endl
         << "Connectivity: " << "Bluetooth V" << connectivity << endl
         << "Battery Backup: " << batteryBackup << " Hours" << endl
         << "Price: " << price << " PKR" << endl;
    cout << endl;
}

// Child Class of => Earbuds
class Bluks : public Earbuds
{
};

// Class of Bluks Obkects Collections
class BluksCollection
{
public:
    Bluks airPods[3];
    int noOfItems = 0;

    void addBluks(string b, string m, string c, float cn, float btb, float p);

    void displayCollection();
};

// Setter Method of => Class BluksCollection
void BluksCollection ::addBluks(string b, string m, string c, float cn, float btb, float p)
{

    if (noOfItems < 3)
    {
        airPods[noOfItems].setDetails(b, m, c, cn, btb, p);
        noOfItems++;
    }
    else
    {
        cout << "No More Space on Shelf...\n\n";
    }
};

// Getter Method of => Class BluksCollection
void BluksCollection ::displayCollection()
{
    if (noOfItems)
    {
        for (int i = 0; i < noOfItems; i++)
        {
            cout << "- AirPods #" << (i + 1) << endl;
            airPods[i].displayAirPods();
        }
    }
    else
    {
        cout << "No Items on Shelf...\n\n";
    }
}

int main()
{
    BluksCollection myCollection;

    myCollection.displayCollection();

    myCollection.addBluks("BLUK'S", "BX-502", "Black", 5.3, 6, 3199);
    myCollection.addBluks("BLUK'S", "BX-504", "White", 5.3, 7, 3749);
    myCollection.addBluks("BLUK'S", "BX-624", "Grey", 5.3, 12.5, 4989);
    myCollection.addBluks("BLUK'S", "BX-244", "Blue", 5.3, 2.5, 1890);

    myCollection.displayCollection();

    return 0;
}