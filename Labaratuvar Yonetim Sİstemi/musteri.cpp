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
	cout<<"\n\n\t\t\t\tGeri gelmek i�in 1 e bas�n�z  :  "<<endl;
	
	cout<<"\t\t\t\t��k�� yapmak i�in 2 ye bas�n�z :  "<<endl;
	cout<<"\t\t\t\tYapmak istedi�iniz i�lem :";
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
	
	cout<<" \n\n\n\n\n\t\t\t\t-----LABORATUVAR M��TER� EKRANI-----"<<endl;
	cout<<"\n\t\t\t________________________________________________"<<endl;
	cout<<"\n\t\t\t\ 1.Sipari� Verme"<<endl;
	cout<<"\n\t\t\t\ 2.Sipari�lerim"<<endl;
	cout<<"\n\t\t\t\ 3.��k��"<<endl;
	
 	cout<<"\n\t\t\t\L�tfen se�enekler aras�ndan bir se�im yap�n�z : "; 
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
		//	cout<<"\n\t\t\t\L�tfen se�enekler aras�ndan bir se�im yap�n�z !"<<endl;
		//	musteri();
		} break; 
    }
 		
}

