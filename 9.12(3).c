#include<stdio.h>
int main(){
	int i=0,j=0;
	int a[10];
	int max;
	for(i;i<=10;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("max=%d",max);
	

}
