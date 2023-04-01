#include <iostream>
using namespace std;

float Penjumlahan(float angka1, float angka2){
	float hasil = angka1 + angka2;
	return hasil;
}

float Pengurangan(float angka1, float angka2){
	float hasil = angka1 - angka2;
	return hasil;
}

float Perkalian(float angka1, float angka2){
	float hasil = angka1 * angka2;
	return hasil;
}

float Pembagian(float angka1, float angka2){
	float hasil = angka1 / angka2;
	return hasil;
}

int main(){
	
	int  ulang = 0;
	
	while(ulang == 0){
		cout<<"========================\n";
		cout<<"Program Kalkulator Satir\n";
		cout<<"------------------------\n";
		
		cout<<"1. Penjumlahan\n";
		cout<<"2. Pengurangan\n";
		cout<<"3. Perkalian\n";
		cout<<"4. Pembagian\n";
		
		string Operator;
		int pilihan;
		float angka1, angka2, hasil;
		cout<<"------------------------\n";
		cout<<"Silahkan masukkan pilihan: ";
		cin>>pilihan;
		
		cout<<"Masukkan angka 1: ";
		cin>>angka1;
		cout<<"Masukkan angka 2: ";
		cin>>angka2;
		
			switch (pilihan){
				case 1:
					hasil = Penjumlahan(angka1, angka2);
					Operator = "+";
					break;
				case 2:
					hasil = Pengurangan(angka1, angka2);
					Operator = "-";
					break;
				case 3:
					hasil = Perkalian(angka1, angka2);
					Operator = "x";
					break;
				case 4:
					hasil = Pembagian(angka1, angka2);
					Operator = ":";
					break;
				default:
					cout<<"Masukkan sesuai dengan pilihan yang tersedia";
					break;
					
			}
		
		
		cout<<"------------------------\n";
		cout<<"Hasil dari "<<angka1<<" "<<Operator<<" "<<angka2<<" = "<<hasil<<"\n";
		
		cout<<"Tekan 0 untuk ulang, atau tekan 1 untuk keluar: ";
		cin>>ulang;
	}	
		return 0;
	
	

}
