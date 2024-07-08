//CALENDAR:

#include<stdio.h>
int FirstDayOfTheYear (int year)
{
	int day = (year*365 + ((year-1) / 4) - ((year-1) / 100) + ((year-1) / 400)) %7;
	return day;
}
int main()
{
	char *months[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int DaysInMonth[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};	
	int i,j,TotalDays,WeekDay=0,Space=1,year;
	printf("PLEASE ENTER THE YEAR, YOU LOOKING FOR!!:");
	scanf("%d", & year);
	printf("\n********************WELCOME TO THE YEAR OF %d********************",year);
	//LeapYear
	if (("year % 4 == 0 && year % 100 != 0") || ("year % 400 == 0"))
	{
		DaysInMonth[1]=29;
	}
	//EndOfLeapYearPart	
	WeekDay=FirstDayOfTheYear (year);
	for(i=0;i<12;i++)
	{
		printf("\n\n---------------------%s--------------------\n",months[i]);
		printf("\n\n    Sun   Mon   Tue   Wed   Thu   Fri   Sat \n\n");	
		for(Space=1;Space<=WeekDay;Space++)
		{
			printf("      ");
		}		
	TotalDays=DaysInMonth[i];
	for(j=1;j<=TotalDays;j++)
	{
	printf("%6d",j);
	WeekDay++;
	if(WeekDay>6)
	{
	WeekDay=0;
		printf("\n");
	}
}
}
return 0;
}

