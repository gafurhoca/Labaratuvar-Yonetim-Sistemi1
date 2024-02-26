#ifndef PERSONEL_H
#define PERSONEL_H
#include <iostream>
#include<string.h>
#include<mysql.h>
#include<mysqld_error.h>
#include<sstream>
#include <locale.h>  

using namespace std;


class personel
{
	public:
	
	void ekle();
	void yonetici();
	void labcihaz();
	void calisanbilgisi();
    void imalat();
    void siparis();
	void listele();
	void siparistakip();
	void guncelle();
    void stokk();

};
#endif
