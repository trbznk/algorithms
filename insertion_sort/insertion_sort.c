#include <stdio.h>

int main() {
    int a[12] = {72, -100, 1, 10, 23, -1, 55, 9, 48, 2, -53, 5};
    int len = sizeof(a)/sizeof(a[0]);

    int key, i;
    for (int j = 1; j < len; j++) {
        key = a[j];
        i = j-1;
        while(i >= 0 && key < a[i]) {
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }

    for(int i = 0; i < len; i++) {
        printf("%d\n", a[i]);
    }
}
