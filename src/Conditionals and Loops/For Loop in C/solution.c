#include <stdio.h>
#include <stdbool.h>

bool is_even(const int number)
{
  return number % 2 == 0;
}

int main()
{
  char *lookup_table[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  int start, end;

  scanf("%d %d", &start, &end);

  for (int number = start; number <= end; number++)
  {
    if (number < 10)
    {
      printf("%s\n", lookup_table[number - 1]);

      continue;
    }

    printf(is_even(number) ? "even\n" : "odd\n");
  }

  return 0;
}
