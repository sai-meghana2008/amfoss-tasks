#include <stdio.h>
int main() 
{
    int T;
    scanf("%d", &T);  // number of test cases
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        if (Y <= X)
            printf("%d\n", Y);
        else
            printf("%d\n", X);
    }

      
    return 0;
}
