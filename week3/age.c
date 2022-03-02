#include <stdio.h>

int main(void)
{

    const int SEC_IN_MIN = 60;
    const int MIN_IN_HOUR = 60;
    const int HOUR_IN_DAY = 24;
    const int DAY_IN_YEAR = 365;
    const int SEC_IN_YEAR = 31536000;
    const int SEC_IN_DAY = 86400;
    const int SEC_IN_HOUR = 3600;
    int myYearsSeconds = 18 * SEC_IN_YEAR;
    int myDaysSecond = 314 * SEC_IN_DAY;
    int myHoursSecond = 9 * SEC_IN_HOUR;

    int myMinutsSecond = 53 * SEC_IN_MIN;
    int mySecond = 40;
    int myTotalSeconds = myYearsSeconds + myDaysSecond + myHoursSecond + myMinutsSecond + mySecond;
    printf("You are%d seconds old .\n", myTotalSeconds);
    return 0;
}
