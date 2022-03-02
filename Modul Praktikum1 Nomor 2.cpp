#include<iostream>
using namespace std;

int main(){
	cout<<"Moduk Praktikum 1 Nomor 2"<<endl;
	int kode[5], jumlah[5], harga[5], hasil, item, date, sum;
	string nama[5];
	
	cout<<"Masukkan Jumlah Data\t: "; cin>>date;
	
	for(int a = 1; a <= date; a++){
		cout<<"Data Ke 00"<<a<<endl;
		cout<<"Masukkan Nama Barang\t: "; cin>>nama[a];
		cout<<"Masukkan Jumlah\t\t: "; cin>>jumlah[a];
		cout<<"Masukkan Harga\t\t: "; cin>>harga[a];
		cout<<"======================================="<<endl;
		item = item + jumlah[a];
		
	}
	system("cls");
	cout<<"Kode\tNama\t\tJumlah\tHarga\tTotal"<<endl;
	for(int a = 1; a <= date; a++){
		hasil = jumlah[a] * harga[a];
		
		cout<<"00"<<a<<"\t"<<nama[a]<<"\t\t"<<jumlah[a]<<"\t"<<harga[a]<<"\t"<<total<<endl;
		sum = hasil += hasil;
	}
	

	cout<<"Jumlah item\t= "<<item<<endl;
	cout<<"Total Pembelian\t= "<<sum<<endl;
}


	

