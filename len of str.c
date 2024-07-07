#include<stdio.h>
int main(){
	char ar[100];
	int i;
	printf("Enter a string: ");
	gets(ar);
	for(i=0;ar[i]!=0;i+=1);
	printf("The length of the string is:%d",i);
	return 0;
}
