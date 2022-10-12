#include <iostream>
using namespace std;

#define max 5
string namamhs[max], loop;
int pos=0;

void display(){
	system("cls");
	if(pos>0){
		cout<<"data tersimpan"<<endl;
		for(int a=0; a<pos; a++){
			cout<<a+1<<". "<<namamhs[a]<<endl;
		}
	}else{
		cout<<"...data kosong..."<<endl;
	}
}

void add(){
	do{
		display();
		if(pos<max){
			cin.ignore();
			cout<<"Tambah data : ";
			getline(cin, namamhs[pos]);
			pos++;
			display();
		cout<<"ulang(y/t) : ";
		cin>>loop;
		}else{
			cout<<"...memori penuh..."<<endl;
			cout<<"isi t untuk kembali : ";
			cin>>loop;
		}
		
	} while(loop=="y");	
}

void edit(){
	int y;
	do{
		display();
		cout<<"ubah data ke : ";
		cin>>y;
		cin.ignore();
		cout<<"ubah menjadi : ";
		getline(cin, namamhs[y-1]);
		display();
		cout<<"ubah lagi (y/t) : ";
		cin>>loop;
	}while(loop=="y");
}

int main(){
	int pil;
	do {
		system("cls");
		cout<<"1. Tambah\n2. Tampilkan\n3. Ubah\n4. Keluar"<<endl;
	cout<<"Pilihan : ";
	cin>>pil;
	
	switch(pil){
		case 1:
			add();
			break;
		case 2:
			do{
				display();
				cout<<"kembali(y) : ";
				cin>>loop;
			}while(loop!="y");
			break;
		case 3:
			edit();
			break;
		case 4:
			cout<<"...";
			break;
		default:
			cout<<"pilih 1-4";
		}
	} while(pil !=4);
	cout<<"selesai...";
	
}
