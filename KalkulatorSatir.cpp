#include <iostream>
using namespace std;

//procedure
void Penjumlahan(float angka1, float angka2){
	float hasil = angka1 + angka2;
	cout<<"Hasil dari "<<angka1<<" + "<<angka2<<" = "<<hasil<<endl;
}

void Pengurangan(float angka1, float angka2){
	float hasil = angka1 - angka2;
	cout<<"Hasil dari "<<angka1<<" - "<<angka2<<" = "<<hasil<<endl;
}

void Perkalian(float angka1, float angka2){
	float hasil = angka1 * angka2;
	cout<<"Hasil dari "<<angka1<<" x "<<angka2<<" = "<<hasil<<endl;
}

void Pembagian(float angka1, float angka2){
	float hasil = angka1 / angka2;
	cout<<"Hasil dari "<<angka1<<" : "<<angka2<<" = "<<hasil<<endl;
}
//end procedure

//main
int main(){
	int ulang = 0;
	while(ulang == 0){	
		cout<<"==========================="<<endl;
		cout<<"         Kalkulator        "<<endl;
		cout<<"---------------------------"<<endl;
		
		//variabel
		string pilih;
		int pilihan;
		float angka1, angka2, hasil;
		//end variabel
		cout<<"Masukkan angka pertama : ";
		cin>>angka1;
		cout<<"Masukkan angka kedua   : ";
		cin>>angka2;
		
		cout<<endl;
		cout<<"1. Penjumlahan(+)"<<endl;
		cout<<"2. Pengurangan(-)"<<endl;
		cout<<"3. Perkalian  (x)"<<endl;
		cout<<"4. Pembagian  (:)"<<endl;
		cout<<"Pilih operator : ";
		cin>>pilihan;
		cout<<endl;
		
		//percabangan
		switch(pilihan){
			case 1:
				Penjumlahan(angka1, angka2);
				pilih = "+";
				break;
			case 2:
				Pengurangan(angka1, angka2);
				pilih = "-";
				break;
			case 3:
				Perkalian(angka1, angka2);
				pilih = "x";
				break;
			case 4:
				Pembagian(angka1, angka2);
				pilih = ":";
				break;
			default:
				cout<<"Pilih operator yang sudah disediakan"<<endl;
				break;
		}
		// end percabangan
		
		//Jika user tidak memilih operator sesuai dengan pilihan maka akan cout system error
		if(pilih == ""){
			cout<<"System error"<<endl;
		}
		//end if
		
		//cinn akan mengirim angka ke variabel ulang yang berada di atas:
		//Jika user mengetik 0, kalkukator akan diulang, jika selain angka 0 maka program akan keluar while
		//jika keluar while maka program akan me return nilai 0, dan program akan berhenti
		cout<<"Tekan 0 untuk ulang, tekan 1 untuk keluar ";
		cin>>ulang;
		cout<<endl;
	}
	
	cout<<"Terimakasih"<<endl;
	return 0;
	
	
}
