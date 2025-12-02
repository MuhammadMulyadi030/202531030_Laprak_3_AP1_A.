#include <iostream>
using namespace std;

int main() {
	
    int umur;
    
	cout << "Masukkan umur peserta: ";
	cin >> umur;
 
    if (umur >= 0) { 
        if (umur < 10) {
            std::cout << "Peralatan yang boleh dipakai: Starter Kit\n";
        } else { // umur >= 10
            if (umur <= 15) {
                std::cout << "Peralatan yang boleh dipakai: Basic Gear\n";
            } else { 
                if (umur <= 20) {
                    std::cout << "Peralatan yang boleh dipakai: Pro Gear\n";
                } else { 
                    std::cout << "Peralatan yang boleh dipakai: Expert Gear\n";
                }
            }
        }
    } else {
        std::cout << "Input tidak valid: umur tidak boleh negatif.\n";
    }

    return 0;
}

