#include <iostream>
using namespace std;

void intercambiarJugos(float &jn, float &jm){
    float aux=jn;
    jn=jm;
    jm=aux;
}

int main() {

    float jugon, jugom;

    do{
        cout<<"Ingrese la cantidad de jugo de naranja: "<<endl;
        cin>>jugon;
    }while(jugon<0);

    do{
        cout<<"Ingrese la cantidad de jugo de manzana: "<<endl;
        cin>>jugom;

    }while(jugom<0);
    cout<<"Antes del intercambio: "<<endl;
    cout<<"Cantidad de jugo de naranja: "<<jugon<<endl;
    cout<<"Cantidad de jugo de manzana: "<<jugom<<endl;
    intercambiarJugos(jugon,jugom);
    cout<<"Despues del intercambio: "<<endl;
    cout<<"Cantidad de jugo de naranja: "<<jugon<<endl;
    cout<<"Cantidad de jugo de manzana: "<<jugom<<endl;

}
