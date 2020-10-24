# Fernando Vargas 20.415.814-2 SSOO-tarea01
Mi solucion se basa en tener la funcion main donde corre el codigo y printea los primeros mensajes "Programa hora ejecutandose. PID=xxxx. 
Listo para recibir la señal SIGUSR1." para luego entrar en un ciclo infinito a la espera de la señal kill -s SIGUSR1 PID para pasar a la funcion "hora" donde se
declaran las variables para obtener la fecha y hora del equipo y despues printearlas , luego vuelve al main a la espera de una señal que puede ser la anterior o la señal
correspondiente a CTRL+C al presionar una vez la tecla pasa a la funcion "senaldeten" que printea un salto de linea y queda a la espera de otra señal de CTRL+C (sigint)
para pasar a la segunda funcion "mata" en donde printea un salto de linea y ejecuta la funcion exit(); que cierra el programa.

Considerar que el makefile funciona por ende al compilar el archivo usar sudo make ya que si se observa en la carpeta src hay una carpeta llamada obj que esta protegida 
si quiere probar que el make compile puede hacer "sudo make clean"(borrara el archivo compilado y la carpeta obj generada por el makefile al interior de src)
y despues "sudo make" para probarlo.
