
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {

	int a,b,c,l,m,f,g;

	m=0;
	l=0;

	int k[50];
	srand(time(NULL));
	for(a=0;a<50;a++){	k[a]=rand()%50; }
    for (g=0;g<50;g++){printf("düzensiz dizinin %d elemanı =%d   ",g,k[g]);if(g%4==0)printf("\n");}

	/*for(b=0;b<50;b++){
		for(c=0;c<b;c++){
			if(k[b]<k[c]){l=k[b];m=k[c];k[c]=l;k[b]=m; }

		}*/




	for(c=0;c<50;c++){
		for(b=0;b<50;b++){
			if(k[b<k[b+1]]){
				if(k[b]<k[c]){l=k[b];m=k[c];k[c]=l;k[b]=m;}
                }
		}



	}
    for(f=0;f<50;f++){printf("düzenli dizinin %d elemanı =%d    ",f,k[f]);if(f%4==0)printf("\n");}
  }



