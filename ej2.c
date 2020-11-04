#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int i=0,ng=0,acu=0,num=0;
	float pro=0;
	while (15>=i)
	{
		printf("\n Ingrese un numero ");
		scanf("%d",&num);
		acu=acu+num;
		if(num>ng){
			ng=num;
		}
		i=i+1;
	}
	pro=acu/15;
	printf("\n El numero promedio es %f",pro);
	printf("\n El numero mas grande es %d",ng);
	return 0;
}
