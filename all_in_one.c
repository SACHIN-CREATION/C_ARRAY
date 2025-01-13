#include <stdio.h>

void diamond(int, int, int, int);
void square(int, int, int, int);
void righttriangle(int, int, int, int);
void peramit(int, int, int, int);
void Table(int, int, int);
void abcd(int);
void righttriangle101(int , int , int);
void leap(int);

int main()
{
    int i, j, n, k, choice;
    int a, b; // for use table function
    n = 9;

    while (1)
    {
        printf("\n..................Welcome..................");
        printf("\n              . M  E  N  U .");
        printf("\n1. diamond");
        printf("\n2. square");
        printf("\n3. right triangle");
        printf("\n4. pelidrom");
        printf("\n5. tables");
        printf("\n6. A to Z ");
        printf("\n7. right triangle pattern of 1 and 0 ");
        printf("\n8. check leap year ");
        printf("\n");
        printf("\n");
        
        printf("\nenter your choice: >> ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            diamond(n, i, j, k);
            break;

        case 2:
            square(n, i, j, k);
            break;

        case 3:
            righttriangle(n, i, j, k);
            break;

        case 4:
            peramit(n, i, j, k);
            break;

        case 5:
            Table(i, a, j);
            break;
        case 6:
            abcd(i);
            break;
        case 7:
            righttriangle101(n, i, j);
            break;
        case 8:
            leap(a);
            break;
        default:
            printf("\nwrong choice....\n");
            return 0;
        }
    }
}

void diamond(int n, int i, int j, int k)
{
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 0; i--)
    {
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void square(int n, int i, int j, int k)
{
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j==1||j==n||i==1||i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void righttriangle(int n, int i, int j, int k)
{
    
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void peramit(int n, int i, int j, int k)
{
    
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Table(int a, int i, int j)
{
    int option;

    printf("\noption 1: Tables 1 to 10");
    printf("\noption 2: Enter your own table");
    printf("\nenter your choice: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        for (i = 1; i <= 10; i++)
        {
            for (j = 1; j <= 10; j++)
            {
                printf(" %d x %d = %d ", j, i, j * i);
            }
            printf("\n");
        }
        break;

    case 2:
        printf("\nwhich table do you want to print: >> ");
        scanf("%d", &a);
        for (i = 1; i <= 10; i++)
        {
            printf("\n%d x %d = %d", a, i, a * i);
        }
        printf("\n");
        break;

    default:
        printf("\nwrong option. going to menu...\n");
        break;
    }
}

void abcd(int i)
{ // print A to Z

    for (i = 'A'; i <= 'Z'; i++)
    {
        printf("%c ", i);
    }
    printf("\n");
    printf("\n");

}


void righttriangle101( int n, int i, int j)
{
    // int q = 9;
    for ( i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j % 2);
        }
        printf("\n");
        /* code */
    }
}

void leap(int a)
{
    printf("enter the year you want to check is leap or not ");
    scanf("%d",&a);
    if (a % 400 == 0)
    {
        printf("%d is leap year ",a);
    }

    else if(a % 100 == 0)
    {
        printf("%d is not leap year ",a);
    }
    else if (a % 4 == 0)
    {
        printf("%d is leap year ",a);
    }
    else
    {
        printf("%d is not leap year ",a);
    }
}
