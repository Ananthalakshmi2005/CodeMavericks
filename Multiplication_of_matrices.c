#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    int x[a][b], y[c][d];
    if(b==c)
    {
        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j < b; j++)
            {
                scanf("%d", &x[i][j]);
            }
        }
        for(int i = 0; i < c; i++)
        {
            for(int j = 0; j < d; j++)
            {
                scanf("%d", &y[i][j]);
            }
        }
        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j < d; j++)
            {
                int sum = 0;
                for(int k = 0; k < b; k++)
                {
                    sum+=(x[i][k]*y[k][j]);
                }
                printf("%d ", sum);
            }
            printf("\n");
        }
    }
    return 0;
}
