#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
    int elemansayisi;//1 saniyede ger�ekle�ir.
    printf("lutfen dizinin eleman sayisini girin:");//1 saniyede ger�ekle�ir.
    scanf("%d",&elemansayisi); //1 saniyede ger�ekle�ir. 
    int dizi[elemansayisi];//1 saniyede ger�ekle�ir.
    int i;//1 saniyede ger�ekle�ir.
    int enkucuksayi;//1 saniyede ger�ekle�ir.
    for(i=0; i<elemansayisi; i++){//n+1 saniyede ger�ekle�ir.
    	printf("dizinin %d. eleman sayisini giriniz:",i+1);//n saniyede ger�ekle�ir.
    	scanf("%d",&dizi[i]); //n saniyede ger�ekle�ir.
    	
    	  if(i == 0){//n saniyede ger�ekle�ir.
    	  	 enkucuksayi = dizi[i];//n saniyede ger�ekle�ir.
        }
    	if(dizi[i]<enkucuksayi){//n saniyede ger�ekle�ir.
    	enkucuksayi = dizi[i];	//n saniyede ger�ekle�ir.
		}
 }
   printf("Dizideki en kucuk eleman:%d",enkucuksayi);//1 saniyede ger�ekle�ir.	

	return 0;
}

//y�r�tme zaman� T(n)=1+1+1+1+1+1+(n+1)+n+n+n+n+n+n+1=7n+8 olur.
