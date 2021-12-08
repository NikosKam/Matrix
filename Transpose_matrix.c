#include <stdio.h>   
#include <math.h>
int main(void){
    int i, k, j, n, p, flag;
    printf("\nGive value of N:");
    scanf("%d", &n);
    double a[n][n], at[n][n], c[n][n], d[n][n];
    
    for(i=0;i<n; ++i)
        {
        for(j=0;j<n; ++j)
            {
            printf("A[%d][%d]=", i+1, j+1);
            scanf("%lf", &a[i][j]);
        }
    }
    //inverted matrix
    for(i=0;i<n; ++i)
        for(j=0;j<n;++j)
            at[j][i]= a[i][j];
    
    
    for(i=0; i<n; ++i)
        {
        for(j=0;j<n;++j)
            {
            c[i][j]=0;
            for(k=0;k<n;++k)
                c[i][j] += a[i][k]*at[k][j];
            //printf("C[%d][%d]= %lf\n", i+1, j+1, c[i][j]);
        }
    }
    
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            d[i][j]=0;
            for(k=0;k<n;++k)
                d[i][j] += at[i][k]*a[k][j];
            if(d[i][j]==c[i][j])
                continue;
            else
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
        printf("The matrix is transposable!\n");
    else
        printf("Failed\n");
    return 0;
}
