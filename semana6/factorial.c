/*Este programa evaluara una variable x en exponencial, logaritmo, seno, coseno y raiz cuadrada en un intervalo y con un espaciado definido por el usuario y guarda la informacion en un archivo .txt . Creado por Guadalupe Florian el 14 de Septiembre del 2018*/

/*Se indica la libreria que usamos*/
#include <stdio.h>
#include<math.h>

/*Funcion maestra del programa*/
int main()
{
	/*Declaro mi variable FILE que me servira para crear/tener acceso un archivo txt*/
	FILE *factorial;
	/*Indico que escribire/creare un archivo txt llamado factorial*/
	factorial=fopen("factorial.txt","w");
	/*Me define una varaible de tipo punto flotante res y x*/
	float xi,xf,espaciado,res;
	/*Me define una variable de tipo entera n y e que son el intervalo y expaciado*/
	int i,n;



		/*Indica al usuario que entre dos valores para calcular x asi como su intervalo*/
		printf("Ingrese dos valores para el intervalo en el que el valor de x se calculara, asi como el espaciado que habra entre calculo de intervalo  \n");
		/*Permite al usuario entrar los valores*/
		scanf(" %f %f %f",&xi,&xf,&espaciado);
			 
		/*Indico que n es mi la diferencia de mi intervalo entre el espaciado*/
		n=(xf-xi)/espaciado;
		
			/*Me indica que las operaciones inician en cero, deben ser menor que n y se le sumara 1*/
			for(i=0;i<n;i++){
				/*Realizara las operaciones corresopndientes a el valor x agregado por el usuario*/			
				res=exp(xi);
				/*Los fprintf imprimiran a mi archivo factorial.txt los resultados de las operaciones indicadas a continuacion con rango y el espaciado dado por el usuario*/
				fprintf(factorial,"El exponencial de %f es %f \n",xi,res);
				res=log(xi);
				fprintf(factorial,"El logaritmo de %f es %f \n",xi,res);
				res=sin(xi)*57.29557795131;
				fprintf(factorial,"El seno es de %f es %f \n",xi,res);
				res=cos(xi)*57.29557795131;
				fprintf(factorial,"El coseno de %f es %f \n",xi,res);
				res=sqrt(xi);
				fprintf(factorial,"La raiz cuadrada de %f es %f \n",xi,res);
				/*Indica que en el ciclo mi x inicial del intervalo se le sumara la variable del espaciado mientras progrese*/
				xi=xi+espaciado;	

			
		                      }
			/*Indico que se cerrara mi documento factoral.txt*/
			fclose(factorial);

		
			
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;

		
}
