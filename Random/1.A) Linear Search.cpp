#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int k;
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            printf("%d", i);
            return 0;
        }
    }
    cout << -1 << '\n';
    return 0;
}