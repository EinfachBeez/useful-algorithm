#include <stdio.h>
#include <string.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS // avoid windows compiler warnings

int main() {
    // 16 Digits = hexadecimal from 0 to 9 and from A to F
    char hex[16];
    int dec = 0, i, k, n = 0;

    printf("Heximal Input: ");
    scanf("%s", hex);

    for (i = strlen(hex) - 1; i >= 0; --i) {

        if (hex[i] >= '0' && hex[i] <= '9') {
            k = hex[i] - '0';
        }
        else {
            k = hex[i] - 'A' + 10;
        }

        dec += k * pow(16, n);
        ++n;
    }

    printf("Decimal Value: %d", dec);

    return 0;
}