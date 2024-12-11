#include <stdio.h>
#include <string.h>

int main() {
    char nocnha[50];
    printf("Moi ban nhap vao ho va ten: ");
    fgets(nocnha, 50, stdin);
    printf("Ky tu vua nhap la: %s",nocnha);
//In ra co khoang trang 
    for (int i = 0; i < strlen(nocnha); i++) {
        printf("%c ", nocnha[i]);
    }
    
    return 0;
}
