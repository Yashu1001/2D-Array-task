#include<stdio.h>
main(){
	int r,c;
	printf("ENTER ROW=");
	scanf("%i",&r);
	printf("ENTER C=");
	scanf("%i",&c);
	int a[r][c];
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%i][%i]=",i,j);
			scanf("%i",&a[i][j]);	
		}
		printf("\n");	
	}	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		   printf("%i ",a[i][j]);
		}
			printf("\n");	
}
}

