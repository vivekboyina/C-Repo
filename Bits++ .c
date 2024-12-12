#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ans = 0;
    while(n--)
    {
        char str[3];
        scanf("%s", str);
        if(str[1] == '+'){ ans++; }
        else if(str[1] == '-'){ ans--; }
    }
    printf("%d", ans);
    return 0;
}