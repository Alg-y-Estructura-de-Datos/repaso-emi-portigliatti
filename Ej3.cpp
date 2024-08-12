#include <iostream>
using namespace std;


void marcaAsiento(bool *asiento){
    *asiento=true;
}

int main() {


    int n;
    cout<<"Ingrese la cantidad de asientos: "<<endl;
    cin>>n;
    bool asientos[n]={false};
    int asientoElegido;

    cout<<"Estado inicial de los asientos: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Asiento "<<i+1<<": "<<(asientos[i] ? "Reservado" : "Libre")<<endl;
    }
    

    do{
        cout<<"Ingrese el numero de asiento que desea reservar: "<<endl;
        cin>>asientoElegido;
    }while(asientoElegido<0 || asientoElegido>=n);


    marcaAsiento(&asientos[asientoElegido-1]);
    cout<<"Estado de los asientos luego de la reserva: "<<endl;
    for(int i=0; i<n; i++){
        cout<<"Asiento "<< i+1<<": "<<(asientos[i] ? "Reservado" : "Libre")<<endl;
    }
    cout<<endl;


}
