#include<stdio.h>

int main(){
	// to calculate [1+x+x^2/2!+x^3/3!+....] this series  
    //y=exponentiation 
	
	long long x,step,factoriel,sum,y,i,j,k;
	
	printf("TO CALCULATE [1+x+x^2/2!+x^3/3!+....] THIS SERIES\n\n");
	printf("ENTER THE X VALUE:");
	scanf("%lld",&x);
	printf("ENTER THE STEP NUMBER:");
	scanf("%lld",&step);
	
	step=step-1;
	sum=1;
	y=1;
	factoriel=1;
	i=step;
	j=step;
	k=step;
	
	for(i;i>0;i--){
		
		for(j;j>0;j--){
			y=x*y;
		}
		for(k;k>0;k--){
			factoriel=factoriel*k;
		}	
		sum=sum+(y/factoriel);
		}
	
	printf("%lld\n",sum);
		
	   return 0;
}
	
	

	
