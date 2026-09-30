// Soal 7: Menghitung langkah olahraga sampai target (while)
#include <iostream>
using namespace std;

int main()
{
    const int TARGET = 10000;
    int total = 0;
    int sesi = 1;
    int langkah;

    cout << "=== TARGET LANGKAH: " << TARGET << " ===\n";

    while (total < TARGET)
    {
        cout << "\nLangkah sesi ke-" << sesi << " : ";
        cin >> langkah;

        if (langkah < 0)
        {
            cout << "  ! Langkah tidak boleh negatif.\n";
            continue; // ulang tanpa menambah total
        }

        total += langkah;
        sesi++;

        if (total < TARGET)
        {
            cout << "  Total sekarang: " << total
                 << " | Sisa: " << (TARGET - total) << " langkah\n";
        }
    }

    cout << "\n*** TARGET TERCAPAI! ***\n";
    cout << "Total langkah: " << total << " (" << (sesi - 1) << " sesi)\n";
    return 0;
}