#include <iostream>
using namespace std;

int main (){
	
	int kecepatan;
	cout << "Masukkan kecepatan drone (km/h):";
	cin >> kecepatan;
	
	if (kecepatan < 40) {
		cout << "Level: Basic" << endl;
	}else if (kecepatan <= 79) {
		cout << "Level: Intermediate" << endl;
	}else if (kecepatan <= 119) {
		cout << "Level: Advanced" << endl;
	}else {
		cout << "Level: Ultra" << endl;
	}
	
	return 0;
}
