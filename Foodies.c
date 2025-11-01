#include<stdio.h>
int main()
{
    printf("-------> WELCOME TO FOODIES <-------\n\n\n");
    printf("SPECIAL OFFER: If any costumer have our special promo code so they will get 20 percentage extra discount\n\n");
    int choice,promo,n,burger=0,pizza=0,pasta=0,sandwich=0,frenchfries=0;
    float GST,gst,total,total1,total2,total3,total4,total5;
    a:

    {printf(" -----> MENU CARD <-----\n");
    printf(" 1.Burger       - 150Rs.\n 2.Pizza        - 200Rs.\n 3.Pasta        - 120Rs.\n 4.Sandwich     - 100Rs.\n 5.French Fries -  80Rs.\n\n\n");
    printf ("If You Want to Exit Enter 0\n\n");
    printf("\nEnter your choice (e.g. Enter 1 for order Burger):");
    scanf("%d",&choice);

    switch(choice)

    {
    case 1: printf("Enter how many Burger you want:"); scanf("%d",&burger);  printf("If you want to something else from below?\n");  total1=burger*150.0; goto a;break;

    case 2: printf("Enter how many Pizza you want:"); scanf("%d",&pizza);  printf("If you want to something else from below?\n");  total2=pizza*200.0;goto a;break;

    case 3: printf("Enter how many Pasta you want:"); scanf("%d",&pasta);  printf("If you want to something else from below?\n"); total3=pasta*120.0;goto a;break;

    case 4: printf("Enter how many Sandwich you want:"); scanf("%d",&sandwich); printf("If you want to something else from below?\n");  total4=sandwich*100.0;goto a;break;

    case 5: printf("Enter how many French Fries you want:"); scanf("%d",&frenchfries); printf("If you want to something else from below?\n"); total5=frenchfries*80.0;goto a;break;

    case 0: break;
    }
    }

    printf("Your Total Bill is:%f\n",total=total1+total2+total3+total4+total5);

    printf("Your Bill with GST :%f\n", GST=total+(0.05*total));

    if(GST>=1000)
    {
        printf("You have got 5 percentage discount!\n");
        printf("Your Payable Final Bill is:%f\n\n", GST=GST-(0.05*GST));
    }
    else
    {
        printf("You are not eligible for our extra discount\n\n");
    }

    printf("If you have any promo code of our restaurant so enter 0: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Enter a promo code:");
        scanf("%d",&promo);

        if(promo==137)
        {
            printf("You have got 20 percentage extra discount!!!\n");
            printf("Your final payable bill is:%f\n", GST=GST-(0.2*GST));
        }
        else {printf("Oops!! You have entered wrong promo code");}

    }

    printf("--------------->  BILL SUMMARY <---------------\n\n");
    printf("Item              Qty\t\t Price\t Total\n");
    printf("-----------------------------------------------\n");
    printf("Burger             %d\t\t  150\t  %.2f\n",burger,total1);
    printf("Pizza              %d\t\t  200\t  %.2f\n",pizza,total2);
    printf("Pasta              %d\t\t  120\t  %.2f\n",pasta,total3);
    printf("Sandwich           %d\t\t  100\t  %.2f\n",sandwich,total4);
    printf("French Fries       %d\t\t   80\t  %.2f\n",frenchfries,total5);
    printf("-----------------------------------------------\n");
    printf("SUB TOTAL                              %.2f\n",total1+total2+total3+total4+total5);
    printf("GST(5%%)                                 %.2f\n",gst=0.05*(total1+total2+total3+total4+total5));
    printf("Extra discount(if applied)             %.2f\n",0.2*(total1+total2+total3+total4+total5+gst));
    printf("-----------------------------------------------\n");
    printf("Total with GST                         %.2f\n\n\n\n",GST);
    printf("------> THANKS FOR RECH US <------");
}
