#include <stdio.h>

void carga(int f , int c , int m[][c]){
    int i,j;
    int num;
    for(i=0; i<f ; i++){
        for(j=0 ; j<c ; j++){
            scanf("%d",&num);
            m[i][j] = num;
        }
    }
}

void emitir ( int f , int c , int m[][c]){
    int i,j;
    for(i=0; i<f ; i++){
        for(j=0 ; j<c ; j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}

int suma ( int f , int c , int m[][c]){
    int i,j,acu=0;
    for(i=0 ; i<f ; i++){
        for(j=0 ; j<f ; j++){
            acu = acu + m[i][j];
        }
    }
    return acu;
}


int main() {

    const int F1 = 2;
    const int C1 = 2;

    const int F2 = 2;
    const int C2 = 2;

    int m1[F1][C1];
    int m2[F2][C2];

    int a,b,s1,s2,resultante;

    printf("Escriba valores de matriz 1 \n");
    carga(F1,C1,m1);
    printf("Escriba valores de matriz 2 \n");
    carga(F2,C2,m2);

    printf("\nRegistros: \n");
    printf("Matriz 1:\n");
    emitir(F1,C1,m1);
    printf("Matriz 2:\n");
    emitir(F2,C2, m2);

    s1 = suma ( F1,C1,m1);
    s2 = suma ( F2,C2,m2);

    resultante = s1 + s2;
    printf("%d + %d = %d \n",s1,s2,resultante);



}

