#include <iostream>
#include <conio.h>
using namespace std;

void data1 ();
void kota ();
void detail ();



typedef struct{
	string namaDep;
	string namaBel;
	string hp;
	string alamat;
	}data;
	
typedef struct{
	string asal;
	string tuju;
	}stasiun;
	
typedef struct{
	string hh;
	string bb;
	string tt;
	}tanggal;
	
typedef struct{
	int jam;
	int menit;
	int detik;
	}waktu;

typedef struct{
	int noKA;
	string namaKA;
	data org;
	stasiun kota;
	tanggal tglpergi;
	waktu jampergi;
	tanggal tgltiba;
	waktu jamtiba;
	}jadwal;
	
jadwal jadwalKA;
int pilih1,pilih2;
int biaya,admin=7500,total;

void data1 () {
	
	cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl <<endl;
	cout << "\t\t\t PROGRAM PEMESANAN TIKET KA" 		<< endl<< endl;
	cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl <<endl;
	cout << "\t\t\t Masukkan data di bawah ini!" 		<< endl << endl;
	cout << "\t\tNama depan\t:  " 	; cin >> jadwalKA.org.namaDep;
	cout << "\t\tNama belakang\t:  "; cin >> jadwalKA.org.namaBel;
	cout << "\t\tNo HP\t\t:  " 		; cin >> jadwalKA.org.hp	;
	cout << "\t\tAlamat\t\t:  " 	; cin >> jadwalKA.org.alamat;
	cout << endl;
}


void kota () {
	cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl <<endl;
	cout << "\t\t\t    Pilih Stasiun Asal :" << endl << endl;
	cout << "\t\t\t\t1. Bandung" 	<< endl;
	cout << "\t\t\t\t2. Jakarta" 	<< endl;
	cout << "\t\t\t\t3. Malang" 	<< endl;
	cout << "\t\tPilih : " ; 	cin >> pilih1;	
		//menampilkan kota asal
		if(pilih1==1){
			jadwalKA.kota.asal="Bandung";
		}
		if(pilih1==2){
			jadwalKA.kota.asal="Jakarta";
		}
		if(pilih1==3){
			jadwalKA.kota.asal="Malang" 	;
		}
		
	cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl <<endl;
	cout << "\t\t\t    Pilih Stasiun Tujuan :" << endl << endl;
	cout << "\t\t\t\t1. Surabaya" 	<< endl;
	cout << "\t\t\t\t2. Cirebon" 	<< endl;
	cout << "\t\t\t\t3. Jogjakarta" << endl;
	cout << "\t\tPilih : " ; 	cin >> pilih2;	
		//menampilkan kota tujuan
		if(pilih2==1){
			jadwalKA.kota.tuju="Surabaya";
		}
		if(pilih2==2){
			jadwalKA.kota.tuju="Cirebon" ;
		}
		if(pilih2==3){
			jadwalKA.kota.tuju="Jogjakarta";
		}
	//biaya
	if(pilih1==1,pilih2==1){
		biaya=500000;
	}	
	if(pilih1==1,pilih2==2){
		biaya=350000;
	}
	if(pilih1==1,pilih2==3){
		biaya=400000;
	}
	if(pilih1==2,pilih2==1){
		biaya=600000;
	}
	if(pilih1==2,pilih2==2){
		biaya=400000;
	}
	if(pilih1==2,pilih2==3){
		biaya=450000;
	}
	if(pilih1==3,pilih2==1){
		biaya=100000;
	}
	if(pilih1==3,pilih2==2){
		biaya=500000;
	}
	if(pilih1==3,pilih2==3){
		biaya=450000;
	}
	total=biaya+admin;
}

void detail (){
	cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl <<endl;
	cout << "\t\t\t Masukkan detail pemesanan :"<< endl << endl;
	cout << "\t\tNo Kereta\t:\t" 	; 	cin >> jadwalKA.noKA;
	cout << "\t\tNama Kereta\t:\t" 	; 	cin >> jadwalKA.namaKA;
	cout << "\t\tTgl berangkat\t:\t" << endl;
									cout << "\t\t\t\t Tanggal (hh) : " ; cin >> jadwalKA.tglpergi.hh;
									cout << "\t\t\t\t Bulan   (bb) : " ; cin >> jadwalKA.tglpergi.bb;
									cout << "\t\t\t\t Tahun (tttt) : " ; cin >> jadwalKA.tglpergi.tt;
	cout << "\t\tJam berangkat\t:\t" << endl;
									cout << "\t\t\t\t Jam     (jj) : " ; cin >> jadwalKA.jampergi.jam;
									cout << "\t\t\t\t Menit   (mm) : " ; cin >> jadwalKA.jampergi.menit;
									cout << "\t\t\t\t Detik   (dd) : " ; cin >> jadwalKA.jampergi.detik;
	cout << "\t\tTgl tiba\t:\t" << endl;
									cout << "\t\t\t\t Tanggal (hh) : " ; cin >> jadwalKA.tgltiba.hh;
									cout << "\t\t\t\t Bulan   (bb) : " ; cin >> jadwalKA.tgltiba.bb;
									cout << "\t\t\t\t Tahun (tttt) : " ; cin >> jadwalKA.tgltiba.tt;
	cout << "\t\tJam tiba\t:\t" << endl;
									cout << "\t\t\t\t Jam     (jj) : " ; cin >> jadwalKA.jamtiba.jam;
									cout << "\t\t\t\t Menit   (mm) : " ; cin >> jadwalKA.jamtiba.menit;
									cout << "\t\t\t\t Detik   (dd) : " ; cin >> jadwalKA.jamtiba.detik;	
	
}
	

int main () {
//memanggil :
	data1 ();
	kota ();
	detail ();
	cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl <<endl;
	cout << "                                       ||  ||   //   |||||||||      ||       " << endl;  
	cout << "           STRUK PEMBAYARAN                   //           //     |||||||||| " << endl;
	cout << "           TIKET KERETA API                 //          //          ||    || " << endl;
	cout << "                                     |||||||       ,,//   \\\     ,,||  ;,|| " << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	

	cout << "|  No Kereta         :  " 	<< jadwalKA.noKA << "\t\t"
		 << "|  Nama     :  " 			<< jadwalKA.org.namaDep << " " << jadwalKA.org.namaBel	<< "\t\t      |" << endl;
	cout << "|  Nama Kereta       :  "  << jadwalKA.namaKA << "\t\t"
		 << "|  No HP    :  " 			<< jadwalKA.org.hp	<< "\t\t      |" 	<< endl;
	cout << "|  Tanggal Berangkat :  " 	<< jadwalKA.tglpergi.hh << "-" << jadwalKA.tglpergi.bb << "-" << jadwalKA.tglpergi.tt << "\t\t"
		 << "|  Alamat   :  " 			<< jadwalKA.org.alamat	<< "\t\t      |" << endl;
	cout << "|  Kota/Jam Asal     :  " 	<< jadwalKA.kota.asal << ", " << jadwalKA.jampergi.jam << ":" << jadwalKA.jampergi.menit << ":" << jadwalKA.jampergi.detik << "\t|\t\t\t\t      |" << endl;
	cout << "|  Tanggal Tiba      :  "	<< jadwalKA.tgltiba.hh << "-" << jadwalKA.tgltiba.bb << "-" << jadwalKA.tgltiba.tt << "\t\t|\t\t\t\t      |" << endl;
	cout << "|  Kota/Jam Tiba     :  " 	<< jadwalKA.kota.tuju << ", " << jadwalKA.jamtiba.jam << ":" << jadwalKA.jamtiba.menit << ":" << jadwalKA.jamtiba.detik << "\t|\t\t\t\t      |" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "|  Biaya Antar Kota                         Rp." << biaya << ";-\t\t\t      |" << endl;
	cout << "|  Biaya Admin                              Rp." << admin << ";-\t\t\t      |" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "|  Total Biaya                              Rp." << total << ";-\t\t\t      |" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "|    Struk ini tidak berlaku di dunia nyata. Struk ini hanya sekedar struk    |" << endl;
	cout << "|         virtual untuk menyelesaikan tugas mata kuliah Algoritma dan         |" << endl;
	cout << "|     Pemrograman2. Program ini resmi dibuat oleh Sisca Monica dari kelas     |" << endl;
	cout << "|   TIF RM 16 A, STT Bandung. Bagi siapapun yang mengcopy tanpa seijin dari   |" << endl;
	cout << "|     Sisca Monica, dia akan mendapatkan dosa dan hukuman dari Allah swt.     |" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
}

	

