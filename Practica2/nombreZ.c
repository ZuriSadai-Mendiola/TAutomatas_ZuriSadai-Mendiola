
#include <stdio.h>
#include <string.h> 

void f1(char *nombre);
void f2(char *nombre);
void f3(char *nombre);
void f4(char *nombre);
void f5(char *nombre);


int main(){
	char nombre[5]="";
	f1(nombre);
	return 0;
}
void f1(char *nombre){
	char z[]="Z";
	strcat(nombre,z);
	f2(nombre);
}
void f2(char *nombre){
	char u[]="u";
	strcat(nombre,u);
	f3(nombre);
}
void f3(char *nombre){
	char r[]="r";
	strcat(nombre,r);
	f4(nombre);
}
void f4(char *nombre){
	char i[]="i";
	strcat(nombre,i);
	f5(nombre);
}
void f5(char *nombre){
	printf("%s\n",nombre);
	printf("%s","Finalizó");
}


