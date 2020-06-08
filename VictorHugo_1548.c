#include <stdio.h>
#include <stdlib.h>


void main(){

int n, alunos, notas[1000], checador[1000], n_troca=0, n_move=0;
scanf("%d",&n);
while ( n!= 0){
        scanf("%d",&alunos);
    for (int j = 0; j < alunos; j++){
       scanf("%d",&notas[j]);
       checador[j] = notas[j];


        }



    for (int k = 1; k <= (alunos-1); k++){
        for( int j = 0; j <= (alunos-1); j++){
                if ((notas[j]) < (notas[k])){
                    int aux = (notas[j]);
                    notas[j] = notas[k];
                    notas[k]= aux;
                    n_troca +=1;

                }
            }

        }
    for (int i = 0; i <= (alunos-1); i++){
        if (checador[i] == notas[i]){
            n_move +=1;
        }
    }
    printf("%d\n",n_move);
    n_move=0;
    n = n-1;
    }




}
