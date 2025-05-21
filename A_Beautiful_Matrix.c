Problem Link- https://codeforces.com/problemset/problem/263/A

#include <stdio.h>

int main() {
    int m[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    int fi,fj;
for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(m[i][j]==1)
            {
                fi=i; fj=j;
            }
        }
    }

    printf("%d", abs(fi-2)+abs(fj-2));


    return 0;
}
