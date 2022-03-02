#include<iostream>
using namespace std;

int main(){
	int jml, data[5], total, rage;
	
	cout<<"Moduk Praktikum 1 Nomor 1"<<endl;
	cout<<"Masukkan banyaknya data = "; cin>>jml;
		for(int a = 1; a <= jml; a++){
			cout<<"Data ["<<a<<"] = "; cin>>data[a];
			
			total = total + data[a];
			rage = total/jml;
		}
	cout<<"Banyaknya data = "<<jml<<endl;
	cout<<"Rata-rata = "<<rage<<endl;
	cout<<"Jumlah = "<<total<<endl;
	cout<<endl;
	
}
