#include<stdio.h>
 
int f91 (int n) {
	if (n>100) return(n-=10);
	else return(91);
}
main(){
	int i;
	scanf("%d",&i) ;
	while (i!=0){		
		printf("f91(%d) = %d\n",i,f91(i));
		scanf("%d",&i) ;
	} 
}	
