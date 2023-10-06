//Q-implement masters theorem :T(n)=aT(n/b)+f(n)
#include <stdio.h>
#include <math.h>

int master(int a, int b, int k) {
    if (k == 0) {
        return 1;
    } else if (k == 1) {
        return a;
    } else if (k == 2) {
        return a*a;
    } else if (k % 2 == 0) {
        return pow(master(a, b, k/2), 2);
    } else {
        return a * pow(master(a, b, (k-1)/2), 2);
    }
}

int main() {
    int a = 2;
    int b = 3;
    int k = 4;
    int result = master(a, b, k);
    printf("T(n) = %d", result);
    return 0;
}


