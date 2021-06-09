#include <stdio.h>
using namespace std;
int main(){
	printf("Enter the width of rectangle : \n");
	int n=20;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if(i==1 || i==n | j==1|| j==n){
				printf("*");
			}else if(i==2 || j==2 || i==n-1 || j==n-1){
				printf(" ");
			}else printf("X");
		}
		printf("\n");
	}
	getchar();
	return 0;
}
