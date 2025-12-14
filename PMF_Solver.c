#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    
    printf("-------------------  PROBABILITY MASS FUNCTION (PMF) SOLVER USING C  --------------------");
    printf("\n\n   FIND THE VALUE OF k SUCH THAT THE FOLLOWING DISTRIBUTION\n   REPRESENTS A DISCRETE PROBABILITY DISTRIBUTION AND HENCE\n   FIND MEAN, STANDARD DEVIATION AND THE FOLLOWING PROBABILITIES:");

    printf("\n\n ENTER THE NUMBER OF VALUES OF X : ");
    scanf("%d",&n);
    int var[n];
    printf("\n\n ENTER THE VALUES OF RANDOM VARIABLE X :- \n");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&var[i]);
    }
    printf("\n\n ENTER THE CORRESPONDING COEFFICIENTS OF K FOR EACH VALUE OF X :- \n");
    int prob[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&prob[i]);
    }

    printf("\n\n---------------------------------------------------------------------------------------");
    printf("\n                         DISCRETE PROBABILITY DISTRIBUTION                               ");
    printf("\n  ---------------------------------------------------------------------------------------\n");
   
     printf("  X   |   P(X)\n");
     
     for(i = 0; i < n; i++)
     {
          if(prob[i] == 1)
             printf("%6d |   k\n", var[i]);
          else
             printf("%6d |  %dk\n", var[i], prob[i]);
     }
   
    printf("\n  ---------------------------------------------------------------------------------------");
    
    int  sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+prob[i];
    }

    double k ;
    k=1.0/sum;
    printf("\n\n VALUE OF K : %.4lf", k);

    double mean=0;
    for(i=0;i<n;i++)
    {
        mean=mean+var[i]*prob[i]*k;
    }
    printf("\n\n MEAN  :  %.4lf", mean);

    double x_val=0 ;
    for(i=0;i<n;i++)
    {
        x_val=x_val+var[i]*var[i]*prob[i]*k;
    }

    double variance = x_val - mean*mean;
    printf("\n\n VARIANCE :  %.4lf", variance);

    double sd;
    sd = sqrt(variance);
    printf("\n\n STANDARD DEVIATION :  %.4lf", sd);


    printf("\n\n---------------------------------------------------------------------------------------");
    printf("\n                         DISCRETE PROBABILITY DISTRIBUTION                               ");
    printf("\n  ---------------------------------------------------------------------------------------\n");
    printf("\n\n---------------------------------------------------------------------------------------\n");
    printf("   X   |   P(X)\n");
    printf("-------+-----------\n");
    for(i = 0; i < n; i++)
    {
        double px = prob[i] * k;
        printf("%6d |   %.4lf\n", var[i], px);
    }
    printf("---------------------------------------------------------------------------------------\n");
  
  
    int running = 1;
    while(running)
    {
        printf("\n\n SELECT THE PROBABILITY YOU WANT TO CALCULATE :- \n");
        printf("1. P(X <= a)\n");
        printf("2. P(X >= b)\n");
        printf("3. P(X < a)\n");
        printf("4. P(X > b)\n");
        printf("5. P(c <= X <= d)\n");
        printf("6. P(c < X < d)\n");
        printf("7. P(a < X <= b)\n");
        printf("8. P(a <= X < b)\n");
        printf("9. EXIT\n");

        int choice;
        printf("\n ENTER YOUR CHOICE : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                int a;
                printf("\nENTER THE VALUE OF A : ");
                scanf("%d", &a);

                double probResult = 0;
                for(i = 0; i < n; i++)
                {
                    if(var[i] <= a)
                        probResult += prob[i] * k;
                }
                printf("\nP(X <= %d) = %.4lf\n", a, probResult);
                break;
            }

            case 2: 
            {
                int b;
                printf("\nENTER THE VALUE OF B : ");
                scanf("%d", &b);

                double probResult = 0;
                for(i = 0; i < n; i++)
                {
                    if(var[i] >= b)  
                        probResult += prob[i] * k;
                }
                printf("\nP(X >= %d) = %.4lf\n", b, probResult);
                break;
            }

            case 3: 
            {
                int a;
                printf("\nENTER THE VALUE OF A : ");
                scanf("%d", &a);

                double probResult = 0;
                for(i = 0; i < n; i++)
                {
                    if(var[i] < a)  
                        probResult += prob[i] * k;
                }
                printf("\nP(X < %d) = %.4lf\n", a, probResult);
                break;
            }

            case 4: 
            {
                int b;
                printf("\nENTER THE VALUE OF B : ");
                scanf("%d", &b);

                double probResult = 0;
                for(i = 0; i < n; i++)
                {
                    if(var[i] > b)  
                        probResult += prob[i] * k;
                }
                printf("\nP(X > %d) = %.4lf\n", b, probResult);
                break;
            }

            case 5: 
            {
                int c, d;
                printf("\nENTER THE VALUE OF C AND D : \n");
                scanf("%d %d", &c, &d);
                if(c > d){ printf("Invalid range!\n"); break; }

                double probResult = 0;
                for(i = 0; i < n; i++)
                {
                    if(var[i] >= c && var[i] <= d)  
                        probResult += prob[i] * k;
                }
                printf("\nP(%d <= X <= %d) = %.4lf\n", c, d, probResult);
                break;
            }

            case 6: 
            {
                int c, d;
                printf("\nENTER THE VALUE OF C AND D :\n");
                scanf("%d %d", &c, &d);
                if(c > d){ printf("Invalid range!\n"); break; }

                double probResult = 0;
                for(i = 0; i < n; i++)
                {
                    if(var[i] > c && var[i] < d)  
                        probResult += prob[i] * k;
                }
                printf("\nP(%d < X < %d) = %.4lf\n", c, d, probResult);
                break;
            }

            case 7:
            {
                int a, b;
                printf("\nENTER THE VALUE OF A AND B :\n");
                scanf("%d %d", &a, &b);
                if(a > b){ printf("Invalid range!\n"); break; }

                double probResult = 0;
                for(i = 0; i < n; i++)
                {
                    if(var[i] > a && var[i] <= b)  
                        probResult += prob[i] * k;
                }
                printf("\nP(%d < X <= %d) = %.4lf\n", a, b, probResult);
                break;
            }

            case 8:
            {
                int a, b;
                printf("\nENTER THE VALUE OF A AND B : \n");
                scanf("%d %d", &a, &b);
                if(a > b){ printf("Invalid range!\n"); break; }

                double probResult = 0;
                for(i = 0; i < n; i++)
                {
                    if(var[i] >= a && var[i] < b)  
                        probResult += prob[i] * k;
                }
                printf("\nP(%d <= X < %d) = %.4lf\n", a, b, probResult);
                break;
            }

            case 9:
            {
                printf("\n\n EXITING ...\n");
                exit(0);
            }

            default:
                printf("\n\n INVALID CHOICE !! TRY AGAIN . . . .\n");
                break;
        }

    }

}
