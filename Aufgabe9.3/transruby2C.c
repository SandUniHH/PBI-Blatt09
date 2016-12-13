// Bocher, Diedrich, Sandmeier

#include <stdio.h>
#include <math.h> // for sqrt()
#include <string.h> // for strlen()

int main()
{
  int a = 64 / 3;
  int b = 219/a;
  int c = 313/(a+b);
  int arr[3] = {a,b,c};
  int v = arr[2];

  float f;

  if(v > 5 || arr[0] < 16)
  {
    f = 0.1;
  }
  else
  {
    f = 1.4;
  }

  if(f == 1.4 || arr[0] > 5)
  {
    b = 25;
  }
  else
  {
    a = 27;
  }

  printf("a=%i,b=%i,c=%i\n", a, b ,c);

  while(a < b && c > 7)
  {
    a++;
    b--;
    c--;
  }

  printf("a=%i,b=%i,c=%i\n", a, b ,c);

  float sum = 0.0;

  int i;
  
  for(i = 0; i <= 5; i++)
  {
    sum += sqrt((double) i);
  }

  printf("%.4f\n",sum);

  char letters[] = "abcdef";

  for(i = 0; i < strlen(letters); i++)
  {
    printf("%c\t%c\n", letters[i], toupper(letters[i]));
  }
  
  return 0;
}