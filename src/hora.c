#include <stdio.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

void mata(int mat){//Despues del segundo ctrl+c viene a esta funcion para terminar el programa
	printf("\n");
		exit(0);//termina el programa
		}
void senaldeten(int sen){//Funcion que reconoce el primer ctrl+c
	printf("\n");
	signal(SIGINT,&mata);//Señal para reconocer el segundo ctrl+c
 }
void hora(int sig){//Funcion para obtener la fecha y hora del equipo
	time_t tiempocompu;//Se declara una variable de tipo time_t (permite almacenar el tipo de dato de time)
	time(&tiempocompu);//Funcion time que setea en la variable la fecha y hora del equipo
	printf("Señal SIGUSR1 recibida: %s",ctime(&tiempocompu));
}

int main (void){
	signal(SIGINT,&senaldeten);//Reconoce la señal de ctrl+c
	int numpid=getpid();//Se declara la variable para el PID
	printf("Programa hora ejecutandose. PID=%d \n",numpid);
	printf("Listo para recibir la señal SIGUSR1\n");
	while(true){//ciclo infinito requerido que aloja la funcion del tiempo
	signal(SIGUSR1,&hora);//Reconoce la señal de kill -s SIGUSR1 PID
	pause();//Pausa el sistema (lo use por que si no dejaba corriendo los prints
	}
	}

	

