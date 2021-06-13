
#include<stdio.h>
int main(){
	int no[10],i=0,j=0;
	for(i=0;i<10;i++){
		scanf("%d",&no[i]);
	}
	int c=0;
	for(i=0;i<10;i++){
		for(j=0;j<9-i;j++){
			if(no[j]>no[j+1]){
				c=no[j];
				no[j]=no[j+1];
				no[j+1]=c;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d",no[i]);
	}
}

