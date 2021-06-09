// C++ program to check if
// given date is valid or not.
#include<iostream>
using namespace std;
 
const int MAX_VALID_YR = 9999;
const int MIN_VALID_YR = 1800;
 
// Returns true if
// given year is valid.
bool isLeap(int year)
{
// Return true if year
// is a multiple pf 4 and
// not multiple of 100.
// OR year is multiple of 400.
return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}
 
// Returns true if given
// year is valid or not.
int isValidDate(int d, int m, int y)
{
	int flag =1;
    // If year, month and day
    // are not in given range
    if (y > MAX_VALID_YR ||
        y < MIN_VALID_YR)
    flag =0;
    if (m < 1 || m > 12)
    flag =0;
    if (d < 1 || d > 31)
    flag =0;
 
    // Handle February month
    // with leap year
    if (m == 2)
    {
        if (isLeap(y))
        return (d <= 29 && flag==1);
        else
        return (d <= 28 && flag==1);
    }
 
    // Months of April, June,
    // Sept and Nov must have
    // number of days less than
    // or equal to 30.
    if (m == 4 || m == 6 ||
        m == 9 || m == 11)
        return (d <= 30 && flag==1);
 
    flag =1;
    
    
    return flag;
}
 
// Driver code
int main(void)
{
	int d,m,y;
	cout << "Enter day/month/year : ";
	scanf("%d%d%d",&d,&m,&y);
	int c=isValidDate(d,m,y);
	if(c==1) printf("Yes");
	else printf("No");
 	getchar();
 	return 0;

}

