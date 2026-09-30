// Soal 6: Mengecek suhu tubuh (do while)
#include <iostream>
using namespace std;

int main()
{
    double suhu;

    cout << "=== CEK SUHU TUBUH ===\n";

    do
    {
        cout << "Masukkan suhu tubuh (derajat C): ";
        cin >> suhu;

        if (suhu < 35 || suhu > 42)
        {
            cout << "  ! Suhu tidak valid (harus 35 - 42), ulangi.\n";
        }
    } while (suhu < 35 || suhu > 42);

    cout << "\nSuhu tercatat: " << suhu << " derajat C\n";

    if (suhu < 36.0)
        cout << "Status: Di bawah normal\n";
    else if (suhu <= 37.5)
        cout << "Status: Normal\n";
    else
        cout << "Status: Demam\n";

    return 0;
}