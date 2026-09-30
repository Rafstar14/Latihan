// Soal 3: Mengisi bensin sampai 10 liter (while)
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int TARGET = 10;
    int bensin = 0;

    cout << "=== PENGISIAN BENSIN ===\n";

    while (bensin < TARGET)
    {
        bensin++; // tambah 1 liter tiap pengisian

        // Membuat bar progres, contoh: [####------]
        string bar = "[" + string(bensin, '#') + string(TARGET - bensin, '-') + "]";
        cout << bar << " " << bensin << "/" << TARGET << " liter\n";
    }

    cout << "\nTangki penuh! Total bensin: " << bensin << " liter.\n";
    return 0;
}