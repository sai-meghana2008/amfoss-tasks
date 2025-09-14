#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x); 

        int doors[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &doors[i]); 
        }

        int canPass = 1; 
        int usedButton = 0; 
        int remainingTime = x; 

        for (int i = 0; i < n; i++) {
            if (doors[i] == 0) {
                if (usedButton) remainingTime--;
            } else {
                if (usedButton) {
                    if (remainingTime > 0) {
                        remainingTime--;
                    } else {
                        canPass = 0;
                        break;
                    }
                } else {
                    
                    usedButton = 1;
                    remainingTime = x - 1; 
                }
            }
        }

        if (canPass)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
