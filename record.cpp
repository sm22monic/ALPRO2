#include<iostream>
using namespace std;

typedef struct{
	string hari;
	string bulan;
	string tahun;
	}tanggal;
	
	int main(){
		tanggal A;
		cin >> A.hari;
		cin >> A.bulan;
		cin >> A.tahun;
		
		cout <<"==================="<<endl;
		cout << A.hari<<"hari"<<endl;
		cout << A.bulan<<"bulan "<<endl;
		cout << A.tahun<<"tahun "<< endl;
		return(0);
	}
