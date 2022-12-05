#include<stdio.h>
main(){
	int a[5][5],r,c,i,j,sum;
	printf("ENTER NUMBER ROW=");
	scanf("%i",&i);
	printf("ENTER NUMBER COLUMNS=");
	scanf("%i",&j);
	printf("ENTER NUMBER ROW AND COLUMNS=\n");
	for(r=0;r<i;r++){
		for(c=0;c<j;c++){
		scanf("%i",&a[r][c]);			
		}
	}
		for(r=0;r<i;r++){
			sum=0;
		   for(c=0;c<j;c++){
		      sum=sum+a[r][c];
	}
		printf("TOTAL ROW LINE SUM= %i\n",sum);
}

}
