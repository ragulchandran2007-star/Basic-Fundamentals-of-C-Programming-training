#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n;i++){
        int v;
        if (i%2==1)
        v = 1;
        else
        v = 0;

    for (int j=0;j<=n-i;j++){
        printf("%d", v);
        v = 1-v;
        }
        printf("\n");
    }

    return 0;
}
