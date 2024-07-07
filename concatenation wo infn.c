#include<stdio.h>
int main(){
	char a[100],b[100];
	int i,j;
	gets(a);
	gets(b);
	for(i=0;a[i]!=0;i+=1);
	for(j=0;b[j]!=0;j+=1){
		a[i]=b[j];
		i+=1;
	}
	a[i]='\0';
	printf("%s",a);
	
	return 0;
}
