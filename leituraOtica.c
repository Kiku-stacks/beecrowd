#include <stdio.h>

int main(){

    int n,cont;
    int vet[5];

    scanf("%d",&n);

    while(n != 0){

        for(int i = 0; i < n; i++){
            cont = 0;
            for(int j = 0; j < 5; j++){
                scanf("%d",&vet[j]);

                if(vet[j] <= 127){
                    cont++;
                }

            }

            if(cont == 0 || cont > 2){
                printf("*\n");
            }else{
                switch(cont){
                    case 1:
                        printf("A\n"); 
                        break;
                    case 2:
                        printf("B\n");
                        break;
                    case 3:
                        printf("C\n");
                        break;
                    case 4:
                        printf("D\n");
                        break;
                    case 5:
                        printf("E\n");
                        break;
                }
            }


        }

        scanf("%d",&n);
        
    }


    return 0;
}