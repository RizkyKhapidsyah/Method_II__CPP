#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Mahasiswa
{
public:
	string nama;
	double IPK;

	/*	Constructor ini merupakan method yang pertama kali 
		dipanggil untuk mahasiswa jika ingin dibuat objeknya,
		yang dikembalikan adalah mahasiswa

	*/

	Mahasiswa(string nama, double IPK) {
		Mahasiswa::nama = nama;
		Mahasiswa::IPK = IPK;
	}

	/* atau bisa juga seperti ini :
		Mahasiswa(string inputNama) {
			nama = inputNama;
		}
	*/
	
	//Method tanpa parameter dan tanpa return
	void tampilkanData() {
		cout << "Nama Mahasiswa   : " << nama << endl;
		cout << "IPK              : " << IPK << endl << endl;
	}

	//Method dengan parameter dan tanpa return
	void ubahNama(const char* namaBaru /*atau bisa juga pakai string*/ ) {
		Mahasiswa::nama = namaBaru;
	}

	//Method tanpa parameter dan dengan Return
	string getNama() {
		return Mahasiswa::nama;
	}

	double getIPK() {
		return IPK;
	}

	//Method dengan parameter dan dengan return
	double katrolIPK(const double& tambahanNilai) {
		return Mahasiswa::IPK + tambahanNilai;
	}

};


int main()
{
	Mahasiswa mahasiswa1 = Mahasiswa("Rizky Khapidsyah", 3.4);
	Mahasiswa mahasiswa2 = Mahasiswa("Bambang Aditya", 3.1);

	mahasiswa1.tampilkanData();
	mahasiswa2.tampilkanData();

	mahasiswa1.ubahNama("Dessy Puspita Sari");
	mahasiswa1.tampilkanData();

	string dataNama = mahasiswa1.getNama();
	cout << "\ndataNama  = " << dataNama << endl;
	cout << "dataIPK   = " << mahasiswa1.getIPK() << endl;
	cout << "Nilai katrol   = " << mahasiswa2.katrolIPK(-2.3) << endl;

	_getch();
	return 0;
}