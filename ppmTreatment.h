FILE * readFile(char filename[]){
	FILE *file;

	file = fopen(filename, "r");
	//Adicionar testes no arquivo aqui
	return file;
}

//Read and return image
Image * getImage(FILE *file){
	int pixel;
	char header[16];
	Image *img = (Image *)malloc(sizeof(Image));

	//fgets lê a primeira linha do arquivo
	fgets(header, sizeof(header), file);
	
	//Lê uma sequência de caracteres como unsigned char
	//E atribui os valores da linha ao tipo Image *img
	fscanf(file, "%d %d", &img->width, &img->height);

	//Pula a linha para ir aos pixels
	while (fgetc(file) != '\n');	

	return img;
}
