// Soal 5: Pesan makanan di kantin (do while)
#include <iostream>
using namespace std;

int main()
{
    int pilihan;
    int jumlahNasi = 0, jumlahMie = 0, jumlahSoto = 0;

    do
    {
        cout << "\n==============================\n";
        cout << "         MENU KANTIN\n";
        cout << "==============================\n";
        cout << " 1. Nasi Goreng\n";
        cout << " 2. Mie Goreng\n";
        cout << " 3. Soto\n";
        cout << " 0. Selesai\n";
        cout << "------------------------------\n";
        cout << "Pilih menu : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            jumlahNasi++;
            cout << ">> Nasi Goreng ditambahkan.\n";
            break;
        case 2:
            jumlahMie++;
            cout << ">> Mie Goreng ditambahkan.\n";
            break;
        case 3:
            jumlahSoto++;
            cout << ">> Soto ditambahkan.\n";
            break;
        case 0:
            cout << "\nPesanan selesai.\n";
            break;
        default:
            cout << ">> Pilihan tidak valid, coba lagi.\n";
        }
    } while (pilihan != 0);

    cout << "\n----- RINGKASAN PESANAN -----\n";
    cout << "Nasi Goreng : " << jumlahNasi << "\n";
    cout << "Mie Goreng  : " << jumlahMie << "\n";
    cout << "Soto        : " << jumlahSoto << "\n";
    cout << "Terima kasih!\n";
    return 0;
}