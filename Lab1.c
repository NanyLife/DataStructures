#include <stdio.h>

int main() {

    printf("Колтаков Дмитрий. 090304-РПИб-о25\n");


    // get n
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    // if n%i==0  then d is smallest divisor... else d=n
    int d = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            d = i;
            break;
        }
    }

    int a = n / d;
    int b = n - a;


    printf("%d %d\n", a, b);

    return 0;
}