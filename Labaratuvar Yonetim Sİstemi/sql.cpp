#include<mysql.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 #include<mysql.h>
#include<mysqld_error.h>
#include<windows.h>
#include "anamenu.h"
#include "personel.h"
#include "musteri.h"
#include "sql.h"
#include <locale.h>  
#include<string.h>
#include <iostream>
#include<sstream>
#include<conio.h>

using namespace std;

void sql::sqlcagirma(){
MYSQL* conn;
MYSQL_ROW row;
MYSQL_RES* res;
conn = mysql_init(0);
conn= mysql_real_connect(conn,"localhost","root","Tedarik25","deneme",3306,NULL,0);

if(conn)
{
	cout<<"sql baglantisi kuruldu\n";
	
}
else{
	cout<<"sql baglantisi kurulamadi";
	
}
}



	
void sql::ilaclisteleme(){
	
MYSQL* conn;   // Ba�lant� pointer'�
MYSQL_ROW row; // D�nen sonu�lar�n sat�r sat�r tutacak de�i�ken
MYSQL_RES* res; //Mysql ba�lant� i�leminin sonu�lar�n� tutan pointer
conn = mysql_init(0);
conn= mysql_real_connect(conn,"localhost","root","Tedarik25","deneme",3306,NULL,0);

	if (conn){
			int qstate = mysql_query(conn , "SELECT *  FROM ilac");
			if(!qstate){
				cout<<"***�LA� L�STES�***";
				res = mysql_store_result(conn);
				int count = mysql_num_fields(res);
			
				while (row=mysql_fetch_row(res)){
					
				cout<<"\n\n ilac id : " <<row[0];
				cout<<"\n\n ilac adi : " <<row[1];
				cout<<"\n\n ilac fiyati : " <<row[2]<<"TL";
				cout<<"\n\n**************************************\n";	
				
}	
					 
				}
			
				
	}
	}

void sql::makinabilgisi(){
	
MYSQL* conn;   // Ba�lant� pointer'�
MYSQL_ROW row; // D�nen sonu�lar�n sat�r sat�r tutacak de�i�ken
MYSQL_RES* res; //Mysql ba�lant� i�leminin sonu�lar�n� tutan pointer
conn = mysql_init(0);
conn= mysql_real_connect(conn,"localhost","root","Tedarik25","deneme",3306,NULL,0);

	if (conn){
			int qstate = mysql_query(conn , "SELECT *  FROM ilac");
			if(!qstate){
				cout<<"\t\t\t\t\t\t\t\t***MAK�NE LISTESI***";
				res = mysql_store_result(conn);
				int count = mysql_num_fields(res);
			
			 cout<<"  \n\n\t\t\t      �R�N �D"<<"  �R�N ADI "<<"    KARI�TIRMA MAK�NES�"<<" FIRIN MAK�NES� "<<" SO�UTMA MAK�NES�"<<endl;
			   
				while (row=mysql_fetch_row(res)){ 
				cout<<"\t\t\t\t   "<<row[0]<<"   "<<row[1]<<"\t\t    "<<row[4]<<"\t\t       "<<row[5]<<"\t\t  "<<row[6]<<endl;
				
}	
cout<<endl;
				
}	
					
				}
			
				
	}


void sql::siparistakip(){


   MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    int qstate;
	conn= mysql_real_connect(conn,"localhost","root","Tedarik25","deneme",3306,NULL,0);
    if (conn)
    {
        const char* query = "SELECT * FROM ilac WHERE siparis > 0";
        qstate = mysql_query(conn, query);
        if (!qstate)
        {
            res = mysql_store_result(conn);
           //int num_fields = mysql_num_fields(res);
			    cout<<"  \n\n\t\t\t      �R�N �D"<<"  �R�N ADI "<<"    �R�N F�YATI"<<" S�PAR�� ADET� "<<endl;
			    cout<<"\t\t\t      _______________________________________________________________";
					while (row=mysql_fetch_row(res)){ 
				cout<<"\t\t\t\t\t\t\t\t\t   "<<row[0]<<"\t   "<<row[1]<<"\t    "<<row[2]<<"\t       "<<row[3]<<endl;
				cout<<"\t\t\t      _______________________________________________________________"; 
			
            }
        }
        else
        {
            cout << "Sorgu ba�ar�s�z." << mysql_error(conn) << "\n";
        }
    }
    else
    {
        cout << "Ba�lant� ba�ar�s�z." << mysql_error(conn) << "\n";
    }

}

	
	void sql::urunekle1(){
		
		
		
		
		MYSQL* conn;	
conn = mysql_init(0);
conn= mysql_real_connect(conn,"localhost","root","Tedarik25","deneme",3306,NULL,0);
stringstream a;
int id;
cout<<"\n\n\n\t\t\t\t �R�N EKLEME EKRANI"<<endl;
cout<<"\n\t\t\t\t______________________________";
cout<<"\n\n\t\t\t\t �d no giriniz  :";
cin>>id;
string isim;
cout<<"\n\t\t\t\t �sim giriniz   :";
cin>>isim;
int fiyat;
cout<<"\n\t\t\t\t Fiyat giriniz :";
cin>>fiyat;
cout<<"\n\t\t\t\t Kar��t�r�c�da �retim suresini giriniz :";
 int karsure;
 cin>>karsure;
  cout<<"\n\t\t\t\t F�r�nda �retim s�resini giriniz :";
   int firinsure;
    cin>>firinsure;
     cout<<"\n\t\t\t\t So�utucuda �retim s�resini giriniz :";
  int sogutsure; cin>>sogutsure; 
  int siparisc=0; 
a << "INSERT INTO ilac (ilacid, ilacadi, ilacfiyati, siparis, karistirmamakinesi, firinmakinesi, sogutmamakinesi) VALUES (" << id << ", '" << isim << "', " << fiyat << ", " << siparisc << ", " << karsure << ", " << firinsure << ", " << sogutsure <<")" ;

string b=a.str();

const char* query =b.c_str();

	if(!(mysql_query(conn,query)))
	{
		cout<<"\t\t\t\tkayit eklendi...";
	}			
    else{
    	
    	cout<<"\t\t\t\tkayit ekleme basarisiz...";
	}				
		
	}
	
	void sql::siparisverme(){
		
	int siparis;
MYSQL* conn;	
MYSQL_RES* res;
MYSQL_ROW row; // D�nen sonu�lar�n sat�r sat�r tutacak de�i�ken

conn = mysql_init(0);
conn= mysql_real_connect(conn,"localhost","root","Tedarik25","deneme",3306,NULL,0);

string id;
int found=0;
cout<<"\n\n\n\n\t\t\t\t\t\t S�PAR�� VERME EKRANI";
cout<<"\n\n\t\t\t\t Sipari� vermek istedi�iniz ila� id sini giriniz : ";
cin>>id;
stringstream a;
a << "SELECT * FROM ilac WHERE ilacid = " << id;


string b=a.str();



const char* query = b.c_str();
	if(!(mysql_query(conn,query)))
	{
		res = mysql_store_result(conn);
		while(row=mysql_fetch_row(res) )
		{
			
			cout<<"\t\t\t\t ila� id :"<<row[0]<<endl;
			cout<<"\t\t\t\t ila� ad� :"<<row[1]<<endl;
			cout<<"\t\t\t\t ila� fiyat� :"<<row[2]<<endl;
			
				
			found++;			
			
		}
		if(found==0){
		cout<<"\t\t\t\t veri bulunamad�";
		}
		
		
		if(!(mysql_query(conn,query)))
	{
			res=mysql_store_result(conn)	;
			row=mysql_fetch_row(res);
			if(row!=0){
			

cout<<"\n\t\t\t\tSiparis miktar�n� giriniz:";
cin.ignore();
cin>>siparis;
stringstream ss;
 ss << "UPDATE ilac  SET  siparis=siparis+ '" << siparis << "'  WHERE ilacid ="<< id;

	b = ss.str();	
	query=b.c_str();	
	mysql_query(conn,query);
		
}
	char* m = row[2];
				int k=atoi(m);
				
			//	char* n =row[3];
			//	int l=atoi(n);
				cout<<"\n\t\t\t\t Toplam tutar :"<<k*siparis<<" TL"<<endl;	
		cout<<"\n\t\t\t\t Sipari�iniz al�nd�...";
	}			
    else{
    	
    	cout<<"\t\t\t\t kay�t ekleme basar�s�z...";
	}				

	}
	cout<<"\n\n\n\t\t\t\t  �r�n eklemek ister misiniz \n\t\t\t\t 1.Eklemek icin 1e bas�n�z \n\t\t\t\t 2.Geri gelmek i�in 2 ye bas�n�z\n\t\t\t\t 3.��kmak i�in 3 e bas�n�z :  ";
	int tekrar;
	cin>>tekrar;
	musteri k;
	
	if(tekrar==1){
		sql sp;
	sp.siparisverme();
	}
	else if(tekrar==2){
		k.musteri1();
		system("cls");
	}
	else{
		cout<<"\t\t\t\t Yine bekleriz\n\n\n\n";
	}

	

	
				
    system("pause");
    
    
}
	

	void sql::imalatmerkezi(){
	int miktar,urunadet;
	siparistakip();
	cout<"\n\n\n\n\t\t\t\t �MALAT MERKEZ� EKRANI";
	cout<<"\n\n\t\t\t\t Ka� farkl� �r�n �reteceksiniz : ";
	cin>>urunadet;
	 int karistirici,firin,sogutucu,i,j,m,uskar,usfirin,ussogut,ortbekleme=0,ortbekleme2=0,ortbekleme3=0,ortgeridonus=0,ortgeridonus2=0,ortgeridonus3=0; 
	 int bskar[30],bsfirin[30],bssogut[30],donus[30],donus2[30],donus3[30],bt[30], usskar[30],ussfirin[30],usssogut[30];
	 char isimm[25];
	 int isim;
    for(i=0;i<urunadet;i++)
    {

MYSQL* conn;	
MYSQL_RES* res;
MYSQL_ROW row; // D�nen sonu�lar�n sat�r sat�r tutacak de�i�ken
conn = mysql_init(0);
conn= mysql_real_connect(conn,"localhost","root","Tedarik25","deneme",3306,NULL,0);

string id;
int found=0;
cout<<"\n\t\t\t\t****************************************************";
cout<<"\n\n\t\t\t\t �retilecek �r�n id sini giriniz : ";
cin>>id;
stringstream a;
a << "SELECT * FROM ilac WHERE ilacid = " << id;


string b=a.str();



const char* query = b.c_str();
	if(!(mysql_query(conn,query)))
	{
		res = mysql_store_result(conn);
		while(row=mysql_fetch_row(res) )
		{
			
			cout<<"\n\t\t\t\t ilac id :"<<row[0]<<endl;
			cout<<"\t\t\t\t ilac adi :"<<row[1]<<endl;
			cout<<"\t\t\t\t sipari� miktar� :"<<row[3]<<" adet"<<endl;
			cout<<"\n\t\t\t\t kar��t�r�c�da �r�n �retim s�resi :"<<row[4]<<" dakika"<<endl;
			cout<<"\t\t\t\t F�r�nda �r�n �retim s�resi :"<<row[5]<<" dakika"<<endl;
			cout<<"\t\t\t\t sogutucuda �r�n �retim s�resi :"<<row[6]<<" dakika"<<endl;
			 found++;
		
cout<<"\n\t\t\t\t__________________________________________________";						
cout<<"\n\t\t\t\t �retilecek miktar� giriniz: ";
cin>>miktar;
cout<<"\n\t\t\t\t__________________________________________________";

//strcpy(isimm, strdup(row[1]));
		

	char* isimm=row[1];
//	isim= isimm.c_str();
	
char* karistirici1=row[4];
 karistirici=atoi(karistirici1);
  
 uskar= karistirici*miktar;
 usskar[i]=uskar;
 
 char* firin1=row[5];
 firin=atoi(firin1);
 usfirin=firin*miktar;
 ussfirin[i]=usfirin;
 
 char* sogutucu1=row[6];
 sogutucu=atoi(sogutucu1);
 ussogut=sogutucu*miktar;
 usssogut[i]=ussogut;
 
cout<<"\n\n\t\t\t\t Kar��t�r�c�da toplam �retim s�resi :"<<uskar<<" dakika"<<endl;
cout<<"\t\t\t\t F�r�nda  toplam �retim s�resi :"<<usfirin<<" dakika"<<endl;
cout<<"\t\t\t\t So�utucuda toplam �retim s�resi :"<<ussogut<<" dakika"<<endl;
cout<<"\n\t\t\t\t__________________________________________________";
	
		if(!(mysql_query(conn,query)))
	{
			res=mysql_store_result(conn)	;
			row=mysql_fetch_row(res);
			if(row!=0){
			

stringstream ss;
 ss << "UPDATE ilac  SET  siparis=siparis- '" << miktar << "'  WHERE ilacid ="<< id;

	b = ss.str();	
	query=b.c_str();	
	mysql_query(conn,query);

}}
		}
	

	if(found==0){
		cout<<"\t\t\t\t veri bulunamad�";
		}
	}
}

	

	
		
		
		bskar[0]=0;  
       
      
 
     bsfirin[0]=0;
    for(i=1;i<urunadet;i++)
    {
        bskar[i]=0;
       // bsfirin[i]=0;
       // bssogut[i]=0;
        for(j=0;j<i;j++)
            bskar[i]+=usskar[j];
         //   bsfirin[i]+=ussfirin[j];
          //  bssogut[i]+=usssogut[j];
            
    }
      bssogut[0]=0;
for(i=1;i<urunadet;i++)
    {
       
        bsfirin[i]=0;
       
        for(j=0;j<i;j++)
          
            bsfirin[i]+=ussfirin[j];
            
            
    }for(i=1;i<urunadet;i++)
    {
       
        bssogut[i]=0;
        for(j=0;j<i;j++)
         
            bssogut[i]+=usssogut[j];
            
    }
      cout<<"\n\t\t\t\t**********************************************************"<<endl;
    cout<<"\n\n\t\t\t\t\t\t KARISTIRICI MAK�NES� \n\t \t\t\t�r�n\t �retim S�resi\tBekleme S�resi\tD�n�� S�resi";
 for(i=0;i<urunadet;i++)
    {
        donus[i]=usskar[i]+bskar[i];
        ortbekleme+=bskar[i];
        ortgeridonus+=donus[i];
        cout<<"\n\t\t\t\t["<<isimm[i]<<"]"<<"  \t\t"<<usskar[i]<<"\t\t"<<bskar[i]<<"\t\t"<<donus[i];
        
	
    }
     cout<<"\n\n\t\t\t\t\t\t FIRIN MAK�NES� \n\t \t\t\t�r�n\t �retim S�resi\tBekleme S�resi\tD�n�� S�resi";
     for(i=0;i<urunadet;i++)
    {
       
       
        
		donus2[i]=ussfirin[i]+bsfirin[i];
        ortbekleme2+=bsfirin[i];
        ortgeridonus2+=donus2[i];
        cout<<"\n\t\t\t\t["<<isimm[i]<<"]"<<"  \t\t"<<ussfirin[i]<<"\t\t"<<bsfirin[i]<<"\t\t"<<donus2[i];
      
	    
    }
     cout<<"\n\n\t\t\t\t\t\t SO�UTUCU MAK�NES� \n\t \t\t\t�r�n\t �retim S�resi\tBekleme S�resi\tD�n�� S�resi";
     for(i=0;i<urunadet;i++)
    {
    
      
	    donus3[i]=usssogut[i]+bssogut[i];
        ortbekleme3+=bssogut[i];
        ortgeridonus3+=donus3[i];
        cout<<"\n\t\t\t\t["<<isimm[i]<<"]"<<"  \t\t"<<usssogut[i]<<"\t\t"<<bssogut[i]<<"\t\t"<<donus3[i]; 
    }
   cout<<"\n\n\t\t\t\t *******************************************************";
	 cout<<"\n\n\n\t\t\t\t Kar��t�r�c�"<<endl;
	 cout<<"\t\t\t\t _____________________________________"<<endl;
	 ortbekleme/=i;
    ortgeridonus/=i;
    cout<<"\n\t\t\t\t Ortalama Bekleme S�resi:"<<ortbekleme;
    cout<<"\n\t\t\t\t Ortalama Geri D�n�� s�resi:"<<ortgeridonus;
		
	cout<<"\n\n\n\t\t\t\t F�r�n"<<endl;
		 cout<<"\t\t\t\t _____________________________________"<<endl;
	ortbekleme2/=i;
    ortgeridonus2/=i;
    cout<<"\n\t\t\t\t Ortalama Bekleme S�resi:"<<ortbekleme2;
    cout<<"\n\t\t\t\t Ortalama Geri D�n�� S�resi:"<<ortgeridonus2;
		cout<<"\n\n\n\t\t\t\t So�utucu"<<endl;
			 cout<<"\t\t\t\t _____________________________________"<<endl;
    ortbekleme3/=i;
    ortgeridonus3/=i;
    cout<<"\n\t\t\t\t Ortalama Bekleme S�resi:"<<ortbekleme3;
    cout<<"\n\t\t\t\t Ortalama Geri D�n�� S�resi:"<<ortgeridonus3; 
		}


 
		


void sql::guncelleme(){
	
	int fiyat;
MYSQL* conn;	
MYSQL_RES* res;
MYSQL_ROW row; // D�nen sonu�lar�n sat�r sat�r tutacak de�i�ken

conn = mysql_init(0);
conn= mysql_real_connect(conn,"localhost","root","Tedarik25","deneme",3306,NULL,0);

string id;
int found=0;
cout<<"\n\n\n\n\t\t\t\t F�YAT G�NCELLEME EKRANI";
cout<<"\n\n\t\t\t\t G�ncellemek  istedi�iniz ila� id sini giriniz : ";
cin>>id;
stringstream a;
a << "SELECT * FROM ilac WHERE ilacid = " << id;


string b=a.str();



const char* query = b.c_str();
	if(!(mysql_query(conn,query)))
	{
		res = mysql_store_result(conn);
		while(row=mysql_fetch_row(res) )
		{
			
			cout<<"\n\t\t\t\t ila� id :"<<row[0]<<endl;
			cout<<"\n\t\t\t\t ila� ad� :"<<row[1]<<endl;
			cout<<"\n\t\t\t\t ila� fiyat� :"<<row[2]<<endl;
			
				
			found++;			
			
		}
		if(found==0){
		cout<<"\t\t\t\t veri bulunamad�";
		}
		
		
		if(!(mysql_query(conn,query)))
	{
			res=mysql_store_result(conn)	;
			row=mysql_fetch_row(res);
			if(row!=0){
			

cout<<"\n\t\t\t\tYeni �r�n fiyat�n� giriniz:";
cin.ignore();
cin>>fiyat;
stringstream sss;
 sss << "UPDATE ilac  SET  ilacfiyati= '" << fiyat << "'  WHERE ilacid ="<< id;

	b = sss.str();	
	query=b.c_str();	
	mysql_query(conn,query);
	cout<<"\n\t\t\t\t Fiyat g�ncellendi...";
		
}

	
	}			
    else{
    	
    	cout<<"\t\t\t\t kay�t ekleme basar�s�z...";
	}				

	}

	}
	
	
	

void sql::stok(){
	
	
   MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    int qstate;
	conn= mysql_real_connect(conn,"localhost","root","Tedarik25","deneme",3306,NULL,0);
    if (conn)
    {
        const char* query = "SELECT * FROM ilac WHERE siparis < 0";
        qstate = mysql_query(conn, query);
        if (!qstate)
        {
            res = mysql_store_result(conn);
           //int num_fields = mysql_num_fields(res);
			    cout<<"  \n\n\t\t\t      �R�N �D"<<"  �R�N ADI "<<"    �R�N F�YATI"<<" STOK ADET� "<<endl;
			    cout<<"\t\t\t      _______________________________________________________________";
					while (row=mysql_fetch_row(res)){
					
				char* m = row[3];
				int k=atoi(m);
				int n=k*-1; 
				cout<<"\t\t\t\t\t\t\t\t\t   "<<row[0]<<"\t   "<<row[1]<<"\t    "<<row[2]<<"\t       "<<n<<endl;
				cout<<"\n\t\t\t      _______________________________________________________________"; 
			
            }
        }
        else
        {
            cout << "Sorgu ba�ar�s�z." << mysql_error(conn) << "\n";
        }
    }
    else
    {
        cout << "Ba�lant� ba�ar�s�z." << mysql_error(conn) << "\n";
    }

	
}


void sql::deneme(){
		
			   system ("color 75");
    setlocale(LC_ALL, "Turkish");

	





}



	


	


 
		

	
	







	

	





                                                                                                                                                                                                                                                                                                                                           
