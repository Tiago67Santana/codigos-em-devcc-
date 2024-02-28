#include <stdio.h>

int main () {
	char [50] nome
	int idade
	float primeiraNota, segundaNota, terceiraNota, media
	
	printf ("\nDigite seu nome: ");
	scanf ("%s",&nome)
	printf ("\nDigite sua idade: ");
	scanf ("%i",&idade)
	printf ("\nDigite sua primeira nota: ");
	scanf ("%f",&primeiraNota)
	printf ("Digite sua segunda nota: ");
	scanf ("%f",&segundaNota)
	printf ("Digite sua terceira nota: ");
	scanf ("%f",&terceiraNota)
	
	media = (primeiraNota + segundaNota + terceiraNota ) / 3
	
	printf ("Nome: %s ", nome)
	printf ("Idade: %i ", idade)
	printf ("Primeira nota: %f ", primeiraNota)
	printf ("Segunda nota: %f ", segundaNota)
	printf ("Terceira nota: %f ", terceiraNota)
	printf ("Media: %f ", media)
	
	return 0;
}
	
