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
    return 0;
}