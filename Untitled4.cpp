#include <stdio.h>
void printMinMaxDigits(int a)
{  int digit; /* Variable for extracting 1 digit */
   int min=9, max=0; /* Result variables */
   while (a>0) 
   { digit = a%10; /* Get the next digit */
     if (digit>max) {max=digit;} /* update results */
     if (digit<min) {min=digit;}
   a=a/10;
}
   printf("\nMin: %d", min);
   printf("\nMax: %d", max);
}
int main()
{    int n;
    do
    {    printf("\nEnter n: ");
        scanf("%d", &n);
        printMinMaxDigits(n);
    }
    while (n<0);
    return 0;
}
