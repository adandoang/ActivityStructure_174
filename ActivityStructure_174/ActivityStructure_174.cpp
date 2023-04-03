#include <iostream>
using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20220140174";
	mhs1.nama = "Akhdan";
	mhs1.alamat = "Bekasi";
	mhs1.umur = 19;

	cout << "Masukan nim: ";
	cin >> mhs2.nim;
	cout << "Masukan nama: ";
	cin >> mhs2.nama;
	cout << "Masukan alamat: ";
	cin >> mhs2.alamat;
	cout << "Masukan umur: ";
	cin >> mhs2.umur;

	cout << "\nnim: " << mhs1.nim;
	cout << "\nnama: " << mhs1.nama;
	cout << "\nalamat: " << mhs1.nim;
	cout << "\numur: " << mhs1.umur;

	cout << "\nnim: " << mhs2.nim;
	cout << "\nnama: " << mhs2.nama;
	cout << "\nalamat: " << mhs2.nim;
	cout << "\numur: " << mhs2.umur;


}