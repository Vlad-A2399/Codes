/*
name:vlad anton
id:b00103207
date:19/3/18
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double grav=9.81;
int main()
{
    double height,time[3],sum;
    int i;
    for(i=0;i<3;i++)
    {
    printf("Please enter result %d for time in second: ",i+1);
    scanf("%lf",&time[i]);
    }
    for(i=0;i<3;i++)
    {
        height=1.0/2*(grav*pow(time[i],2));
        printf("The height of the builting from result %d is %.2lf meters\n",i+1,height);
        sum=sum+height;
    }
    printf("The mean of the three results for height is: %.2lf meters",sum/3);
    return 0;
}
