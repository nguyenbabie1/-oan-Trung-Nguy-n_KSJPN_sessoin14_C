#include <stdio.h>
#include <string.h>

int main() {
    char nocnha[100];
    char kytu;
    int dem = 0;

    printf("Nhap chuoi ky tu bat ky: ");
    scanf("%s", nocnha);

    printf("Nhap ky tu muon tim trong trai tim e: ");
    scanf(" %c", &kytu); 
    int n = strlen(nocnha);
    for (int i = 0; i < n; i++) {
        if (nocnha[i] == kytu) {
            dem++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan.\n", kytu, dem);
    return 0;
}
