#include <cstdio>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int answer;
    if(A == B) answer = C;
    if(B == C) answer = A;
    if(C == A) answer = B;

    printf("%d\n", answer);
    return 0;
}
