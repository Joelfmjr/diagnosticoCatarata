#include "primitive.h"
//A implementar
void getHeader(char filename[20], FILE *file){
	char header[16];
	int pixel;

	Image *img = (Image *)malloc(sizeof(Image));
	
	file = fopen("Normal.ppm", "r");
	
	fgets(header, sizeof(header), file);

	fscanf(file, "%d %d", &img->height, &img->width);
	
	printf("Width:%d\nHeight:%d\n", img->width, img->height);
	
}
