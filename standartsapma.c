#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void) {
	int i,toplam,ssaptop;
	double ort=0;
	double ssap=0;
	int a[10];
	toplam=0;
	ssaptop=0;
	srand(time(NULL));

	for(i=0;i<10;i++){

		a[i]=rand()%20;
     printf("dizinin %d elemanı %ddir\n",i+1,a[i]);
		toplam+=a[i];
	}
	ort = toplam/10;
	for(i=0;i<10;i++){

		ssaptop+=(a[i]-ort)*(a[i]-ort);

	}
	ssap=sqrt(ssaptop/9);
   
    printf("%lf standart sapmadır",ssap);

}
