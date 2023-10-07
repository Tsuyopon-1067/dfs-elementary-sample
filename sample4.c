#include <stdio.h>

int a[20];

void sub_main(int idx) {
    if (idx < 20) {
        printf("a[%d] = %d\n", idx, a[idx]);
        sub_main(idx+1);
    }
}

int main() {
    for (int i = 0; i < 100; ++i) {
        a[i] = i*2+2;
    }

    sub_main(0);
}
