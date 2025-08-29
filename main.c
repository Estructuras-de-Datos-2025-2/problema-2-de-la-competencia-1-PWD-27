#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n;
    if (scanf("%d",&n)!=1) return 0;
    int *a = (int*)malloc((size_t)n*sizeof(int));
    if(!a) return 0;
    for (int i = 0;i<n;++i){
        if (scanf("%d",&a[i])!=1){free(a);return 0;
        }
    }

    int*izq = a;
    int*der = a+n-1;
    while (izq<der){
        int tmp = *izq;
        *izq = *der;
        *der = tmp;
        ++izq;
        --der;
    }
     
    
    for (int i = 0; i < n; ++i) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    putchar('\n' );

    free(a);
    return 0;
}
