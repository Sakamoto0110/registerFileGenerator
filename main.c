#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE* file = fopen("registro.txt", "w+");
    for(int mm = 1; mm <= 12; mm++){
        for(int dd = 1; dd <= 30; dd++){
            int nPizzas = 5+rand()%10;
            for(int c = 0; c < nPizzas; c++){
                char sb_pizza[255] = " ";
                char sb_bebida[255] = " ";
                int vl_pizza = 0;
                int vl_bebida = 0;
                int n = 0;
                fprintf(file,"Mes: %i\n", mm);
                fprintf(file,"Dia: %i\n", dd);
                fprintf(file,"Cpf: 34832717839\n");
                int vl_total = 0;
                for(int i = 0; i < n; i++){
                    int pizza = rand()%5;
                    switch(pizza){
                    case 0:
                        strcpy(sb_pizza,"Peperonni");
                        vl_pizza = 45;
                        vl_total += vl_pizza;
                        break;
                    case 1:
                        strcpy(sb_pizza,"Mussarela");
                        vl_pizza = 25;
                        vl_total += vl_pizza;
                        break;
                    case 2:
                        strcpy(sb_pizza,"Marguerita");
                        vl_pizza = 23;
                        vl_total += vl_pizza;
                        break;
                    case 3:
                        strcpy(sb_pizza,"Napolitana");
                        vl_pizza = 35;
                        vl_total += vl_pizza;
                        break;
                    case 4:
                        strcpy(sb_pizza,"Brigadeiro");
                        vl_pizza = 60;
                        vl_total += vl_pizza;
                        break;
                    }
                    fprintf(file,"Pizza: %s %i\n", sb_pizza, vl_pizza);
                }
                n = rand()%4;
                for(int i = 0; i < n; i++){
                    int bebida = rand()%3;
                    switch(bebida){
                    case 0:
                        strcpy(sb_bebida,"Coca");
                        vl_bebida = 5;
                        vl_total += vl_bebida;
                        break;
                    case 1:
                        strcpy(sb_bebida,"Fanta");
                        vl_bebida = 4;
                        vl_total += vl_bebida;
                        break;
                    case 2:
                        strcpy(sb_bebida,"Cerveja");
                        vl_bebida = 6;
                        vl_total += vl_bebida;
                        break;
                    }
                     fprintf(file,"Bebida: %s %i\n", sb_bebida, vl_bebida);
                }
                fprintf(file,"Total: %i\n\n\n", vl_total);
            }
        }
    }
    fclose(file);
    return 0;
}
