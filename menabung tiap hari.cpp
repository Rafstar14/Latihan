#include <iostream>
using namespace std;

int main()
{
    int hari, nominal;
    int total = 0;

    cout << "Masukkan nominal tabungan per hari (Rp): ";
    cin >> nominal;

    cout << "Masukkan target hari menabung: ";
    cin >> hari;

    for (int i = 1; i <= hari; i++)
    {
        total += nominal;
    }

    cout << "\nTotal tabungan setelah " << hari << " hari: Rp" << total << endl;

    return 0;
}