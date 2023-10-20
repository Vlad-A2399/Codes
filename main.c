
//B00103207   VLAD ANTON   LAB 6 PART 1

#include <stdio.h>
#include <stdlib.h>


struct time
{
    int hours;
    int minutes;
    int seconds;
}
;
struct time split_time(long total_seconds);


int main()
{

long seconds;
struct time time_data;

printf("enter value for seconds:\n");                // enter the value for seconds
scanf("%ld",&seconds);

time_data = split_time(seconds);

printf("hrs: mins: secs: \n %d:%d:%d",time_data.hours,time_data.minutes,time_data.seconds);      // depending on the number it will place it in the correct category


    return 0;
}


struct time split_time(long total_seconds)
{
    struct time t;

    t.hours = total_seconds / 3600;                // the number will be sent back to t
    total_seconds %= 3600;
    t.minutes = total_seconds / 60;
    t.seconds = total_seconds %60;

    return t;

}
