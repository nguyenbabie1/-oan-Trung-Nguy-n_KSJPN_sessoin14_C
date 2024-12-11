#include <stdio.h>

int main() {
    char nocnha[100];
    int dem = 0;
    printf("Nhap chuoi ky tu bat ky: ");
    fgets(nocnha, sizeof(nocnha), stdin); 
    for (int i = 0; nocnha[i] != '\0'; i++) {
        if ((nocnha[i] >= 'A' && nocnha[i] <= 'Z') || (nocnha[i] >= 'a' && nocnha[i] <= 'z')) {
            dem++;
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d\n", dem);
    return 0;
}
