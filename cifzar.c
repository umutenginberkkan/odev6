

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//yanlış çalışıyor saçma değerler veriyor
int main() {

	int a[100];
	int b[100];
	int c[6][6];
	int i,j,h;


	for(i=0;i<100;i++){
		a[i]=rand()%6+1;
		b[i]=rand()%6+1;



		for(j=1;j<7;j++){

				for( h=1;h<7;h++){


					if( a[i]==j&&b[i]==h   ){

								c[j][h]+=1;

							}

				}
        }



	}
    for(i=0;i<6;i++){
            for(j=0;j<6;j++)
            {
                printf("1.zar %d 2.zar %d iken %d sonuç var\n",i+1,j+1,c[i][j]);
            }
			printf("\n");
        }
    return 0;
}


