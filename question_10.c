#include <stdio.h>
int fun(int *k) {
*k += 4;
return 3 * (*k) - 1;
}
int main() {
int i = 10, j = 10, sum1, sum2;
sum1 = (i / j) + fun(&j);
sum2 = fun(&i) + (i / j);
printf("sum1 = %d\n", sum1);
printf("sum2 = %d\n", sum2);
}
