#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[20];
    int T2[20];
    int T3[20];
    int n,i,som_tab,moy_tab;
    int nb_t2,nb_t3;
    do{
        printf("Donner le taille de tableau \n");
        scanf("%d",&n);
    }while(!(n>=5 && n<=20));
    for(i=0;i<n;i++){
        printf("Donner la valeur de la case %d de tableau \n",i+1);
        scanf("%d",&T[i]);
    }
    som_tab = 0;
    nb_t2 = 0;
    nb_t3 = 0;
    for(i=0;i<n;i++){
        //printf("%d \t",T[i]);
        som_tab += T[i];
    }
    moy_tab = som_tab / n ;
    printf("La moyenne des element de tableau T1 est : %d \n",moy_tab);
    for(i=0;i<n;i++){
        if(T[i] >= moy_tab){
            T3[i] = T[i];
            T2[i] = 0;
        }else
            if(T[i]< moy_tab){
                T2[i] = T[i];
                T3[i] = 0 ;
            }
    }
    printf("T1 = \t");
    for(i=0;i<n;i++){
        printf("%d \t",T[i]);
    }
    printf("\n");
    printf("T2 = \t");
    for(i=0;i<n;i++){
        printf("%d \t",T2[i]);
    }
    printf("\n");
    printf("T2 = \t");
    for(i=0;i<n;i++){
        printf("%d \t",T3[i]);
    }
    return 0;
}
