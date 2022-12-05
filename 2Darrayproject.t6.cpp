#include<stdio.h>
main(){
	int a[5][5],r,c,i,j,sum=0;
	printf("ENTER NUM. ROW= ");
	scanf("%i",&i);
	printf("ENTER NUM. COLUMNS=");
	scanf("%i",&j);
	printf("ENTER ROW AND COLUMNS DIAGONAL=\n");
	for(r=0;r<i;r++){
		for(c=0;c<j;c++){
    scanf("%i",&a[r][c]);
		}
	}
	for(r=0;r<i;r++){
	sum=sum+a[r][r];
}
         printf("ENTER TOTAL DIAGONAL NUMBER= %i\n",sum);
}
