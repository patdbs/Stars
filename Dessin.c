#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100
int main(const int argc, const char **argv) {
        int n,choix,i,j,k;
        do{
                printf("Renter la taille, celle-ci doit être supérieur ou égale à 1 et inférieure ou égale à 20 !\n");
                scanf("%d", &n);
        }while(n<1 || n>20);
        printf("MENU :\n");
        printf("1.\n");
        printf("2.\n");
        printf("3.\n");
        printf("4.\n");
        printf("5.\n");
        printf("Votre choix \n");
        scanf("%d",&choix);
        switch(choix)
        {
                case 1:
                    for(i=1;i<=n;i++)
                    {
                       for(j=1;j<=n;j++)
                       {
                          printf("*");
                       }
                       printf("\n");
                    }
                    break;
                case 2:
                    for(i=1;i<=n;i++)
                    {
                        for(j=1;j<=i;j++)
                        {
                                printf("*");
                        }
                        printf("\n");
                    }
		    for(i=1;i<=n-1;i++)
                    {
                        for(j=1;j<=n-i;j++)
                        {
                                printf("*");
                        }
                        printf("\n");
                    }
		    break;
		case 3:
                    for(i=1;i<=n;i++)
                    {
                        for(j=1;j<=n-i;j++)
                        {
                                printf(" ");
                        }
			for(k=n;k>n-i;k--)
			{
                        	printf("*");
			}
			printf("\n");
                    }
                    for(i=1;i<=n;i++)
                    {
                        for(j=n;j>n-i;j--)
                        {
                                printf(" ");
                        }
			for(k=1;k<=n-i;k++)
			{
                        	printf("*");
			}
			printf("\n");
                    }
		    break;
		 case 4:
		 	for(i=1;i<=n;i++)
			{
				for(j=1;j<=n-i;j++)
				{
					printf(" ");
				}
				for(k=n*2;k>(n*2)-(i*2)+1;k--)
				{
					printf("*");
				}
				for(j=1;j<=n-i;j++)
				{
					printf(" ");
				}
				printf("\n");
			}
		    break;
		 case 5:
		 	for(i=1;i<=n;i++)
			{
				for(j=1;j<=n-i;j++)
				{
					printf(" ");
				}
				for(k=n*2;k>(n*2)-(i*2)+1;k--)
				{
					printf("*");
				}
				for(j=1;j<=n-i;j++)
				{
					printf(" ");
				}
				printf("\n");
			}
			i = 2;
			while(i<=n)
			{
				for(j=n;j>n-i+1;j--)
				{
					printf(" ");
				}
				for(k=1;k<=(n*2)-(i*2)+1;k++)
				{
					printf("*");
				}
				for(j=n;j>n-i;j--)
				{
					printf(" ");
				}
				printf("\n");
				i++;
			}
		    break;
                default:
                    printf("Choix incoonu !\n");

        }
        return EXIT_SUCCESS;
}


