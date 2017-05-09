#include <iostream>
using namespace std;

int main () {
	int M [3] [3];
	int M1 [3] [3];
	int M2 [3] [3];	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "Masukkan Matriks pertama\t:\t";
			cin >> M1 [i] [j];
			cout << "Masukkan matriks kedua\t\t:\t";
			cin >> M2 [i] [j];
			M [i] [j] = M1 [i] [j] + M2 [i] [j];
		}
	}
	cout << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<< M [i] [j] << "\t";
		
		}
		cout << endl;
		
	}
	return 0;
}
