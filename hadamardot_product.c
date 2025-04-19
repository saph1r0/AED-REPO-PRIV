#include <stdio.h>

void ingrresa(int v[], int n) {
    for(int i=0;i<n;i++) {
        scanf("%d",&v[i]);
    }
}
void print(int v[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",v[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("ingrese num elementos:");
    scanf("%d",&n);

    if ((n>0)&&(n<=100)) {

        int u[n], v[n], h[n], dot=0;
        printf("elem vector u:\n");ingrresa(u,n);
        printf("elem vector v:\n");ingrresa(v,n);

        for(int i=0;i<n;i++) {
            h[i]=u[i]*v[i];
            dot+=h[i];
        }

        printf("\nHadamard product:");
        print(h,n);
        printf("Dot product: %d\n",dot);

    } else {
        printf("!!!num entre 1 y 100\n");
    }

    return 0;
}
