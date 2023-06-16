#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int main(void)
{
  const char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

  char string[MAX_LEN];

  scanf("%[^\n]%*c", string);

  for (int digit = 0; digit < 10; ++digit)
  {
    int frequency = 0;

    for (int character = 0; character < strlen(string); ++character)
    {
      if (string[character] == digits[digit])
      {
        ++frequency;
      }
    }

    printf("%d ", frequency);
  }

  return 0;
}
