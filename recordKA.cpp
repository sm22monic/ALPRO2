#include<iostream>
using namespace std;
typedef struct{
	string hh;
	string bb;
	string tt;
	} tgl;
typedef struct{
	int jam;
	int menit;
	int detik;
	}jam;
typedef struct{
	int noKA;
	string kAsal;
	jam jBerangkat;
	tgl tBerangkat;
	string kTujuan;
	jam jTiba;
	tgl tTiba;
	}jKA;
int main(){
	jKA JadwalKA;
	
	JadwalKA.noKA =1;
	JadwalKA.kAsal="Bandung";
	JadwalKA.jBerangkat.jam=2;
	JadwalKA.jBerangkat.menit=22;
	JadwalKA.jBerangkat.detik=35;
	JadwalKA.tBerangkat.hh="Rabu";
	JadwalKA.tBerangkat.bb="April";
	JadwalKA.tBerangkat.tt="2017";
	JadwalKA.kTujuan="Manado";
	JadwalKA.jTiba.jam=3;
	JadwalKA.jTiba.menit=39;
	JadwalKA.jTiba.detik=59;
	JadwalKA.tTiba.hh="jumat";
	JadwalKA.tTiba.bb="April";
	JadwalKA.tTiba.tt="2018";
	
	cout<< "jadwal KA :" << JadwalKA.noKA <<endl;
	cout<< JadwalKA.kAsal <<endl;
	cout<< 	JadwalKA.jBerangkat.jam <<"-"<< JadwalKA.jBerangkat.menit <<"-"<< JadwalKA.jBerangkat.detik <<endl;
	cout<< 	JadwalKA.tBerangkat.hh <<"-"<< 	JadwalKA.tBerangkat.bb <<"-"<< 	JadwalKA.tBerangkat.tt <<endl;
	cout<< JadwalKA.kTujuan<<endl;
	cout<< JadwalKA.jTiba.jam <<"-"<<JadwalKA.jTiba.menit <<"-"<< JadwalKA.jTiba.detik <<endl;
	cout<< JadwalKA.tTiba.hh <<"-"<<JadwalKA.tTiba.bb<<"-"<<JadwalKA.tTiba.tt<<endl;
	
}
