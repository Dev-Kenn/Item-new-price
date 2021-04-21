#include<stdio.h>

int main()
{
    float oprice, nprice;
    int icode;

    printf ("ENTER THE ITEM CODE: ");
    scanf ("%i", &icode);

switch (icode)
    {
    case 1:
        printf ("Old Price: ");
        scanf ("%f", &oprice);
        	nprice = oprice + (oprice * .10);
        printf ("ITEM: Women's wear'");
        printf ("\nNew PriceE: %.2f", nprice);
        break;

    case 2:
        printf ("Old Price: ");
        scanf ("%f", &oprice);
            nprice = oprice + (oprice * .20);
        printf ("ITEM: Men's Wear");
        printf ("\nNew Price: %.2f", nprice);
        break;

    case 3:
        printf ("Old Price: ");
        scanf ("%f", &oprice);
            nprice = oprice - (oprice * .10);
        printf ("ITEM: Children's wear");
        printf ("\nNNew Price: %.2f", nprice);
        break;   

    default:
        printf ("INPUT ERROR");
        break;
    }

    return (0);
}
