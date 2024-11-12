#include <stdio.h>

int perfect_checker(int a) {
    int div_sum = 0;
    for (int i = a-1; i != 0; i--)
    {
        if (a % i == 0) div_sum += i;
    }
    if (div_sum == a) return 1;
    else return 0;
}

int main() {
    int num;
    printf("Type a number: \n");
    scanf("%d", &num);
    printf("\n");
    if (perfect_checker(num) == 1) printf("The number %d is perfect\n", num);
    else printf("The number %d is NOT perfect\n", num);
    return 0;   
}