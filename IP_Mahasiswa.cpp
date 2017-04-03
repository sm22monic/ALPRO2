#include <iostream>
using namespace std;

// Variable
float nilai[100];
bool valid;
int mahasiswa = 0;
float SumNilai;
float Average;
float tmp;
int lulus = 0;
int tdkLulus = 0;

void input();
bool isWithinRange(float x, int max, int min);

// Input
void input()
{
		cout <<endl;
		cout <<endl;
		cout << "\t||================================================||"<<endl;
		cout << "\t||              Program IP Mahasiswa              ||"<<endl;  
		cout << "\t||================================================||"<<endl; 
		 
	// Looping	 
	for (int i = 0; i < 100; i++) {

		cout << "\t||                                                ||"<<endl;
		cout << "\t\tMasukan IP Mahasiswa \t:\t ";
		cin >> tmp;


		if (tmp == -999)
			return;

		valid = isWithinRange(tmp, 0, 4);
		if (valid == true) {

			nilai[mahasiswa] = tmp;
			SumNilai += nilai[mahasiswa];
			
			// Jumlah yang lulus
			if (nilai[mahasiswa] > 2.75)
				lulus++;

			// Jumlah yang tidak lulus
			if (nilai[mahasiswa] < 2.75)
				tdkLulus++;
				
			// IP yang valid
			mahasiswa++;
			
			// Rata-rata nilai mahasiswa
			Average = SumNilai / mahasiswa;
		}
		
		
	}
}

// Output
int main()
{
	input();
if (mahasiswa == 00){
	// Output false
	cout << "\t||================================================||"<<endl;
	cout << "\t||**************   TIDAK ADA DATA   **************||"<<endl;
	cout << "\t||***********   MASUKKAN YANG BENAR!   ***********||"<<endl;
	cout << "\t||================================================||"<<endl;
	}else{
	

	// Output true
	cout << "\t||================================================||"<<endl;
	cout << "\t||\tJumlah Mahasiswa\t=\t" << mahasiswa <<"\t  ||"<< endl;
	cout << "\t||\tNilai Rata - Rata\t=\t" << Average <<"\t  ||"<< endl;
	cout << "\t||\tMahasiswa Yang Lulus\t=\t" << lulus <<"\t  ||"<< endl;
	cout << "\t||\tMahasiswa Tidak lulus\t=\t" << tdkLulus <<"\t  ||"<< endl;
	cout << "\t||================================================||"<<endl;
	}
		
	return 0;
}


// x sebuah nilai dari IP MHS
// min nilai terkecil dari IP
// max nilai terbesar dari IP
// return true jika benar dan sebaliknya
bool isWithinRange(float x, int min, int max) {

	return (x >= 0 && x <= max);
}
