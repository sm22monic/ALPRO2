#include<iostream>
using namespace std;

int main(){
	//variable
   int a, b, temp;

   // proses membaca
   cout << "masukan nilai A : ";
   cin >> a;

   cout << "masukan nilai B : ";
   cin >> b;

   // proses tukar
   temp = b;
   b = a;
   a = temp;

   // proses tampil
   cout << "===========================" << endl;
   cout << "Nilai A Sekarang : " << a << endl;
   cout << "Nilai B Sekarang : " << b;

   return 0;
   }