#include <stdio.h>
#define MAX 30

int tabentier[MAX];

void afficheTab(int n, int tab[]){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", tab[i]);
    }
}
void saisieTab(int n, int tab[]){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Entrez un nombre : ");
        scanf("%d", &tab[i]);
    }
}

int main()
{
    printf("Quel est la taille du tableau : ");
    int n;
    scanf("%d", &n);
    int tab[n];
    saisieTab(n, tab);
    afficheTab(n, tab);

}