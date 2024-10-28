#include <stdio.h>

int main(){
    int r;
    int focoApagado=0;
    while(r!=3){
        if(!focoApagado){
            printf("El foco esta ENCENDIDO\n");
        } else {
            printf("El foco esta APAGADO\n");
        }
        printf("Seleccione una opcion:\n");
        printf("1. Encender  2.Apagar  3.Salir\n");
        scanf("%d", &r); 
        if(r == 1){
            focoApagado = 0; 
            printf("Has encendido el foco\n");
        } else if(r == 2) {
            focoApagado = 1; 
            printf("Has apagado el foco\n");
        } else if(r != 3) {
            printf("Opción no válida, intente de nuevo\n");
        }
	}
        
    return 0;
}
