#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int d=b*b-4*a*c;
	if(d>0){
		printf("x1=x2=%d\n",-b/(2*a));
	}
	if(d==0){
		printf("x1=%d\n",(-b+sqrt(a)/(2*a)));
		printf("x2=%d\n",(-b-sqrt(a)/(2*a)));
	}
	if(d<0){
		int p=-b/2*a;
		int q=sqrt(-d)/(2*a);
		printf("%d+%di\n",p,q);
		printf("%d-%di",p,q);
		
	}
	
}