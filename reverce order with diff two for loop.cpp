#include<stdio.h>
int main(){

int sum=0,num,rem,i,nsave;


for(i=0; i<=500; i++)
{

num=i;
while(num>0){
	rem=num%10;
	sum=sum+rem*rem*rem;
	num=num/10;
	
}
if(i==sum)
{
	printf("\n %d is armstrong");
	
}


return 0;
}

}
