#include <stdio.h>

int main () {
	char nome[50];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, media;
	
	printf ("Digite seu nome: ");
	scanf ("%s",&nome);
	printf ("Digite sua idade: ");
	scanf ("%i",&idade);
	printf ("Digite sua primeira nota: ");
	scanf ("%f",&primeiraNota);
	printf ("Digite sua segunda nota: ");
	scanf ("%f",&segundaNota);
	printf ("Digite sua terceira nota: ");
	scanf ("%f",&terceiraNota);
	
	media = (primeiraNota + segundaNota + terceiraNota ) / 3;
	
	printf ("Nome: %s \n", nome);
	printf ("Idade: %i \n", idade);
	printf ("Primeira nota: %.1f \n", primeiraNota);
	printf ("Segunda nota: %.1f \n", segundaNota);
	printf ("Terceira nota: %.1f \n", terceiraNota);
	printf ("Media: %.1f \n", media);
	
	if (media >= 7 ) {
		printf ("Aprovado");
	} else {
	printf ("Reprovado"); }
	
	return 0;
}
	
