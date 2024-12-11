#include <stdio.h>
#include <string.h>

int main(){
	char nocnha[50];
	int check;
	printf("Moi ban nhap chuoi ki tu bat ki : ");
	fgets(nocnha, 50 , stdin);
	printf("Chuoi ki tu cua ban : ");
	fputs(nocnha , stdout);
	
	for(int i = 0; i < strlen(nocnha) ; i++){
		if(nocnha[i] == ' '){
			check++;
		}
		if(check == 1){
			check++;
		}
	}
	printf("Chuoi ki tu cua ban gom %d tu ", check);
}
