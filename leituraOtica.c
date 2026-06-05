#include <stdio.h>

int main(){

    int n,letra,cont,verificador = 0;
    int vet[5];

    scanf("%d",&n);

    while(n != 0){

        for(int i = 0; i < n; i++){
            letra = -1;
            cont = 0;
            for(int j = 0; j < 5; j++){
                scanf("%d",&vet[j]);

                if(vet[j] <= 127){
                    letra = j;
                    cont++;
                }else{
                    verificador++;
                }
            }

            if(cont == 0 || cont >= 2 || verificador == 0){
                printf("*\n");
            }else{
                switch(letra){
                    case 0:
                        printf("A\n"); 
                        break;
                    case 1:
                        printf("B\n");
                        break;
                    case 2:
                        printf("C\n");
                        break;
                    case 3:
                        printf("D\n");
                        break;
                    case 4:
                        printf("E\n");
                        break;
                }
            }
        }

        scanf("%d",&n);
        
    }


    return 0;
}