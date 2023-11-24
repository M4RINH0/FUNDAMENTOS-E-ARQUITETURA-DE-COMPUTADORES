#include <stdio.h>

int contaBits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    unsigned int num = 9000;
    int result = contaBits(num);
    printf("O número de bits 1 em %u é %d\n", num, result);
    return 0;
}
