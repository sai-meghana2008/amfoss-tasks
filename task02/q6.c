#include <stdio.h>
int main() {

    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int arr[N];
        int freq[11] = {0}; 
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
        }
        
        int maxFreq = 0;
        for (int i = 1; i <= 10; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
            }
        }
        
        int moves = N - maxFreq;
        printf("%d\n", moves);
    }
    


    return 0;
}