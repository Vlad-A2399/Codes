/*vlad
b00103207*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float betcalc (float);
int main()
{
    int a ,i,colour;
    float bet;

    printf("Choose a number for you colour:\n 1.Red\n 2.Black\n");
    scanf("%d",&colour);

    printf("Place your bet in euro please:");
    scanf("%f",&bet);

      if(colour == 1)
    {
        printf("You have chose the red colour and your bet is: %f\n",bet);
    }
    else if (colour == 2)
    {
        printf("You have chose the black colour and your bet is:%f\n",bet);
    }
    else
    {
        printf("Error check you colour\n");
    }


    srand(time(NULL));

    a = rand()%37;

    printf(" The wheel rolls  %d\n",a);

    if(a%2 == 0 && colour == 1)
    {
        printf("Congratulation you have won %f",betcalc(bet));
    }
    else if(a%2 == 0 && colour == 2)
    {
        printf("You have lost your bet sorry try again later:");
    }
    else if(!(a%2 == 0) && colour == 1)
    {
        printf("You have lost your bet please try again later:");
    }
    else if(!(a%2 == 0) && colour == 2)
    {
        printf("Congratulation you have won %f",betcalc(bet));
    }
}
float betcalc (float w)
{
    float x = 0.47, y, z;

   z = w * x;

   y =z + w;

    return(y);

}
