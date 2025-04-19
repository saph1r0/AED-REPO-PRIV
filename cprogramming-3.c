#include <stdio.h>
//PROB 1
/*
void print(int n, int v[n][n]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("tamaño: ");
    scanf("%d", &n);
    int v[n][n];

    printf("Ingrese solo 0 o 1:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&v[i][j]);

    for(int i=0;i<n;i++) {
        int f=0,c=0;
        for(int j=0;j<n;j++) {
            f+=v[i][j];
            c+=v[j][i];
        }
        if (f !=1||c!=1) {
            printf("No m de permutación.\n");
            return 0;
        }
    }
    printf("si m de permutación.\n");
    print(n, v);
    return 0;
}
*/




//PROB 2 - 3 - 4


void copy(char str1[], char str2[]) {
    int i=0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
}

void reverse(char str[]) {
    int j=0;
    while (str[j] != '\0') {
        j++; 
    }
    j=j-1;  
    for (int i=0;i<j;i++,j--) {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

int compare(char str1[], char str2[]) {
    int i=0;
    while (str1[i]!='\0'&&str2[i]!='\0') {
        if (str1[i]<str2[i]) 
            return -1;
        if (str1[i]>str2[i]) 
            return 1;
        i++;
    }
    if (str1[i]=='\0'&&str2[i]=='\0') 
        return 0;
    if (str1[i]=='\0') 
        return -1;

    return 1;
}

int main(){
    char str1[]="sophia";
    char str2[100];

    copy(str1,str2);
    printf(".........\n");
    printf("original: %s\n", str1);
    printf("copia: %s\n", str2);
    printf(".........\n");
    reverse(str1);
    printf("reversed: %s\n",str1);
    printf(".........\n");
    printf("compare: %d\n", compare("soph", "soph"));   
    printf("compare: %d\n", compare("miuuuuuu", "mau")); 
    printf("compare: %d\n", compare("binbon", "binbonumyt")); 
    printf(".........\n");


    return 0;
}



