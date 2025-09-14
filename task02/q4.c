#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);

        int maxClosed = 0, current = 0;
        for (int i = 0; i < n; i++) {
            int door;
            scanf("%d", &door);

            if (door == 1) {
                current++;
                if (current > maxClosed)
                    maxClosed = current;
            } else {
                current = 0;
            }
        }

        if (maxClosed <= x)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
