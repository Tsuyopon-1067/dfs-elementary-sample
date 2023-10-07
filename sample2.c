#include <stdio.h>

int a[8] = {3, 0, 7, 6, 2, 4, 5, 1};

void sub_main(int idx, int x, int count) {
    printf("count = %d\n", count++);
    printf("idx = %d, a[%d] = %d\n\n", idx, idx, a[idx]);
    if (a[idx] == x) {
        return;
    }

    sub_main(a[idx], x, count);
}

int main() {
    int x;
    printf("x:");
    scanf("%d", &x);

    sub_main(0, x, 0);
}
