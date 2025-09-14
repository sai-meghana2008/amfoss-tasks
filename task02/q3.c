#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

     while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

        int total_capacity = (N + 1) * Y;

        if (total_capacity >= X)
            printf("YES\n");
        else
            printf("NO\n");
    }
     
    return 0;
}
