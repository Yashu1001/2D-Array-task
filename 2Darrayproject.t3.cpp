#include<stdio.h>
main(){
	int a,b,r,c;
	int h[r][c];
	float average,sum=0;
	printf("Enter ROW= ");
	scanf("%i",&a);
	printf("Enter C = ");
	scanf("%i",&b);	
	printf("ENTER ARRAY \n");	
	for(r=0; r<a; r++){	
	    for(c=0; c<b; c++){
	    	scanf("%i",&h[r][c]);
	    	sum+=h[r][c];
		}
			
	}
/*	for(r=0; r<a; r++){	
	    for(c=0; c<b; c++){
	    	sum+=h[r][c];
	    }
	}	*/
	average = sum / (a*b);
	printf("Average :- %.2f",average);	
	}
