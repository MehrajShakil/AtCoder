#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    const int MOD = 1e9 + 7;
    long long answer = 1;

    for(int i = 1; i <= n; i++)
        answer = (answer*i)%MOD;

    printf("%lld\n", answer);

    return 0;
}
