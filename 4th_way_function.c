
#include<stdio.h>
int profit(int , int );
int lose(int , int);


int main()
{
    while (1)
    {
        
    
    
    int mainprice ,selingprice , choice;

    printf("\n..............manu..............\n");

    printf("\nenter the mainprice : >> ");
    scanf("%d",&mainprice);

    printf("\nenter the selingprice price : >> ");
    scanf("%d",&selingprice);

    printf("\n1. profit");
    printf("\n2. lose");
    

    printf("\nenter your  choice ");
    scanf("%d",&choice);


    switch (choice)
    {
    case 1:
        if (mainprice < selingprice)
        {
            // profit(mainprice ,selingprice);
            printf("the profit is : >> %d",profit(mainprice,selingprice));
            // printf("%d",price);
            
        }
        else if (mainprice == selingprice)
        {
            printf("\nequal margin");
        }

        else
        {
            printf("\nyou are not countin profit");

        }
        break;
    case 2:
    if (mainprice > selingprice)
        {
            // lose(mainprice, selingprice);
            printf("the lose is : >> %d ",lose(mainprice,selingprice));
        }
        else if (mainprice == selingprice)
        {
            printf("\nequal margin");
        }

        else
        {
            printf("\nyou are not countin lose");

        }
        break;
        
    
    default: printf("\nworng choice...");
    return 0;
        break;
    }

}


}

int profit(int mainprice , int selingprice)
{
    // int price = selingprice - mainprice ;

    return selingprice - mainprice;
}

int lose(int mainprice , int selingprice)
{
    // int price = mainprice - selingprice;
    


    return mainprice - selingprice;

}