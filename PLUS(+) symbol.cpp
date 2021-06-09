#include <stdio.h>

int main(){
	int n;
	printf("The (+) symbol width : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if(i==1 || j==1 || i==n || j==n) {
				printf("*");
				}else if(i==2 || j==2 || i==n-1 || j==n-1){
				printf(" ");
				}else if(i==(n/2)+1 || j==(n/2)+1){
					printf("*");
				}else printf(" ");
			}
				printf("\n");
		}
	
	getchar();
	return 0;
}
