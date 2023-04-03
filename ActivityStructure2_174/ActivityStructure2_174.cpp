#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs;

	cout << "Masukan nim: ";
	cin >> mhs.nim;
	cout << "Masukan nama: ";
	cin >> mhs.nama;
	cout << "Alamat: " << endl;
	cout << "\tNama desa: ";
	cin >> mhs.alamat.desa;
	cout << "\tNama kota: ";
	cin >> mhs.alamat.kota;
	cout << "Masukan umur; ";
	cin >> mhs.umur;

	cout << "\nNim: " << mhs.nim;
	cout << "\nNama: " << mhs.nama;
	cout << "\nDesa: " << mhs.alamat.desa;
	cout << "\nKota: " << mhs.alamat.kota;


}