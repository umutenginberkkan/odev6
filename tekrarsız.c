
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){

	int i,j,k,d;
	k=15;
	d = 0;
	int a[15];

	for(i = 0;i<15;i++){
		a[i]=rand()%15+1;
	printf("k dizisinin %d.elemanı =%d   ",i+1,a[i]);
		if ((i+1)%3==0)printf("\n");
	}


	for(i=0;i<15;i++){
			for(j=1;j<i;j++){
					if(a[i]==a[j]){k--;break;}else{

					}
				}
			}
	int b[k];
	printf("%d",k);

	for(i=0;i<15;i++){
				for(j=1;j<i;j++){
						if(a[i]==a[j]){break;}else{
							b[d]=a[i];d++;
						}
					}
				}

	for (i=0;i<k;i++){
		printf("yeni k dizisinin %d.elemanı =  %d   ",i+1,b[i]);
	}



}
