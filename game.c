#include <stdio.h>
int main()
{
    int t,i=0,n;
    printf("Enter the number of tries (maximum tries= 10) ::");
    scanf("%d",&t);
    if (t<=10&&t>0)
    {
        while(i<t-1)
        {

            printf("\nGuess the number:");
            scanf("%d",&n);
            if(n==55)
            {
                printf("you got that!!Congratulations!");
                break;
            }
            else if(n>55&&n<65)
            {
                printf("You're real close!try a lower number");
            }
            else if(n<55&&n>45)
            {
                printf("You're real close!try a higher number");

            }
            else if(n>55)
            {
                printf("You're far off! Try a lower number");
            }
            else if(n<55)
            {
                printf("You're far off! Try a higher number");
            }
            else
            {
                printf("Invalid input encountered");
                break;
            }
            i++;
            n=0;

        }
        if(n!=55&&i<t)
        {

            printf("\nThis is your last try; Guess the number:");
            scanf("%d",&n);
            if(n==55)
            {
                printf("You got that and on the last try!! Incredible");
               
            }
            else if(n>55||n<55)
            {
                printf("You got that incorrect and you're out of tries");
            }
            else
            {
                printf("Invalid input encountered");
            }

        }
       

    }
    else if(t>10)
    {
        printf("Try again with fewer tries for an exciting game");
    }
    else
    {
        printf("Invalid input encountered!");
    }
    return 0;
}