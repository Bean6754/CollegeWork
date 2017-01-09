#include <stdio.h>
#include <stdlib.h>

int main() {
    int lux;
    int footcandle;
    int x = 0.0929;
    int y = 10.764;
    
    printf("Enter lux value: ");
    scanf("%d", &lux);
    printf("Footcandle = %d\n", lux/10.764);
    
    printf("Enter footcandle value: ");
    scanf("%e", &footcandle);
    printf("Lux = %e\n", footcandle/0.0929);
    
    return 0;
}

