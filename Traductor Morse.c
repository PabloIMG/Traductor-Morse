#include <stdio.h>

void letras(char letra);

int main(){
	int n=-1,i; // n con valor -1 para quitar el último espacio agregado por fgets
	char palabra[100];
	char letra;
	
	printf("Ingrese palabra o frase: ");
	fgets(palabra, 100, stdin);
	
	for(i=0;i<100;i++){						//Se eliminan archivos basura.
		if(palabra[i]!='\0'){
			n = n+1;
		}
		else{
			i = 100; // Si detecta un enter, salta a la última posición
		}
	}
	
		//Imprimir palabra ingresada y traducción.
	printf("\nPalabra ingresada: \n");
	for(i=0;i<n;i++){
		printf("%c",palabra[i]);
	}
	
	printf("\nTraduccion Morse: \n");
	for(i=0;i<n;i++){
		letra = palabra[i];
		if(i>0){
			printf("/");
		}
		letras(letra);
	}
	
	printf("\n \nMuchas gracias por usar nuestro programa. \nPresione cualquier tecla para continuar...");
	getchar();
	
	return  0;
}

void letras(char letra){
	switch(letra){
			case 'a': printf(".-"); break;
			case 'b': printf("-..."); break;
			case 'c': printf("-.-."); break;
			case 'd': printf("-.."); break;
			case 'e': printf("."); break;
			case 'f': printf("..-."); break;
			case 'g': printf("--."); break;
			case 'h': printf("...."); break;
			case 'i': printf(".."); break;
			case 'j': printf(".---"); break;
			case 'k': printf("-.-"); break;
			case 'l': printf(".-.."); break;
			case 'm': printf("--"); break;
			case 'n': printf("-."); break;
			case 'o': printf("---"); break;
			case 'p': printf(".--."); break;
			case 'q': printf("--.-"); break;
			case 'r': printf(".-."); break;
			case 's': printf("..."); break;
			case 't': printf("-"); break;
			case 'u': printf("..-"); break;
			case 'v': printf("...-"); break;
			case 'w': printf(".--"); break;
			case 'x': printf("-..-"); break;
			case 'y': printf("-.--"); break;
			case 'z': printf("--.."); break;
	}
}
