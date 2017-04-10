#include<iostream>
using namespace std;

int main(){
	int sum, i;
	int TabInt[10];
	
	cout<< " isilah 10 data nilai dalam range 0--100 : "<<endl;
	
	for (i=0; i<10; i++){
		cin >> TabInt[i];
	}
	sum=0;
	cout<< endl;
	for(i=0; i<10; i++){
		
		cout<< TabInt[i]<<endl;
		sum = sum + TabInt[i];
		
	}
	cout << endl;
	cout << "Rata-Rata : ";
	cout << (float)sum/10.0 << endl;
	return(0);
}
