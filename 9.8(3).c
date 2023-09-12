#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int max=Max(a,b,c);
	printf("%d",max);
}
int Max(int a,int b,int c){
	int max1 = a>b?a:b;
	return max1>c?max1:c;
}