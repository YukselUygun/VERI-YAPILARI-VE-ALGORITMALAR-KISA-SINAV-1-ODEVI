#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
    int elemansayisi;//1 saniyede gerçekleşir.
    printf("lutfen dizinin eleman sayisini girin:");//1 saniyede gerçekleşir.
    scanf("%d",&elemansayisi); //1 saniyede gerçekleşir. 
    int dizi[elemansayisi];//1 saniyede gerçekleşir.
    int i;//1 saniyede gerçekleşir.
    int enkucuksayi;//1 saniyede gerçekleşir.
    for(i=0; i<elemansayisi; i++){//n+1 saniyede gerçekleşir.
    	printf("dizinin %d. eleman sayisini giriniz:",i+1);//n saniyede gerçekleşir.
    	scanf("%d",&dizi[i]); //n saniyede gerçekleşir.
    	
    	  if(i == 0){//n saniyede gerçekleşir.
    	  	 enkucuksayi = dizi[i];//n saniyede gerçekleşir.
        }
    	if(dizi[i]<enkucuksayi){//n saniyede gerçekleşir.
    	enkucuksayi = dizi[i];	//n saniyede gerçekleşir.
		}
 }
   printf("Dizideki en kucuk eleman:%d",enkucuksayi);//1 saniyede gerçekleşir.	

	return 0;
}

//yürütme zamanı T(n)=1+1+1+1+1+1+(n+1)+n+n+n+n+n+n+1=7n+8 olur.
