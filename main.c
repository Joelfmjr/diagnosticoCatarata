#include <stdio.h>
#include <stdlib.h>
#include "primitive.h"
#include "ppmTreatment.h"

int main(){
	int i, j;
	FILE *file = readFile("Catarata2.ppm");
	Image *image = getImage(file);
	printf("Largura: %i\n", image->width);
	printf("Altura: %i\n", image->height);	

	printf("%i", image->pixels[0][0].r);
	return 0;
}
