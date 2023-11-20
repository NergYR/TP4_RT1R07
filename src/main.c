#include <stdio.h>
#define MAX 10

float tabentier[MAX];


int main(){
    int i;
    for (i=0; i < MAX; i++){
        printf("Entrez un nombre : ");
        scanf("%f", &i);
    }
}