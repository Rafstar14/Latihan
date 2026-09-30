#include <iostream>
using namespace std;

int main()
{
    int total = 0;

    for (int hari = 1; hari <= 7; hari++)
    {
        int pengeluaran;
        cout << "Pengeluaran hari ke-" << hari << ": Rp";
        cin >> pengeluaran;
        total += pengeluaran;
    }

    cout << "Total pengeluaran seminggu: Rp" << total << endl;
    return 0;
}