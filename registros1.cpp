#include<iostream>
#include<cstring>
using namespace std;

struct empleado{
		char nombre[30];
		char sexo[30];
		float sueldo;
};

int main(){
	int n,max,min;
	char namemax[30]="",namemin[30]="";
	cout<<"Cantidad de trabajadores: ";cin>>n;
	empleado lista_empleado[n];
	for(int i=0;i<n;i++){
		cout<<"Nombre: ";cin>>lista_empleado[i].nombre;
		cout<<"Sexo: ";cin>>lista_empleado[i].sexo;
		cout<<"Sueldo: ";cin>>lista_empleado[i].sueldo;
	}
	max=lista_empleado[0].sueldo;
    strcpy(namemax,lista_empleado[0].nombre);
	min=lista_empleado[0].sueldo;
    strcpy(namemin,lista_empleado[0].nombre);
	for(int i=0;i<n;i++){
		if(lista_empleado[i].sueldo>max){
			max=lista_empleado[i].sueldo;
			strcpy(namemax,lista_empleado[i].nombre);
		}
	}
	for(int i=0;i<n;i++){
		if(lista_empleado[i].sueldo<min){
			min=lista_empleado[i].sueldo;
			strcpy(namemin,lista_empleado[i].nombre);
		}
	}
	cout<<"El empleado con mayor salario es: "<<namemax<<" ("<<max<<" soles)"<<endl;
	cout<<"El empleado con menor salario es: "<<namemin<<" ("<<min<<" soles)"<<endl;
	return 0;
}