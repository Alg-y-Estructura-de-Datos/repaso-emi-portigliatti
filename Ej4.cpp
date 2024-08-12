#include <iostream>
using namespace std;

float sumarEnteros(float num1,float num2){
    float suma=0;
    suma=num1+num2;
    return suma;   
}

float calcularAreaCirculo(float r){
    return 3.1416*(r*r);
}

float calcularPotencia(float b, float e){
    float pot=1;
    if(e==0){
        return 1;
    }else if(e>0){
        for(int i=1; i<=e; i++){
            pot=pot*b;
        }
        return pot;
    }
}

int main(){

    int opcion;
    float n1,n2, r, b, e;

    do{
        cout<<"Menu: "<<endl;
        cout<<"1. Sumar numeros."<<endl;
        cout<<"2. Calcular el area de un circulo."<<endl;
        cout<<"3. Calcular la potencia de un numero."<<endl;
        cout<<"4. Salir."<<endl;

        do
        {
            cout<<"Ingrese la opcion que desee: "<<endl;
            cin>>opcion;
        } while (opcion<1);
    
        switch(opcion){
            case 1:
                cout<<"Ingrese un numero entero: "<<endl;
                cin>>n1;
                cout<<"Ingrese otro numero entero: "<<endl;
                cin>>n2;
                cout<<"La suma de "<<n1<<"+"<<n2<<" es igual a "<<sumarEnteros(n1,n2)<<endl;
                break;
            case 2:
                cout<<"Ingrese el radio del circulo: "<<endl;
                cin>>r;
                cout<<"El area del circulo es: "<<calcularAreaCirculo(r)<<endl;
                break;
            case 3:
                cout<<"Ingrese la base: "<<endl;
                cin>>b;
                cout<<"Ingrese el exponente: "<<endl;
                cin>>e;
                cout<<"La potencia de "<<b<<" elevado a "<<e<<" es: "<<calcularPotencia(b,e)<<endl;
                break;
            case 4:
                cout<<"Saliendo..."<<endl;
                break;
            default:
                cout<<"Opcion invalida."<<endl;
                break;
        }
    }while(opcion!=4);
}