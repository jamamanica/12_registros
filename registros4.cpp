#include<iostream>
using namespace std;

struct atletas{
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};

int main(){
    int n;
    cout<<"Numero de atletas: ";cin>>n;
    atletas datos[n];
    for(int i=0;i<n;i++){
            cout<<"Nombre: ";cin>>datos[i].nombre;
            cout<<"Pais: ";cin>>datos[i].pais;
            cout<<"Disciplina: ";cin>>datos[i].disciplina;
            cout<<"Medallas: ";cin>>datos[i].medallas;
    }
    return 0;
}