#include <iostream>
using namespace std;

// prototype
int tambahkan(int a, int b);
	

// program utama
int main(){
	int a, b;
	cout<<"masukan a:"<<endl;
		cin>>a;
	cout<<"masukan b:"<<endl;
	cin>>b;
cout << "hasil : " << tambahkan (a,b) << endl;
return 0;
}

int tambahkan (int a, int b){
return a+b;
}