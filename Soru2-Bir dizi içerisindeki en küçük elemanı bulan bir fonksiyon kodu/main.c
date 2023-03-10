#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
    int elemansayisi;//1 saniyede gerçekleþir.
    printf("lutfen dizinin eleman sayisini girin:");//1 saniyede gerçekleþir.
    scanf("%d",&elemansayisi); //1 saniyede gerçekleþir. 
    int dizi[elemansayisi];//1 saniyede gerçekleþir.
    int i;//1 saniyede gerçekleþir.
    int enkucuksayi;//1 saniyede gerçekleþir.
    for(i=0; i<elemansayisi; i++){//n+1 saniyede gerçekleþir.
    	printf("dizinin %d. eleman sayisini giriniz:",i+1);//n saniyede gerçekleþir.
    	scanf("%d",&dizi[i]); //n saniyede gerçekleþir.
    	
    	  if(i == 0){//n saniyede gerçekleþir.
    	  	 enkucuksayi = dizi[i];//n saniyede gerçekleþir.
        }
    	if(dizi[i]<enkucuksayi){//n saniyede gerçekleþir.
    	enkucuksayi = dizi[i];	//n saniyede gerçekleþir.
		}
 }
   printf("Dizideki en kucuk eleman:%d",enkucuksayi);//1 saniyede gerçekleþir.	

	return 0;
}

//yürütme zamaný T(n)=1+1+1+1+1+1+(n+1)+n+n+n+n+n+n+1=7n+8 olur.
