#include<stdio.h>
#include<ctype.h>
int main(){
	char a[100];
	int i;
	gets(a);
	int l=0,u=0,s=0,d=0;
	for(i=0;a[i]!='\0';i+=1){
		if(islower(a[i])){
			l+=1;
		}
		else if(isupper(a[i])){
			u+=1;
		}
		else if(isdigit(a[i])){
			d+=1;
		}
		else{
			s+=1;
		}
		
	}
	printf("l-%d\n",l);
	printf("u-%d\n",u);
	printf("d-%d\n",d);
	printf("s-%d\n",s);
	return 0;
}
