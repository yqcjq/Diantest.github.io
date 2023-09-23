#include <stdio.h>
int abs(int a,int b){
	int t=a-b;
	int d=0;
	if(t<=0){
		d-=t;
	} else{
		d=t;
	}
	return d;
}
int main()
{
	int shuzu[4];
	int i,j;
	int a;
	scanf("%d %d %d %d",&shuzu[0],&shuzu[1],&shuzu[2],&shuzu[3]);
	for(i=0;i<3;i++){
		printf("%d\t",i+1);
	    printf("%d\t",shuzu[((i+2)%3)+1]);
		a=0;  
	    for(j=0;j<i;j++){                  
	    	a+=abs(shuzu[3-j],shuzu[1]);   
		}
		printf("%d\t",a);
	printf("%d\n",i%2);                     
	}
	return 0;
}
	
	
	
	
	




