
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){

	int i,j,k;
	k=0;
	int a[15];
	for(i = 0;i<15;i++){
		a[i]=rand()%15+1;
	printf("k dizisinin %d.elemanı =%d   ",i+1,a[i]);
		if ((i+1)%3==0)printf("\n");
	}


	for(i=0;i<15;i++){
			for(j=0;j<i;j++){
					if(a[i]==a[j]){k++;break;}
				}
			}

}
