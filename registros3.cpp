#include<iostream>
using namespace std;

struct persona{
    string nombre;
    int dia;
    string mes;
    int anio;
};

int main(){
    int n;
    cout<<"Numero de personas: ";cin>>n;
    persona datos[n];
    for(int i=0;i<n;i++){
        cout<<"Nombre: ";cin>>datos[i].nombre;
        cout<<"Dia de nacimiento: ";cin>>datos[i].dia;
        cout<<"Mes de nacimiento: ";cin>>datos[i].mes;
        cout<<"Anio de nacimiento: ";cin>>datos[i].anio;
    }
    return 0;
}