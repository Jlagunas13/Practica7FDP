#include <stdio.h>
#include <stdlib.h>

int main()
{	
	short _;// variable de tipo short 
	unsigned short v_5;//Variable de tipo short sin signo
	signed short v_4;//Variable de tipo short con signo
	signed int __; //variable de tipo entero con signo
	int v_1; //variable de tipo entero con signo
	unsigned int v_2; //variable de tipo entero sin signo
	long v_3;//variable de tipo long
	signed long v_6;//variable de tipo long con signo
	unsigned long v_7;//variable de tipo long sin signo


	printf("Ingresa un dato tipo short\n");
	scanf("%hd",&_);
	printf("Ingresa un dato de tipo signed int \n");
	scanf("%d",&__);
	printf("Ingresa un dato tipo int\n");
	scanf("%d",&v_1);
	printf("Ingresa un dato tipo unsigned int\n");
	scanf("%d",&v_2);
	printf("Ingresa un dato tipo long\n");
	scanf("%ld",&v_3);

	printf("Ingresa un dato tipo signed short\n");
	scanf("%hd",&v_4);
	printf("Ingresa un dato tipo unsigned short\n");
	scanf("%hd",&v_5);
	printf("Ingresa un dato tipo signed long\n");
	scanf("%ld",&v_6);
	printf("Ingresa un dato tipo unsigned long\n");
	scanf("%ld",&v_7);
	
	printf("Ingresa un dato tipo long\n");
	printf("Ingresa un dato tipo long\n");
	printf("Valores leidos \n");
	printf("%hd\t%d\t%d\t%d\t%ld\t%d\t%hd\t%ld\t%ld\n",_,__,v_1,v_2,v_3,v_4,v_5,v_6,v_7);

	return 0;
}
