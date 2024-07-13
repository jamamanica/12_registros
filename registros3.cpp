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
    int cumple;
    cout<<"-----------------------------------"<<endl;
    string mes[12]={"enero","febrero","marzo","abril","mayo","junio","julio","agosto","setiembre","octubre","noviembre","diciembre"};
    do{
        cout<<"Ingrese numero de mes: ";cin>>cumple;
        for(int i=0;i<n;i++){
            if(mes[cumple-1]==datos[i].mes){
                cout<<"--Personas que cumplen en ese mes--"<<endl;
                cout<<"Nombre: "<<datos[i].nombre<<endl;
                cout<<"Dia de nacimiento: "<<datos[i].dia<<endl;
                cout<<"Mes de nacimiento: "<<datos[i].mes<<endl;
                cout<<"Anio de nacimiento: "<<datos[i].anio<<endl;
                break;
            } 
        }
        cout<<"-----------------------------------"<<endl;
    }while(cumple!=0&&cumple<=12);
    return 0;
}