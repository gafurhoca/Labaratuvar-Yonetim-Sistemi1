/*

//**************** sqle veri kaydetme**********
MYSQL* conn;	
conn = mysql_init(0);
conn= mysql_real_connect(conn,"localhost","root","Tedarik25","deneme",3306,NULL,0);
stringstream a;
int id;
cout<<"id no gir  :";
cin>>id;
string isim;
cout<<"isim girin   :";
cin>>isim;
int fiyat;
cout<<"fiyat gir :";
cin>>fiyat;
//cin.ignore();
a << "INSERT INTO ilac (ilacid, ilacadi, ilacfiyati) VALUES (" << id << ", '" << isim << "', '" << fiyat << "')" ;
string b=a.str();

const char* query =b.c_str();

	if(!(mysql_query(conn,query)))
	{
		cout<<"kayit eklendi...";
	}			
    else{
    	
    	cout<<"kayit ekleme basarisiz...";
	}				
		
}
*/
/*
MYSQL* conn;	
MYSQL_RES* res;
MYSQL_ROW row; // Dönen sonuçlarýn satýr satýr tutacak deðiþken

conn = mysql_init(0);
conn= mysql_real_connect(conn,"localhost","root","Tedarik25","deneme",3306,NULL,0);

string id;
int found=0;
cout<<"aratmak istediginiz ilac adini giriniz ";
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
			
			cout<<"ilac id :"<<row[0]<<endl;
			cout<<"ilac adi :"<<row[1]<<endl;
			cout<<"ilac fiyati :"<<row[2]<<endl;
			found++;
			
		}
		if(found==0){
		
		
		cout<<"veri bulunamadi";
		
		}
		
		
	}			
    else{
    	
    	cout<<"kayit ekleme basarisiz...";
	}				
		
}
*/
/*
*************siparis alma kodu****************
MYSQL* conn;	
MYSQL_RES* res;
MYSQL_ROW row; // Dönen sonuçlarýn satýr satýr tutacak deðiþken

conn = mysql_init(0);
conn= mysql_real_connect(conn,"localhost","root","Tedarik25","deneme",3306,NULL,0);

string id;
int found=0;
cout<<"aratmak istediginiz ilac id sini giriniz ";
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
			
			cout<<"ilac id :"<<row[0]<<endl;
			cout<<"ilac adi :"<<row[1]<<endl;
			cout<<"ilac fiyati :"<<row[2]<<endl;
			found++;			
			
		}
		if(found==0){
		cout<<"veri bulunamadi";
		}
		
		
		if(!(mysql_query(conn,query)))
	{
			res=mysql_store_result(conn)	;
			row=mysql_fetch_row(res);
			if(row!=0){
			
int siparis;
cout<<"Siparis miktarini giriniz:";
cin.ignore();
cin>>siparis;
stringstream ss;
 ss << "UPDATE ilac  SET  siparis = '" << siparis << "'  WHERE ilacid ="<< id;

	b = ss.str();	
	query=b.c_str();	
	mysql_query(conn,query);
}
		cout<<"siparisiniz alindi...";
	}			
    else{
    	
    	cout<<"kayit ekleme basarisiz...";
	}				
		
	}
				
    
}
	
	************************************************************************
	veri iþlemi yaptýrma 
	char* m = row[3];
				int k=atoi(m);
				char* n =row[5];
				int l=atoi(n);
				
	*/
	

