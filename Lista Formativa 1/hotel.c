#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, n, a; // diaria, dia q cheguei, aumento da diaria por dia
    int promo;   // promo
    int res;     // resultado
    int diariaT;
    scanf("%d %d %d", &d, &a, &n);

    promo = d + ((n - 1) * a);
    diariaT = (31 - (n - 1)) * promo;

    printf("%d\n", diariaT);
    return 0;
}