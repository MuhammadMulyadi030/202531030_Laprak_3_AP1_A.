#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int durasi; // dalam menit

    cout << "Pilihan alat (1 = Dumbbell, 2 = Treadmill, 3 = Barbell, 4 = Static Bike): ";
    cin >> pilihan;

    cout << "Masukkan durasi pemakaian (menit): ";
    cin >> durasi;

    // Tentukan tarif per 15 menit berdasarkan pilihan menggunakan switch
    int tarifPer15 = 0;
    switch (pilihan) {
        case 1: // Dumbbell
            tarifPer15 = 5000;
            break;
        case 2: // Treadmill
            tarifPer15 = 10000;
            break;
        case 3: // Barbell
            tarifPer15 = 8000;
            break;
        case 4: // Static Bike
            tarifPer15 = 7000;
            break;
        default:
            cout << "Pilihan alat tidak valid. Masukkan angka 1-4." << endl;
            return 0;
    }

    // Jika durasi kurang dari atau sama dengan 0, biaya = 0
    if (durasi <= 0) {
        cout << "Durasi harus lebih dari 0 menit. Total biaya: Rp 0" << endl;
        return 0;
    }

    // Hitung jumlah interval 15-menit dengan looping
    int intervalCount = 0;
    int elapsed = 0;
    while (elapsed < durasi) {
        elapsed += 15;       // tambahkan 15 menit pada setiap iterasi
        intervalCount++;     // hitung satu interval lagi
    }

    // Hitung total biaya
    int totalBiaya = intervalCount * tarifPer15;

    // Output hasil
    cout << "Tarif per 15 menit: Rp " << tarifPer15 << endl;
    cout << "Durasi yang dikenakan (per tarif 15 menit): " << intervalCount << " tarif " << endl;
    cout << "Total biaya sewa: Rp " << totalBiaya << endl;

    return 0;
}


