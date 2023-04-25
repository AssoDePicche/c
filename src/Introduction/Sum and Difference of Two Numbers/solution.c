#include <stdio.h>

int main()
{
  int a, b;

  float c, d;

  scanf("%d %d", &a, &b);

  scanf("%f %f", &c, &d);

  printf("%d %d\n%.1f %.1f", (a + c), (b + d), (a - c), (b - d));

  return 0;
}
