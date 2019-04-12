#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <limits.h>
#include <assert.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	assert( argv[1] ); //verificamos los arg

	int		duracion;
	char *directorio;

	duracion = atoi(argv[1]);
	directorio = getenv("PWD");

	
	if(argc == 3){

		directorio = argv[2];
		
	}
	
	printf("%s\n", directorio );


	int pid = fork();
	if (pid == 0){
		// prensa
		printf("Creacion de prensa\n");
	}
	if (pid < 0 ){
		printf("Error al crear prensa\n");
	}
	else
	{
		//init

		int pid1 = fork();
		if (pid1 == 0){
			// Soy el presi
			FILE *fpresi;
			fpresi= fopen(strcat(directorio,"/Ejecutivo.acc"),"r");
			printf("Se abrio Ejecutivo\n");
		}
		if (pid1 < 0)
			printf("error presidente\n");
	}

}
