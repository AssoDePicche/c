#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

float sub(float x, float y) {
    return x - y;
}

int main() {
    int a, b;
    
	float c, d;
    
    scanf("%d %d", &a, &b);
    
    scanf("%f %f", &c, &d);
    
    printf("%d %d\n%.1f %.1f", sum(a, c), sum(b, d), sub(a, c), sub(b, d));
    
    return 0;
}
