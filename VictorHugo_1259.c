#include <stdio.h>
#include <stdlib.h>

int crescente(void const *a, void const *b )
{
    return (*(int*)a - *(int*)b );
}

int decrescente(void const *a, void const *b )
{
    return (*(int*)b - *(int*)a );
}

int main(){
int n=n, valores, pares[100001]= {0}, impares[100001] ={0}, qtd_par, qtd_impar;
scanf("%d",&n);
    for (int i =0; i <=(n-1); i++){
        scanf("%d",&valores);
        if(valores%2 == 0){
            pares[qtd_par] = valores;
            qtd_par++;
        }else{
            impares[qtd_impar] = valores;
            qtd_impar++;
        }
    }


        qsort(pares, qtd_par, sizeof(int), crescente);
    qsort(impares, qtd_impar, sizeof(int), decrescente);

    for (int i = 0; i <= (n-1); i++){
      if (pares[i] > 0) {
            printf("%d\n",pares[i]);
      }
    }
    for (int i = 0; i <= (n-1); i++){
         if (impares[i] > 0){
            printf("%d\n",impares[i]);
          }
    }
    return 0;

}
