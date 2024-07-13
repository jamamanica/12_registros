#include<iostream>
using namespace std;

struct persona{
    string nombre;
    char dni[8];
    int edad;
};

int main(){
    int n;
    cout<<"Numero de personas: ";cin>>n;
    persona datos[n];
    for(int i=0;i<n;i++){
        cout<<"Nombre: ";cin>>datos[i].nombre;
        cout<<"DNI: ";cin>>datos[i].dni;
        cout<<"Edad: ";cin>>datos[i].edad;
    }
    float c=0,s=0,p;
    for(int i=0;i<n;i++){
        if(datos[i].edad>50){
            c++;
        }
        s=s+datos[i].edad;
    }
    p=s/n;
    cout<<"--------------------------------"<<endl;
    cout<<"Promedio de edades: "<<p<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"--Datos de personas ingresadas--"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Nombre: "<<datos[i].nombre<<endl;
        cout<<"DNI: "<<datos[i].dni<<endl;
        cout<<"Edad: "<<datos[i].edad<<endl;
    }
    return 0;
}