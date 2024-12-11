#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv){
    char sentences[100];
    printf("Moi ban nhap mot chuoi ki tu\n: ");
    fgets(sentences, sizeof(sentences), stdin);
    printf("Chuoi vua nhap là: %s\n", sentences);
    printf("do dai cua chuoi ki tu la : %zu\n",strlen(sentences));
    return 0;
}
