#include<mysql.h>
#include<mysqld_error.h>
#include<windows.h>
#include "anamenu.h"
#include "personel.h"
#include "musteri.h"
#include "sql.h"
#include<string.h>
#include <iostream>
#include<sstream>
#include <locale.h>  
using namespace std;
sql list;
sql l;
sql as;
void personel::listele(){   

	list.ilaclisteleme();
	int deger;
	cout<<"\n\n\t\t\t\tGeri gelmek için 1 e basýnýz  :  "<<endl;
	
	cout<<"\t\t\t\tÇýkýþ yapmak için 2 ye basýnýz :  "<<endl;
	cout<<"\t\t\t\tYapmak istediðiniz iþlem :";
	cin>>deger;
	if(deger==1){
		system("cls");
		yonetici();
		
	}
	else if(deger==2){
		
	system("pause");
	}
	
	
		
	
};

void personel::ekle(){
	as.urunekle1();
	int deger;
	cout<<"\n\n\t\t\t\tGeri gelmek için 1 e basýnýz  :  "<<endl;
	
	cout<<"\t\t\t\tÇýkýþ yapmak için 2 ye basýnýz :  "<<endl;
	cout<<"\t\t\t\tYapmak istediðiniz iþlem :";
	cin>>deger;
	if(deger==1){
		system("cls");
		yonetici();
	}
	else if(deger==2){
		
	system("pause");
	}
	
};
void personel::siparistakip(){
	
	as.siparistakip();
	int deger;
	cout<<"\n\n\t\t\t\tGeri gelmek için 1 e basýnýz  :  "<<endl;
	
	cout<<"\t\t\t\tÇýkýþ yapmak için 2 ye basýnýz :  "<<endl;
	cout<<"\t\t\t\tYapmak istediðiniz iþlem :";
	cin>>deger;
	if(deger==1){
		system("cls");
		yonetici();
	}
	else if(deger==2){
		
	system("pause");
	}
};
void personel::labcihaz(){
		l.makinabilgisi();
		int deger;
	cout<<"\n\n\t\t\t\tGeri gelmek için 1 e basýnýz  :  "<<endl;
	
	cout<<"\t\t\t\tÇýkýþ yapmak için 2 ye basýnýz :  "<<endl;
	cout<<"\t\t\t\tYapmak istediðiniz iþlem :";
	cin>>deger;
	if(deger==1){
		system("cls");
		yonetici();
	}
	else if(deger==2){
		
	system("pause");
	}
};




void personel::imalat(){
	
	

	l.imalatmerkezi();
	
	
	int deger;
	cout<<"\n\n\t\t\t\tGeri gelmek için 1 e basýnýz  :  "<<endl;
	
	cout<<"\t\t\t\tÇýkýþ yapmak için 2 ye basýnýz :  "<<endl;
	cout<<"\t\t\t\tYapmak istediðiniz iþlem :";
	cin>>deger;
	if(deger==1){
		system("cls");
		yonetici();
	}
	else if(deger==2){
		
	system("pause");
	}
	
};

void personel::guncelle(){
	
	l.guncelleme();
	
	int deger;
	cout<<"\n\n\t\t\t\tGeri gelmek için 1 e basýnýz  :  "<<endl;
	
	cout<<"\t\t\t\tÇýkýþ yapmak için 2 ye basýnýz :  "<<endl;
	cout<<"\t\t\t\tYapmak istediðiniz iþlem :";
	
	cin>>deger;
	if(deger==1){
		system("cls");
		yonetici();
	}
	else if(deger==2){
		
	system("pause");
	}
	
}
void personel::stokk(){
	l.stok();
	int deger;
	cout<<"\n\n\t\t\t\tGeri gelmek için 1 e basýnýz  :  "<<endl;
	
	cout<<"\t\t\t\tÇýkýþ yapmak için 2 ye basýnýz :  "<<endl;
	cout<<"\t\t\t\tYapmak istediðiniz iþlem :";
	
	cin>>deger;
	if(deger==1){
		system("cls");
		yonetici();
	}
	else if(deger==2){
		
	system("pause");
	}
}


void personel::yonetici(){
int secim2;
	
	cout<<" \n\n\n\n\n\t\t\t\t-----LABORTUVAR YÖNETÝCÝ EKRANI-----"<<endl;
	cout<<"\n\t\t\t_________________________________________________"<<endl;
	cout<<"\n\t\t\t 1.Laboratuvar Ürünleri Görüntüle"<<endl;
	cout<<"\n\t\t\t 2.Laboratuvar Ürün Ekle"<<endl;
	cout<<"\n\t\t\t 3.Müþteri Sipariþ Takibi"<<endl;
	cout<<"\n\t\t\t 4.Laboratuvar Cihazlarý"<<endl;
	cout<<"\n\t\t\t 5.Ýmalat Merkezi"<<endl;
	cout<<"\n\t\t\t 6.Fiyat Güncelleme"<<endl;
	cout<<"\n\t\t\t 7.Stok Durumu"<<endl;
	cout<<"\n\t\t\t 8.Cikis"<<endl;
	cout<<"\n\t\t\t_________________________________________________"<<endl;
	cout<<"\n\t\t\tYapmak Ýstediðiniz Ýþlem:"; cin>>secim2;
	
	
	switch(secim2)
	{
		case 1: system("cls");  
		listele();  
		break;
		case 2: system("cls");  
		ekle(); 
		break;
		case 3: system("cls"); 
		siparistakip(); 
		break;
	    case 4: system("cls"); 
		labcihaz(); 
		break;
	 
		case 5: system("cls");  
	    imalat();
		break;   
		case 6: system("cls");
		guncelle();
		break;
		case 7: system("cls");
		stokk();
		break;
		case 8: system("pause");
		default : 
		{
		//	cout<<"\n\t\t\tlütfen seçenekler arasindan bir secim yapiniz !"<<endl;
		//	yonetici();
		} break; 
		
	}
	
}
