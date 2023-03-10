#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 struct ogrencibilgileri{
 	char ad[30];
 	char soyad[30];
 	int no;
 	int sinif;
 	char bolum[30];
 };
 struct ogrenciadresi{
 	char il[20];
 	char ilce[20];
 	char mahalle[20];
 	char sokak[20];
    char apt_adi[20];
    int daire_no;
    };
int main() {
	struct ogrencibilgileri ogr;
	struct ogrenciadresi ogre;
	
    int i=0;
    for(i=0; i<5; i++){
    	printf("\n\n %d.ogrenci\n",i+1);
    	printf("ogrenci adi:");
    	scanf("%s",&ogr.ad);
    	printf("ogrenci soyadi:");
    	scanf("%s",&ogr.soyad);
    	printf("ogrenci no:");
    	scanf("%d",&ogr.no);
    	printf("ogrenci sinifi:");
    	scanf("%d",&ogr.sinif);
    	printf("ogrenci bolum:");
    	scanf("%s",&ogr.bolum);
    	printf("ogrenci yasadigi il:");
    	scanf("%s",&ogre.il);
    	printf("ogrenci yasadigi ilce:");
    	scanf("%s",&ogre.ilce);
    	printf("ogrenci  yasadigi mahalle:");
    	scanf("%s",&ogre.mahalle);
    	printf("ogrenci yasadigi sokak:");
    	scanf("%s",&ogre.sokak);
    	printf("ogrencinin apt. adi:");
    	scanf("%s",&ogre.apt_adi);
    	printf("ogrencinin daire nosu:");
    	scanf("%d",&ogre.daire_no);
    	
    	printf("\n");
    	printf("****%d.Ogrencinin kisisel bilgileri****\n\n",i+1);
    	printf("ogrenci adi: %s \n",ogr.ad);
    	printf("ogrenci soyadi: %s \n",ogr.soyad);
    	printf("ogrenci no: %d \n",ogr.no);
    	printf("ogrencinin sinifi: %d \n",ogr.sinif);
    	printf("ogrencinin bolumu: %s \n\n",ogr.bolum);
    	printf("****%d.Ogrencinin adres bilgileri****\n\n",i+1);
    	printf("ogrencinin yasadigi il: %s \n",ogre.il);
    	printf("ogrencinin yasadigi ilce: %s \n",ogre.ilce);
    	printf("ogrencinin yasadigi mahalle: %s \n",ogre.mahalle);
    	printf("ogrencinin yasadigi sokak: %s \n",ogre.sokak);
    	printf("ogrencinin yasadigi apt. adi: %s \n",ogre.apt_adi);
    	printf("ogrencinin yasadigi daire no: %d \n",ogre.daire_no);
	}
	
	return 0;
}
