Problem Link- https://codeforces.com/problemset/problem/282/A

#include <stdio.h>

int main() {
    int t,i,x=0;
    scanf("%d",&t);
    char s[4];


    for(i=0;i<t;i++)
    {
        scanf("%s",s);
        if(s[1]=='+' || s[0]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }

    }
    printf("%d",x);

    return 0;
}
