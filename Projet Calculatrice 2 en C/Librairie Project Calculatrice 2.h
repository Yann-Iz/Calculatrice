#ifndef LIBRAIRIE_PROJECT_CALCULATRICE_2_H_INCLUDED
#define LIBRAIRIE_PROJECT_CALCULATRICE_2_H_INCLUDED

void Addition(float a, float b)
{
    printf("Saisir deux reels :\n");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("%.2f + %.2f = %.2f\n", a, b, a+b);
}

void Soustraction(float a, float b)
{
    printf("Saisir deux reels :\n");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("%.2f - %.2f = %.2f\n", a, b, a-b);
 }

 void Multiplication(float a, float b)
 {
    printf("Saisir deux reels :\n");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("%.2f * %.2f = %.2f\n", a, b, a*b);
 }

 void Division(float a, float b)
 {
    printf("Saisir deux reels :\n");
    scanf("%f", &a);
    scanf("%f", &b);
    if (b==0)
    {
        printf("Calcul impossible\n");
    }
    else
    {
        printf("%.2f / %.2f = %.2f\n", a, b, a/b);
    }
 }

 void Difference(int c, int d)
 {
    printf("Saisir deux entiers :\n");
    scanf("%d", &c);
    scanf("%d", &d);
    if ((c-d)<0)
    {
        printf("La difference positive de %d et %d est %d\n", c, d, (c-d)*(-1));
    }
    else
    {
        printf("La difference positive de %d et %d est %d\n", c, d, c-d);
    }
 }

 void Petit(int c, int i, int z[3])
 {
    printf("Saisir 3 entiers :\n");
    scanf("%d", &z[0]);
    c=z[0];
    for (i=1; i<=2; i++)
    {
        scanf("%d", &z[i]);
        if (z[i]<c)
        {
            c=z[i];
        }
    }
    printf("%d est le plus petit nombre.\n", c);
 }

 void Grand(int c, int i, int z[3])
 {
    printf("Saisir 3 entiers :\n");
    scanf("%d", &z[0]);
    c=z[0];
    for (i=1; i<=2; i++)
    {
        scanf("%d", &z[i]);
        if (z[i]>c)
        {
            c=z[i];
        }
    }
    printf("%d est le plus grand nombre.\n", c);
 }

 void Puissance(int c, int d, int e, int i)
 {
    printf("Saisir deux entiers :\n");
    scanf("%d", &c);
    scanf("%d", &d);
    if (d==0)
    {
        printf("%d puissance %d = 1\n", c, d);
    }
    else
    {
        i=2;
        e=c;
        while (i<=d)
        {
            e=e*c;
        i++;
        }
        printf("%d puissance %d = %d\n", c, d, e);
    }
 }

#endif // LIBRAIRIE_PROJECT_CALCULATRICE_2_H_INCLUDED
