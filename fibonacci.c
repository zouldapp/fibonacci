#include <stdio.h>

int fibonacci(int n) {
    int a = 0;
    int b = 1;
    
    if ( n < 0 ) {
        for ( int i = 0; i > n; i-- ) {
            int temp = a;
            
            a = b;
            b = temp - b;
        }
        return a;
    }
    for ( int i = 0; i < n; i++ ) {
        int temp = a;
        
        a = b;
        b = temp + b;
    }
    return a;
}

int main() {
    int limit;
    
    scanf("%d", &limit);
    
    printf("%d\n", fibonacci(limit));
    return 0;
}
