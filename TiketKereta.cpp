#include<iostream>
using namespace std;

int main(){
	int kode,orang,total_pembayaran,uang,kembalian, pilih;
	string nama, hari,kereta,kelas;
	int ekonomi=40000;
	int eksekutif=50000;
	
	cout<<"============================================\n";
	cout<<"\t TIKET KERETA API \n";
	cout<<"============================================\n";
	
	cout<<"Masukkan Nama Anda: ";
	cin>>nama;
	cout<<"Nama anda :"<<nama<<endl;
	while(true){
	cout<<"Pilih Waktu Keberangkatan Anda\n";
	cout<<"1. Senin\n";
	cout<<"2. Selasa\n";
	cout<<"3. Rabu\n";
	cout<<"4. Kamis\n";
	cout<<"5. Jumat\n";
	cout<<"6. Sabtu\n";
	cout<<"7. Minggu\n";
	cout<<"============================================\n";
	cout<<"Masukkan pilihan anda: ";
	cin>>pilih;
	switch(pilih){
		case 1:
			hari = "Senin";
			cout<<hari;
			break;
		case 2:  
			hari = "Selasa";
			cout<<hari;
			break;
		case 3:  
			hari = "Rabu";
			cout<<hari;
			break;
		case 4:  
			hari = "Kamis";
			cout<<hari;
			break;
		case 5:  
			hari = "Jumat";
			cout<<hari;
			break;
		case 6:  
			hari = "Sabtu";
			cout<<hari;
			break;
		case 7:  
			hari = "Minggu";
			cout<<hari;
			break;
		default:  
			cout<<"Silahkan pilih hari lebih dahulu \n";
			continue;
	}
	    break;
	    cout<<endl;
	}
	while(true){
	cout<<"============================================\n";
	cout<<"Pilih Kode Kereta Api : \n";
	cout<<"1. JAYABAYA\n";
	cout<<"2. ARJUNO EKSPRES\n";
	cout<<"============================================\n";
	cout<<"Masukkan kode kereta yang di pilih: ";
	cin>>pilih;
	switch(pilih){
		case 1:
			kereta="JAYABAYA";
			cout<<kereta;
			break;
		case 2:
			kereta="ARJUNO EKSPRES";
			cout<<kereta;
			break;
		
		default:
			cout<<"Mohon masukkan kode kereta yang tersedia \n";
			continue;
	}
		break;
	}
	
    cout<<endl;
    
    while(true){
    cout<<"============================================\n";
    cout<<"Silahkan pilih kelas: \n";
    cout<<"1. Ekonomi \n";
    cout<<"2. Eksekutif \n";
	cout<<"============================================\n";
    cout<<"Masukkan pilihan anda: ";
    cin>>pilih;
    	switch(pilih){
		case 1:
		    kelas="EKONOMI";
			cout<<kelas;
			break;
		case 2:
			kelas="EKSEKUTIF";
			cout<<kelas;
			break;
		
		default:
			cout<<"Mohon masukkan kode kereta yang tersedia \n";
			continue;
	}
		break;
	}
 	
    cout<<endl;
    
   	cout<<"============================================\n";
    cout<<"Masukkan jumlah tiket yang anda pesan: ";
    cin>>orang;
    if(kelas == "EKONOMI"){
    	total_pembayaran = orang * ekonomi;
	}
	else if(kelas == "EKSEKUTIF"){
		total_pembayaran = orang * eksekutif;
	}
	cout<<endl;
    cout<<"============================================\n";
	cout<<"\t \t INVOICE \n";
	cout<<"============================================\n";
  	cout<<"Nama Pemesan \t :"<<nama<<endl;
  	cout<<"Hari Pemesanan \t :"<<hari<<endl;
  	cout<<"Kode Kereta \t :"<<kereta<<endl;
  	cout<<"Kode Kereta \t :"<<kelas<<endl;
    cout<<"Total Pembayaran :"<<total_pembayaran<<endl;
   	cout<<"============================================\n";
   	
   	while(true){
    cout<< "Masukkan Uang anda:";
    cin>>uang;
   	if(uang>=total_pembayaran){
   		cout<<"Kembalian Anda \t :";
		cout<<uang - total_pembayaran<<endl;
   		break; 
	   }
	else {
		cout<<"Uang Anda Kurang! \n";
		cout<<endl;
	    continue;
	}
   }
   	
   return 0;
    
}
