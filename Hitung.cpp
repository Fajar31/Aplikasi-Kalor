#include <iostream>
using namespace std;
class Kalor {    
	public:        
	int es(int m,int temp) {
		return m*temp*2100;
	};
	int air(int m,int temp) {
		return m*temp*4200;
	};
	int alu(int m,int temp) {
		return m*temp*900;
	};
	int akhl(int m,int temp) {
		return m*temp*2400;
	};
	int kayu(int m,int temp) {
		return m*temp*1700;
	};
	int kaca(int m,int temp) {
		return m*temp*670;
	};
	int besi(int m,int temp) {
		return m*temp*450;
	};
};

int main() {
int pilih;
int m,temp;
Kalor kal;
cout<<"\t\t=================================="<<endl;
cout<<"\t\t|     Aplikasi Perhitungan Kalor     |"<<endl;
cout<<"\t\t=================================="<<endl;
cout<<"[1] Es \n[2] Air \n[3] Aluminium \n[4] Alkohol \n[5] Kayu \n[6] Kaca \n[7] Besi"<<endl;
cout<<"Pilihan Menu : ";
cin>>pilih;

if (pilih>7) {
	cout<<"Maaf, Salah Masukkan. Masukkan Ulang Pilihan Anda. 1 sampai dengan 7\n";
}
switch (pilih) {
	case 1 :
		cout<<"Masukkan massa (Kg) : ";
		cin>>m;
		cout<<"Masukkan perubahan suhu (C): ";
		cin>>temp;
		cout<<"Kalor dari es adalah : "<<kal.es(m,temp)<<" Joule";
	break;
	case 2 :
		cout<<"Masukkan massa (Kg) : ";
		cin>>m;
		cout<<"Masukkan perubahan suhu (C) : ";
		cin>>temp;
		cout<<"Kalor dari air adalah : "<<kal.air(m,temp)<<" Joule";
	break;
	case 3 :
		cout<<"Masukkan massa (Kg) : ";
		cin>>m;
		cout<<"Masukkan perubahan suhu (C) : ";
		cin>>temp;
		cout<<"Kalor dari aluminium adalah : "<<kal.alu(m,temp)<<" Joule";
	break;
	case 4 :
		cout<<"Masukkan massa (Kg) : ";
		cin>>m;
		cout<<"Masukkan perubahan suhu (C) : ";
		cin>>temp;
		cout<<"Kalor dari alkohol adalah : "<<kal.akhl(m,temp)<<" Joule";
	break;
	case 5 :
		cout<<"Masukkan massa (Kg) : ";
		cin>>m;
		cout<<"Masukkan perubahan suhu (C) : ";
		cin>>temp;
		cout<<"Kalor dari kayu adalah : "<<kal.kayu(m,temp)<<" Joule";
	break;
	case 6 :
		cout<<"Masukkan massa (Kg) : ";
		cin>>m;
		cout<<"Masukkan perubahan suhu (C) : ";
		cin>>temp;
		cout<<"Kalor dari kaca adalah : "<<kal.kaca(m,temp)<<" Joule";
	break;
	case 7 :
		cout<<"Masukkan massa (Kg) : ";
		cin>>m;
		cout<<"Masukkan perubahan suhu (C) : ";
		cin>>temp;
		cout<<"Kalor dari besi adalah : "<<kal.besi(m,temp)<<" Joule";
	break;
}

return 0;
}
