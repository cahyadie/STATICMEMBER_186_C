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
	
	static void setNim(int pNim) { nim = pNim;/*Definisi Functiom*/ }
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

int main() {
	mahasiswa mhs1("sri dadi");
	mahasiswa mhs2("budi jatmiko");
	mahasiswa::setNim(9); 
	mahasiswa mhs3("andi janu");
	mahasiswa mhs4("joko whaono");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;

	return 0;
}