#include <stdio.h>

int main(int argc, char const *argv[]){
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%s", (A>B)?">" : (A<B)?"<" : "==");
    return 0;
}