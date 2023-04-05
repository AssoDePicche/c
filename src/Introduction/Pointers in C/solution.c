#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int a_temp = *a;
    
    *a = a_temp + *b;
    
    *b = abs(a_temp - *b);
}

int main() {
    int a, b;
    
    int *a_pointer = &a, *b_pointer = &b;
    
    scanf("%d %d", &a, &b);
  
    update(a_pointer, b_pointer);
  
    printf("%d\n%d", a, b);

    return 0;
}
