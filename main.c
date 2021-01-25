#include <stdio.h>
int main()
{
    int year;
    //Get input from the user
    printf("Enter year: ");
    scanf("%d",&year);
    //If year is divisible by 4 and not divisible 100 it is leap year.
    if(year % 4 == 0)
    {   //if it is divisible by 100 then it must be divisible by 400 (according to gregorian calender)
        if( year % 100 == 0)
        {
            if ( year % 400 == 0)
                printf("%d is a Leap Year", year);
            else
                printf("%d is not a Leap Year", year);
        }
        else
            printf("%d is a Leap Year", year );
    }
    //if not divisible by 4 then it is not a leap year
    else
        printf("%d is not a Leap Year", year); //print
    return 0;
}
