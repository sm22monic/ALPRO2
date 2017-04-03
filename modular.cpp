#include<iostream>
using namespace std;

// prototype
void prosesbaca();
void prosestukar();
void prosestampil();

// variabel global
	int a, b, temp;

   // program utama
   int main(){
   	prosesbaca();
      prosestukar();
      prosestampil();
      return 0;
      }

      // proses baca
      void prosesbaca(){
      cout << "masukan nilai A : ";
   cin >> a;

   cout << "masukan nilai B : ";
   cin >> b;
   }

   // proses tukar
   void prosestukar(){
   temp = b;
   b = a;
   a = temp;
   }

   // proses tampil
   void prosestampil(){
   cout << "===========================" << endl;
   cout << "Nilai A Sekarang : " << a << endl;
   cout << "Nilai B Sekarang : " << b;
   }
