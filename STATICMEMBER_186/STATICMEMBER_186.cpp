#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printAI();
	mahasiswa(string pnama) :nama(pnama) { setID(); }
};