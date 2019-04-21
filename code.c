#include <stdio.h>

int main(){
    printf("Welcome to CSCI3250 World\nI will now print first 10 Fibonacci Number\n");
    int i, n = 10, t1 = 0, t2 = 1, nextTerm;
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}