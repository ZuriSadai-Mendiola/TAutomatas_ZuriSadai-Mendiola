#include <stdio.h>
#include <string.h>

void generarCadenas(char *cadena, int n, int pos, int *contador, int maxCadenas){

    if (pos==n){
        cadena[pos] ='\0';
        printf("%s\n", cadena);
        (*contador)++; 
        if(*contador>=maxCadenas){
            return;
        }
        return;
    }
    char conjunto[]={'a','b'};
    int i;
    for(i=0;i<2;i++){
        if(*contador>=maxCadenas){
            return; 
        }
        cadena[pos]=conjunto[i];
        generarCadenas(cadena,n,pos+1,contador,maxCadenas);
    }
}

void generarCadenas1(char *cadena1, int n1, int pos, int *contador1, int maxCadenas1){
    if (pos==n1) {
        cadena1[pos] ='\0';
        printf("%s\n", cadena1);
        (*contador1)++; 
        if(*contador1>=maxCadenas1){
            return;
        }
        return;
    }
    char conjunto[]={'a','b'};
    int i;
    for(i=0;i<2;i++){
        if(*contador1>=maxCadenas1){
            return; 
        }
        cadena1[pos]=conjunto[i];
        generarCadenas1(cadena1,n1,pos+1,contador1,maxCadenas1);
    }
}
int main() {
    int n1, maxCadenas1;
    printf("Cerradura de Kleene\n");
    printf("Ingrese la longitud de las cadenas: ");
    scanf("%d", &n1);
    printf("Ingrese la cantidad de cadenas que desea generar:");
    scanf("%d", &maxCadenas1);
    char cadena1[n1+1];
    int contador1 = 1; 
    printf("_\n");
    generarCadenas1(cadena1,n1,0,&contador1,maxCadenas1); 
    printf("Cerradura de positiva\n");
    printf("Ingrese la longitud de las cadenas: ");
    int n, maxCadenas;
    scanf("%d", &n);
    printf("Ingrese la cantidad de cadenas que desea generar:");
    scanf("%d", &maxCadenas);
    char cadena[n1];
    int contador = 0; 
    generarCadenas(cadena,n,0,&contador,maxCadenas);

    return 0;
}
