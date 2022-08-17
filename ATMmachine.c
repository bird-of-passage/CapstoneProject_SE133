#include <stdio.h>

int main()
{
    char card;
    int n;
    int p;
    int a;
    int b;
    int diff;
    int i;
    char cad;

    printf("----------------------\n");
    printf("Welcome to the ATM\n");
    printf("----------------------\n");


    printf("Please Insert your card:\n\n");
    scanf("%c",&card);

    if (card=='a')
    {
        printf("Hello, Abul\n\n");

        printf(">Press 1 to withdrawal the money from your account\n\n");
        printf(">Press 2 to check the balance\n\n");

        b=50000;
        scanf("%d",&n);
        
        if(n==1)
        {
            printf("Please Enter your 4-digit pin: ");
            scanf("%d",&p);

            if (p==1234)
            {
                printf("Enter the ammount to be withdrawal: ");
                scanf("%d",&a);

                if (a>b)
                {
                    printf("insufficient");
                }
                else{
                    printf("Collect the money\n\n");

                    diff = b - a;

                    printf("Now, your bank balace is %d",diff);
                }
            }
            else
            {
                printf("incorrect pin\n\n");

                printf("please try again\n\n");

                scanf("%d",&p);

                if(p==1234)
                {
                    printf("Enter the ammount to be withdrawal: \n");
                    scanf("%d",&a);

                    if(a>b)
                    {
                        printf("insufficient");
                    }
                    else{
                        printf("Collect the money!\n\n");

                        diff = b - a;

                        printf("now, your balance is %d",diff);
                    }
                }
                else
                {
                    printf("your request has been blocked\n");
                    printf("please try again later");
                }
            }
            
        }
        else if(n==2)
        {
            printf("please enter your 4-digit pin: \n");
            scanf("%d", &p);

            if(p!=1234)
            {
                printf("please try again\n\n");

                scanf("%d",&p);

                if(p!=1234)
                {
                    printf("your request has been blocked\n");
                    printf("please try again later");
                }
                else
                {
                    printf("your bank balance is %d",b);
                }
                   
            }
            else
            {
                printf("your bank balance is %d",b);
            }
        }
    }
    else if(card == 'b')
    {
        printf("Hello, Babul\n\n");

        printf(">Press 1 to withdrawal the money from your account\n\n");
        printf(">Press 2 to check the balance\n\n");

        b = 100000;

        scanf("%d",&n);

        if(n==1)
        {
            printf("Please enter your 4-digit pin: ");
            scanf("%d",&p);

            if(p==5678)
            {
                printf("Enter the amount to be withdrawal: ");
                scanf("%d",&a);

                if(a>b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("collect the money\n\n");

                    diff = b - a;

                    printf("now, your bank balance is %d",diff);
                }
            }
            else
            {
                printf("incorrect pin\n\n");

                printf("please try again\n\n");

                scanf("%d",&p);

                if(p==5678)
                {
                    printf("Enter the amount to be withdrawal: ");
                    scanf("%d",&a);

                    if(a>b)
                    {
                        printf("insufficient");

                    }
                    else
                    {
                        printf("collect the money\n\n");

                        diff = b - a;

                        printf("now, your bank blance is %d",diff);
                    }
                }
                else
                {
                    printf("your request has been blocked\n");
                    printf("so please try again");
                }
            }

        }
        else if(n==2)
        {
            printf("Please enter your 4-digit pin: ");
            scanf("%d",&p);

            if(p!=5678)
            {
                printf("Please try again\n\n");
                scanf("%d",&p);

                if(p!=5678)
                {
                    printf("your request has been blocked\n");
                    printf("Please try again later.");
                }
                else
                {
                    printf("your bank balance is %d",b);
                }
            }
            else
            {
                printf("your bank balance is %d", b);
            }
        }
    }
    else if (card =='k')
    {
        printf("Hello, Kabul\n\n");
        printf(">Press 1 to withdrawal the money from your account\n\n");
        printf(">Press 2 to check the balance\n\n");

        b= 60000;

        scanf("%d",&n);

        if(n==1)
        {
            printf("Please enter your 4-digit pin: ");
            scanf("%d",&p);

            if(p==9123)
            {
                printf("Enter the amount to be withdrawal: ");
                scanf("%d",&a);

                if(a>b)
                {
                    printf("insufficient");
                }
                else
                {
                   printf("collect the money\n\n");

                   diff = b - a;

                   printf("now, your bank balance is %d", diff);

                }
            }
            else
            {
                printf("incorrect pin\n\n");

                printf("Please try again\n\n");
                scanf("%d",&p);

                if(p==9123)
                {
                    printf("Enter the amount to be withdrawal: ");
                    scanf("%d",&a);

                    if(a>b)
                    {
                        printf("insufficient");
                    }
                    else
                    {
                        printf("collect the money\n\n");

                        diff = b - a;
                        
                        printf("now, your bank balance is %d", diff);

                    }
                }
                else
                {
                    printf("your request has been blocked\n");
                    printf("Please try again later.");

                }
            }
        }
        else if (n==2)
        {
            printf("Please enter your 4-digit pin: ");
            scanf("%d",&p);

            if(p!=9123)
            {
                printf("Please try again\n\n");
                scanf("%d",&p);

                if(p!=9123)
                {
                    printf("your request has been blocked\n");
                    printf("Please try again later.");

                }
                else
                {
                    printf("your bank balance is %d",b);
                }
            }
            else
            {
                    printf("your bank balance is %d",b);
            }
        }
    }
    else if(card == 'd')
    {
        printf("Hello, Dabul\n\n");

        printf(">Press 1 to withdrawal the money from your account\n\n");
        printf(">Press 2 to check the balance\n\n");
        
        b = 40000;

        scanf("%d",&n);

        if(n==1)
        {
            printf("Please enter your 4-digit pin: ");
            scanf("%d", &p);

            if(p=8123)
            {
                printf("enter the amount to be withdrawl: ");
                scanf("%d",&a);

                if(a>b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("collect the money\n\n");

                    diff = b - a;

                    printf("now, your bank balance is %d",diff);
                }
            }
            else
            {
                printf("incorrect pin\n\n");

                printf("Please try again\n\n");

                scanf("%d", &p);


                if(p==8123)
                {
                    printf("Enter the amount to be withdrawal: ");
                    scanf("%d", &a);

                    if(a>b)
                    {
                        printf("insufficient");
                    }
                    else
                    {
                        printf("collect the money\n\n");

                        diff = b - a;

                        printf("now, your bank balance is %d",diff);
                    }
                }
                else
                {
                    printf("your request has been blocked\n");\
                    printf("Please try again later.");
                }

            }
        }
        else if (n==2)
        {
            printf("Please enter your 4-digit pin: ");
            scanf("%d",&p);

            if(p!=8123)
            {
                printf("Please try again\n\n");
                scanf("%d",&p);

                if(p!=81234)
                {
                    printf("your request has been blocked\n");
                    printf("Please try again later.");
                }
                else
                {
                    printf("your bank balance is %d",b);
                }
            }
            else
            {
                printf("your bank balance is %d",b);

            }
        }
        
    }    
 
    return 0;
}
