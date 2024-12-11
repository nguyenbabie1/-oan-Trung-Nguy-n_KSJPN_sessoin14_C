#include <stdio.h>
#include <string.h>

int main(){
	char chuoi[100];
	int count=0;
	int n;
		printf("Nhap chuoi bat ky :");
		scanf("%c",&n); 
		fgets(chuoi, sizeof(chuoi), stdin);
    for(int i = 0; i < strlen(chuoi); i++) {
        if(chuoi[i] == n) {
            count++;
        }
    }
	printf("So lan xuat hien ky tu : %d\n", count,n);
	return 0;
}
