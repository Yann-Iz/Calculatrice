#include <stdio.h>
#include <stdlib.h>
#include "Librairie Project Calculatrice 2.h"


int main()
{
    float a, b;
    int c, d, e, i, z[3];
    char operation, y;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    i=0;
    printf("Cet algorithme possede certaines fonctions d'une calculatrice. Il peut calculer la somme, la difference, le produit, division de deux reels, la difference positive de deux nombres entiers, le minimum entre trois entiers, le maximum entre trois entiers et la puissance d'un entier par un entier.\n");
    do
    {
        printf("Choisissez une operation (entre +, -, *, /, p, <, >, ^) : \n");
        scanf("%s", &operation);
        switch(operation)
        {
        case '+':
            {
                Addition(a, b);
                break;
            }
        case '-':
            {
                Soustraction(a, b);
                break;
            }
        case '*':
            {
                Multiplication(a, b);
                break;
            }
        case '/':
            {
                Division(a, b);
                break;
            }
        case 'p':
            {
                Difference(c, d);
                break;
            }
        case '<':
            {
                Petit(c, i, z);
                break;
            }
        case '>':
            {
                Grand(c, i, z);
                break;
            }
        case '^':
            {
                Puissance(c, d, e, i);
                break;
            }
        default:
            {
                printf("Erreur de saisie\n");
            }
        }
        do
        {
            printf("Voulez-vous recommencer? ( 1 pour oui, 0 pour non )\n");
            scanf("%s", &y);
            if ((y!='1') &&(y!='0'))
            {
                printf("Erreur de saisie\n");
            }
        } while ((y!='1') &&(y!='0'));
    } while (y=='1');
    return 0;
}
