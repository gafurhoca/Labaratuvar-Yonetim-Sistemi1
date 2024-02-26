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



	
 
	void musteri::cikis(){
 		
 		
	 }
	 void musteri::siparistakib(){
	 	
	 	sql m;
	 	m.siparistakip();
	 	int deger;
	cout<<"\n\n\t\t\t\tGeri gelmek için 1 e basýnýz  :  "<<endl;
	
	cout<<"\t\t\t\tÇýkýþ yapmak için 2 ye basýnýz :  "<<endl;
	cout<<"\t\t\t\tYapmak istediðiniz iþlem :";
	cin>>deger;
	if(deger==1){
		system("cls");
		musteri1();
	}
	else if(deger==2){
		
	system("pause");
	}
	 	
	 }
	 
    void musteri::listele(){
            
	int secim5;
	int i;
	int adet;
		sql ilaclistele;
    	ilaclistele.ilaclisteleme();
    	
    	
    	sql ilacsiparis;
    	ilacsiparis.siparisverme();
 
	
	}

void musteri::musteri1()

 {
 	int secim3;
	
	cout<<" \n\n\n\n\n\t\t\t\t-----LABORATUVAR MÜÞTERÝ EKRANI-----"<<endl;
	cout<<"\n\t\t\t________________________________________________"<<endl;
	cout<<"\n\t\t\t\ 1.Sipariþ Verme"<<endl;
	cout<<"\n\t\t\t\ 2.Sipariþlerim"<<endl;
	cout<<"\n\t\t\t\ 3.Çýkýþ"<<endl;
	
 	cout<<"\n\t\t\t\Lütfen seçenekler arasýndan bir seçim yapýnýz : "; 
 	cin>>secim3;

 	switch(secim3)
 	{ 
	case 1: 
	system("cls"); 
	listele(); 
	break;
	
	 case 2: 
	 system("cls");
	 siparistakib();
	 
	break;
	case 3:
	system("cls");
	cikis();
	
	break;
	 default : 
	 
		{
		//	cout<<"\n\t\t\t\Lütfen seçenekler arasýndan bir seçim yapýnýz !"<<endl;
		//	musteri();
		} break; 
    }
 		
}

