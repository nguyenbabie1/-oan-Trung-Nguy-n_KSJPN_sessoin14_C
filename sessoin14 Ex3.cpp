#include <stdio.h>
#include <string.h>

int main(){
	char nocnha[100];
	printf("Nhap ky tu bat ky :");
	fgets(nocnha,100,stdin);
	int n = strlen(nocnha);
	// dao nguoc  
	for(int i=0; i<n/2 ; i++){
		char temp = nocnha[i];
		nocnha[i]=nocnha[n-i-1];
		nocnha[n-i-1]=temp;
	}
	printf ("Mang sau khi dao nguoc la :%s\t",nocnha);
	
	 
	return 0;
}
