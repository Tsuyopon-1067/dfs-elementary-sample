#include <stdio.h>

int a[8] = {3, 0, 7, 6, 2, 4, 5, 1};

int main() {
    int x;
    printf("x:");
    scanf("%d", &x);

    int idx = 0;
    int counter = 0;  // ループ回数を数えるだけで探索に必要ない
    while (a[idx] != x) {
        printf("count = %d\n", counter++);
        printf("idx = %d, a[%d] = %d\n\n", idx, idx, a[idx]);
        idx = a[idx];
    }
    printf("found.\nidx = %d, a[%d] = %d\n", idx, idx, a[idx]);
}