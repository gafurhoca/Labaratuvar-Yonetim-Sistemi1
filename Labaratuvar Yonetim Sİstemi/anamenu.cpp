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
musteri n;
personel m;
void anamenu::goster()
{
	sql a;
    a.sqlcagirma();
   system ("color 75");
    setlocale(LC_ALL, "Turkish");

	cout<<" \n\n\n\n\n\t\t\t\t*** Medicine Laboratuvarýna Hoþgeldiniz *** \n";
	cout<<"\t\t\t\t_____________________________________________________"<<endl;
 	cout<<"\n\t\t\t\t1.Laboratuvar Personel Giriþi "<<endl;
 
 	cout<<"\t\t\t\t2.Laboratuvar Müþteri Giriþi\n";
 int secim;
   	cout<<"\t\t\t\t_____________________________________________________"<<endl;
	cout<<"\t\t\t\tYapmak Ýstediðiniz Ýþlem : ";
	cin>>secim;
	
	
int sifre;

switch (secim)
	{
	case 1: system("cls");
	 cout<<"\n\n\n\n\n\t\t\t\tlütfen þifreyi girin:"; cin>>sifre;
		if (sifre==12345)
		{
			system("cls");
		
		m.yonetici();
		}
		else
		{
			cout<<"\t\t\t\tyanlýþ þifre girdiniz !";
		}
		 break;

	case 2: 
		{
			system("cls");
	        n.musteri1();
		} break;
	case 3:
		

		
	default : 
		{
			
		}break; 
	
}

if(secim!=1 && secim!=2){
	cout<<"\n\n\t\t\t\tEksik veya hatalý tuþladýnýz!!!";
}
}
	
	


