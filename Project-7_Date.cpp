#include <iostream>
#include "clsDate.h"
#include "clsPeriod.h"

using namespace std;

int main()
{
    clsDate Date1;
    Date1.Print(); // today's system date

    clsDate Date2("31/1/2022");
    Date2.Print();

    clsDate Date3(20, 12, 2022);
    Date3.Print();

    clsDate Date4(250, 2022); // 250th day of the year
    Date4.Print();

    Date1.IncreaseDateByOneMonth();
    Date1.Print();

    Date3.PrintYearCalendar();

    cout << "\nIs Date Valid: " << Date2.IsValid();

    cout << "\nMy Age in Days: "
         << clsDate::CalculateMyAgeInDays(clsDate(6, 11, 1977));

    clsPeriod Period1(clsDate(1,1,2022), clsDate(10,1,2022));
    clsPeriod Period2(clsDate(3,1,2022), clsDate(5,1,2022));

    cout << "\nOverlap: "
         << Period1.IsOverLapWith(Period2);

    return 0;
}
