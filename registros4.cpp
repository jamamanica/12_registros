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
    string pais,name;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Nombra un pais: ";cin>>pais;
    int mayor=0;
    for(int i=0;i<n;i++){
        if(datos[i].pais==pais){
            cout<<"Nombre: "<<datos[i].nombre<<endl;
            cout<<"Pais: "<<datos[i].pais<<endl;
            cout<<"Disciplina: "<<datos[i].disciplina<<endl;
            cout<<"Medallas: "<<datos[i].medallas<<endl;
            if(datos[i].medallas>mayor){
                mayor=datos[i].medallas;
                name=datos[i].nombre;
            }
        }
    }
    cout<<"------------------------------------------------"<<endl;
    cout<<"--> El atleta con mayor # de medallas en "<<pais<<" es: "<<name<<endl;
    cout<<"------------------------------------------------"<<endl;
    return 0;
}