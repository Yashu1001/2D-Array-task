#include<stdio.h> 
main(){
	int a[2][2],b[2][2],c[2][2],i,j; 
	printf("first array\n");
    for(i=0;i<2;i++){
    	for(j=0;j<2;j++){
    		scanf("%i",&a[i][j]); 
		}
	}
	    printf("second array\n");  
    for(i=0;i<2;i++){ 
        for(j=0;j<2;j++){
        	 scanf("%i",&b[i][j]);
		}	   
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];  
	      printf("sum two array [%i] %i\n",i,c[i][j]);			
		}
	}  
 } 
