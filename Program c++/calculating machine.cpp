#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

 int main(){
 	int angka1,angka2;
 	int pil;
 	char ulang;
 	
 	cout<<"====PROGRAM KALKULATOR====\n";
    cout<<"Silahkan pilih opsi terlebih dahulu"<<endl;
    cout<<"1.Penjumlahan\n";
    cout<<"2.Pengurangan\n";
    cout<<"3.perkalian\n";
    cout<<"4.Pembagian\n";
    do{
    	 cout<<"Masukan opsi :";
         scanf("%d",&pil);
    
     if(pil==1){
    	cout<<"ANDA MASUK KE OPSI PENJUMLAHAN"<<endl;
    	cout<<"=================================\n";
    	cout<<"Masukan angka pertama\t:";
    	cin>>angka1;
    	cout<<"Masukan angka kedua\t:";
    	cin>>angka2;
    	
    	cout<<"Hasilnya\t\t:";
    	cout<<angka1+angka2;
    	cout<<endl;
    	
	  } else if(pil==2){
		cout<<"ANDA MASUK KE OPSI PENGURANGAN"<<endl;
    	cout<<"=================================\n";
    	cout<<"Masukan angka pertama\t:";
    	cin>>angka1;
    	cout<<"Masukan angka kedua\t:";
    	cin>>angka2;
    	
    	cout<<"Hasilnya\t\t:";
    	cout<<angka1-angka2;
    	cout<<endl;
    	
	 } else if(pil==3){
		cout<<"ANDA MASUK KE OPSI PERKALIAN"<<endl;
    	cout<<"=================================\n";
    	cout<<"Masukan angka pertama\t:";
    	cin>>angka1;
    	cout<<"Masukan angka kedua\t:";
    	cin>>angka2;
    	
    	cout<<"Hasilnya\t\t:";
    	cout<<angka1*angka2;
    	cout<<endl;
    
     } else if(pil==4){
		cout<<"ANDA MASUK KE OPSI PEMBAGIAN"<<endl;
    	cout<<"=================================\n";
    	cout<<"Masukan angka pertama\t:";
    	cin>>angka1;
    	cout<<"Masukan angka kedua\t:";
    	cin>>angka2;
    	
    	cout<<"Hasilnya\t\t:";
    	cout<<angka1/angka2;
    	cout<<endl;
	   }else{
		 cout<<"Upss...Maaf opsi tidak ada !"<<endl;
     	}
	
     
     
      cout<<"Ulangi program[Y/N]\t:";
	  cin>>ulang;	
	
	}while(ulang=='Y'||ulang=='y');
   
	cout<<"Program selesai";
 	getch();
  
 	
 }
