#include<stdio.h>

int main(){
	int n,digit,rev=0,sum=0;
	printf("enter a number :");
	scanf("%d",&n);
	
	int temp=n;
	while(n>0){
		digit=n%10;
		rev=rev*10+digit;
		
		sum+=digit;
		n=n/10;
	}


	printf("\n original Number: %d",temp);
	printf("\n reversed number:%d",rev);
	printf("\n sum of digits:%d\n",sum);
	
	return 0;
}

