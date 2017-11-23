#include<stdio.h>
#include<math.h>
int main()
{
  printf("Enter the date in format 'dd mm yyyy'\n");
  int d, m, y;
  scanf("%d%d%d", &d, &m, &y);
  m-=2;
  if (m < 1)
  {
    m = 12 + m;
    y--;
  }
  int c = y % 100;
  y = (y - c) / 100;
  int a = (13*m - 1) / 5; 
  int b = 5*c / 4; 
  int l = -7*y / 4 -1; 
  int W = (d + a + b + l) % 7;
  switch(W)
  {
  	case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;    
  }
  return 0;
}
