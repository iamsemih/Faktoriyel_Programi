#include <iostream>
#include <conio.h>
using namespace std;
// SEMIH SAHIN

int Faktoriyel(int x){
	unsigned int sonuc=1;
	for (int i=1; i<=x; i++){
		sonuc*=i;
	}
	return sonuc;
}

int main(){
	int sayi;
	A10:;
	cout << "Sayi giriniz: ";
	cin >> sayi;
	system("cls");
	if (sayi==0){
		cout << sayi << "! = 1" << endl;
	}else if (sayi<0){
		cout << "Negatif sayilarin faktoriyeli olmaz.\n";
		goto A10;
	}else{
		cout << sayi << "! = " << Faktoriyel(sayi) << endl;
	}
	getch();
	return 0;
}
