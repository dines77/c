#include <stdio.h>
#includ<conio.h>
int main()
{
int a=3
 printf("entered nmber");
 scanf("%lf", &a);
 if (a < 0.0)
  printf("You entered a negative number.");
else if ( a > 0.0)
printf("You entered a positive number.");
  else
 printf("You entered 0.");
 return 0;
}
