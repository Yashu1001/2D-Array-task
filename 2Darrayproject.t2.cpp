#include<stdio.h>
main(){
	int r,c;
	int a[3][3];
	r= sizeof(a);
	c= sizeof(int);
	
	int l = r/c;
	
	printf("Length= %d \n", l);	
}
