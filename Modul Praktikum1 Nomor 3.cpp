#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int x, y;
	float a, sum1, sum2, sd;
	
	cout<<"Program Standar Deviasi"<<endl;
	cout<<"Masukkan Banyaknya Data : "; cin>>x;
	sum1 = 0;
	sum2 = 0;
		for(int z = 1; z <= x; z++ ){
			cout<<"Masukkan Nilai Ke- "<<z<<" = "; cin>>a;
			{
				sum1 = sum1 + (pow(a, 2));
				sum2 = sum2 + a;
			}
		}
	sd = sqrt(((x*(sum1))-(pow(sum2,2)))/(x*(x-1)));
	cout<<"Standar Deviasi adalah : "<<sd<<endl;
}
