#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char nocnha[50];
		printf("Moi ban nhap vao chuoi ki tu:");
		fgets(nocnha,50,stdin);
		printf("Ky tu vua nhap la:%s",nocnha);
		printf("Do dai : %d\n",strlen(nocnha));
	return 0;
	
}
