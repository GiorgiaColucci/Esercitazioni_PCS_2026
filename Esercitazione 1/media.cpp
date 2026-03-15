#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
cout << "Inserisci il nome del file: \n";
string filename;
cin >> filename;
ifstream ifs(filename);
if ( ifs.is_open() ) { 
	for (int i = 0; i < 3; i++) {
		string city;
		double temp1;
		double temp2;
		double temp3;
		double temp4;
		double avg;
	ifs >> city >> temp1 >> temp2 >> temp3 >> temp4;
	avg = (temp1 + temp2 + temp3 + temp4)/4;
	cout << "La temperatura media a" << city << "è di" << avg << "gradi" << "\n";
	}
} 
return 0;
}