// Soal 4: Login PIN ATM (while)
#include <iostream>
using namespace std;

int main()
{
    const int PIN_BENAR = 1234;
    int pin;
    int percobaan = 1;

    cout << "=== ATM ===\n";
    cout << "Masukkan PIN : ";
    cin >> pin;

    while (pin != PIN_BENAR)
    {
        cout << "PIN salah! (percobaan ke-" << percobaan << ")\n\n";
        percobaan++;
        cout << "Masukkan PIN : ";
        cin >> pin;
    }

    cout << "\nLogin berhasil\n";
    return 0;
}