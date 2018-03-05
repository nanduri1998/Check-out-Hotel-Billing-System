#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
    int i = 2;
    while(i>1){
    char name[20];
    float total, tip;
    int starter, starterprice, starterconfirm, main, nan, mainconfirm, mainprice, nanprice;
    printf("Welcome to Royal Hotel Checkout service\n");
    printf("Please enter your Name\n");
    scanf("%s",name);
    printf("Hi %s! What would you like to order\n",name);
    printf("\t\t        MENU\t\t\n");
    printf("Sl No\t\t      Item Name\t\t\tPrice\n");
    printf("---------------------------------------------------------");
    printf("\n");
    printf("\t\t      STARTERS\t\t\n");
    printf("\n");
    printf("1\t\t   Gobi Manchuria\t\t120.00\n");
    printf("2\t\t   Alu Manchuria\t\t125.00\n");
    printf("3\t\t   Wet Manchuria\t\t120.00\n");
    printf("4\t\t   Mixed Manchuria\t\t100.00\n");
    printf("5\t\t   Soup Manchuria\t\t125.00\n");
    printf("Enter 0 if you don't want any starter\n");
    starter:printf("Enter your choice ");
    scanf("%d",&starter);
    printf("You have ordered\n");
    switch(starter)
        {
        case 1:
            printf("Gobi Manchuria\n");
            starterprice=120;
            break;
        case 2:
            printf("Alu Manchuria\n");
            starterprice=125;
            break;
        case 3:
            printf("Wet Manchuria\n");
            starterprice=120;
            break;
        case 4:
            printf("Mixed Manchuria\n");
            starterprice=100;
            break;
        case 5:
            printf("Soup Manchuria\n");
            starterprice=125;
            break;
        case 0:
            printf("No starter added\n");
            starterprice=0;
            break;
        }
        printf("Would you like to continue?\nEnter 1 for Yes and 0 for No\n");
        scanf("%d",&starterconfirm);
        if (starterconfirm==0)
        {
            goto starter;
        }
    printf("---------------------------------------------------------");
    printf("\n");
    printf("\t\t     MAIN COURSE\t\t\n");
    printf("\n");
    printf("1\t\t   Paneer Butter Masala\t\t160.00\n");
    printf("2\t\t   Malai Kofta\t\t\t180.00\n");
    printf("3\t\t   Mix Veg Curry\t\t130.00\n");
    printf("4\t\t   Palak Paneer\t\t        150.00\n");
    printf("5\t\t   Navaratan Kurma\t\t145.00\n");
    printf("Enter 0 if you don't want any item\n");
    main:printf("Enter your choice ");
    scanf("%d",&main);
    printf("Enter number of Butter Nan ");
    scanf("%d",&nan);
    printf("You have ordered\n");
    switch(main)
        {
        case 1:
            printf("Paneer Butter Masala\n");
            mainprice=160;
            nanprice=nan*10;
            break;
        case 2:
            printf("Malai Kofta\n");
            starterprice=180;
            nanprice=nan*10;
            break;
        case 3:
            printf("Mix Veg Curry\n");
            starterprice=130;
            nanprice=nan*10;
            break;
        case 4:
            printf("Palak Paneer\n");
            starterprice=150;
            nanprice=nan*10;
            break;
        case 5:
            printf("Navaratan Kurma\n");
            starterprice=145;
            nanprice=nan*10;
            break;
        case 0:
            printf("No item added\n");
            starterprice=0;
            nanprice=nan*10;
            break;
        }
        printf("Would you like to continue?\nEnter 1 for Yes and 0 for No\n");
        scanf("%d",&mainconfirm);
        if (mainconfirm==0)
        {
            goto main;
        }
    printf("Tip: ");
    scanf("%f",&tip);
    printf("\n");
    printf("Your Total bill inclusive of taxes is ");
    total=(starterprice+mainprice+nanprice)+((starterprice+mainprice+nanprice)*5/100)+tip;
    printf("%f\n",total);
    printf("Tax breakdown\n");
    printf("GST = 5%%\n");
    printf("You may collect your order in the next window.\nThank you for visiting us\nWe look forward to serve you next time\nSoftware developed by Srivastav Solutions Inc\n");
    FILE *fptr;
    fptr=fopen("hotelbill.html","a");
    if (fptr==NULL)
    {
        printf("Error!");
        exit(1);
    }
    else
    {
        fprintf(fptr,"<html> <body bgcolor=white>");
        fprintf(fptr,"<br>Customer=%s | Total=%f | Starter=%d | Main=%d | Nan=%d</br>",name,total,starter,main,nan);
        fprintf(fptr," </body> </html>");
        fclose(fptr);

    }
    Sleep(10000);
    system("cls");
}

}
