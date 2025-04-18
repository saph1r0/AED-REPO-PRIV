#include <stdio.h>     
#include <stdlib.h>   

//PROB 1
/*int main() {
    int n;
    printf("Ingrese número: ");
    scanf("%d", &n);

    if ((n>=1000)&&(n<=9999)) {
        int p1=n/100;
        int p2=n%100;
        int c=p1+p2;
        if (n==c*c) {
            printf("Si cumple la propiedad\n");
        }else{
            printf("No cumple la propiedad\n");
        }
    } else{
        printf("¡Número debe ser de 4 digitos!\n");
    }
    return 0;
}
*/

//PROB 2
/*void capicua(int num) {
    int normal=num;
    int invert=0;
    while(num>0) {
        invert=invert*10+num%10;
        num/=10;
    }
    if (invert==normal) {
        printf("Si es capicua\n");
    } else {
        printf("No es capicua\n");
    }
}
int main() {
    int num;
    printf("Ingrese número: ");
    scanf("%d", &num);
    capicua(num);
    return 0;
}*/

//PROB 3
 /*si es posible usando solo suma y resta, aunque tambien es posible hacinedo lo mismo con punteros*/
 /*int main() {
    int a=3;
    int b=8;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a= %d\n",a);printf("b= %d\n",b);
    return 0;
 }*/

 //PROB 4

/*
int main() {
    int op;
    float num1, num2, r;
    while (1) {
        printf("elije:\n");
        printf(" +\n");
        printf(" -\n");
        printf(" *\n");
        printf(" /\n");
        printf(" e (Exit)\n");
        printf("escriba simbolo");
        scanf(" %c", &op);

        if (op == 'e') {
            printf("fin...\n");
            break;  
        }
        printf("2 numeros.... ");
        scanf("%f %f",&num1,&num2);

        switch (op) {
            case '+':  
                r=num1+num2;
                printf("r:%.2f+%.2f=%.2f\n",num1,num2,r);
                break;
            case '-':  
                r=num1-num2;
                printf("r:%.2f-%.2f=%.2f\n",num1,num2,r);
                break;
            case '*':  
                r=num1*num2;
                printf("r:%.2f*%.2f=%.2f\n",num1,num2,r);
                break;
            case '/': 
                if(num2!=0){
                    r=num1/num2;
                    printf("r:%.2f/%.2f=%.2f\n",num1,num2,r);
                } else {
                    printf("error /0.\n");
                }
                break;
            default:
                printf("incorrecto.\n");
        }
    }

    return 0;
}
*/

//PROB 5
/*
void ingresa(int v[], int n) {
    for(int i=0;i<n;i++) {
        scanf("%d",&v[i]);
    }
}
int dif (int v[],int n){
    int max=v[0],min=v[0];
    for(int i=1;i<n;i++) {
        if (v[i]>max)max=v[i];
        if (v[i]<min)min=v[i];
    }
    return max-min;
}
int main() {
    int n;
    printf("ingrese num elementos:");
    scanf("%d",&n);
    int u[n];
    printf("Enter a list:\n");ingresa(u,n);
     printf("Absolute difference is = %d\n", dif(u,n));
    return 0;
}*/

//PROB 6

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
int existe(int v[],int n,int val) {
    for(int i=0;i<n;i++)
        if(v[i]==val)
            return 1;
    return 0;
}
void unico(int v[],int n,int r[], int *n3) {
    *n3=0;
    for(int i=0;i<n;i++) {
        if (existe(r,*n3,v[i])==0) {
            r[*n3]=v[i];
            (*n3)++;
        }
    }
}
void intersec(int v[],int n1,int u[],int n2,int r[],int *n3) {
    *n3=0;
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++){
            if (v[i]==u[j]) {
                r[*n3]=v[i];
                (*n3)++;
            }
        }
    }
}
void uunion(int v[],int n1,int u[],int n2,int r[],int *n3)  {
    *n3=0;
    for(int i=0;i<n1;i++){
        r[*n3]=v[i];
        (*n3)++;
    }
    for(int i=0;i<n2;i++){
        if (existe(r,*n3,u[i])==0) {
            r[*n3]=u[i];
            (*n3)++;
        }
    }
}
void dif(int v[],int n1,int u[],int n2,int r[],int *n3)  {
    *n3=0;
    for(int i=0;i<n1;i++) {
        if(existe(u,n2,v[i])==0) {
            r[*n3]=v[i];
            (*n3)++;
        }
    }

}
int main() {
    int n1, n2;
    printf("ingrese num elementos SET 1:");
    scanf("%d",&n1);
    printf("ingrese num elementos SET 2:");
    scanf("%d",&n2);

    int u[n1], v[n2];
    printf("Enter set 1: ");ingrresa(u,n1);
    printf("Enter set 2: ");ingrresa(v,n2);

    int s1[100],s2[100],ns1,ns2;
    unico(u,n1,s1,&ns1);
    unico(v,n2,s2,&ns2);

    int r[100], n3;
    intersec(s1,ns1,s2,ns2,r,&n3);
    printf(" set 1: ");
    print(s1, ns1);
    printf(" set 2: ");
    print(s2, ns2);
    printf("La intersección es: ");
    print(r, n3);
    uunion(s1,ns1,s2,ns2,r,&n3);
    printf("La unión es: ");
    print(r, n3);
    dif(s1,ns1,s2,ns2,r,&n3);
    printf("La diferencia es: ");
    print(r, n3);
    printf(" . . .  ");
    return 0;
}
