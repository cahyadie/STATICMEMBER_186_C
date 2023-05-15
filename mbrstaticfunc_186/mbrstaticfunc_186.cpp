#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();
	
	static void setNIM(int pNim) { nim = pNim;/*Definisi Functiom*/ }
	static int getNim() { return nim;/*Definisi Function*/ }

	mahasiswa(string pnama):nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "nama = " << id << endl;
	cout << endl;
}