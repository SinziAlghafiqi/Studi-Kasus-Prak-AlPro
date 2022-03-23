#include<iostream>
#include<fstream>
using namespace std;
void line2(int n);
void line(int n);
int main(){
	int pil, pil2, jum, total, hasil = 0;
	string nama;
	bool loop = true;
	ofstream header;
	header.open("struk.txt", ios::app);
	header << "\t\t KEDAI AYAM" <<endl;
	header << "===============================================" <<endl;
	header.close();
	while(loop){
		cout << "MENU UTAMA : " <<endl;
		cout << "1. Memilih Menu" <<endl;
		cout << "2. Keluar" <<endl;
		line(55);
		cout << "Pilih Menu : ";
		cin >> pil;
		line2(55);
		switch(pil){
			case 1 :
				cout << "Pilihan Menu : " <<endl;
				cout << "1. Ayam Goreng" <<endl;
				cout << "2. Ayam Bakar" <<endl;
				cout << "Pilih Menu : ";
				cin >> pil2;
				switch(pil2){
					case 1 :
						cout << "Masukkan Kuantitas Barang\t: ";
						cin >> jum;
						line2(55);
						hasil = 17000 * jum;
						total += hasil;
						break;
					case 2 :
						cout << "Masukkan Kuantitas Barang\t: ";
						cin >> jum;
						line2(55);
						hasil = 21000 * jum;
						total += hasil;
						break;
				}
				break;
			case 2 :
				{
				ofstream ofs;
				ofs.open("struk.txt", ios::app);
				ofs << "-----------------------------------------------" <<endl;
				ofs << "\tTOTAL\t: Rp." << total << ",00" <<endl;
				ofs << "-----------------------------------------------" <<endl;
				ofs << "\t\tTHANK YOU" <<endl;
				ofs << "\t     Please Come Again" <<endl;
				ofs << "\t   Pembelian Anda Gratis" <<endl;
				ofs << "\tJika Tidak Mendapat Struk Ini" <<endl;
				ofs << "     Layanan Konsumen SMS 0845-3235-234" <<endl;
				ofs.close();
				cout << "Printing Struk..." <<endl;
				cout << "Keluar Dari Program";
				loop = false;
				break;
				}
		}
	}
}
void line2(int n){
	for(int i=0;i<n;i++){
		cout << "=";
	}
	cout <<endl;
}
void line(int n){
	for(int i=0;i<n;i++){
		cout << "-";
	}
	cout << endl;
}
