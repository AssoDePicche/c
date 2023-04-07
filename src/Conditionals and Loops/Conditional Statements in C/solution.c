#include <stdio.h>

int main()
{
  const char *lookup_table[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  int number;

  scanf("%d", &number);

  if (number > 9)
  {
    printf("Greater than 9");
  }
  else
  {
    printf("%s", lookup_table[number - 1]);
  }

  return 0;
}
