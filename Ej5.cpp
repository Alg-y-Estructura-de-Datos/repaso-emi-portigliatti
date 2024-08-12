#include <iostream>
using namespace std;

//Crear una clase calculadora, dicha clase debe tener los métodos sumar, restar,
//dividir, multiplicar que realizarán operaciones en dos propiedades A y B. En el
//método dividir verifique que el divisor no es 0. Si el divisor es 0, arroje una
//excepcion.

class calculadora{
    private:
        float A;
        float B;
    public:
    calculadora();
    calculadora(float, float);
    void seta(float);
    void setb(float);
    float geta();
    float getb();
    void sumar();
    void restar();
    void multiplicar();
    void dividir();
};

calculadora::calculadora(){
}

calculadora::calculadora(float a, float b){
    A=a;
    B=b;
}

void calculadora::seta(float a){
    A=a;
}

void calculadora::setb(float b){
    B=b;
}

float calculadora::geta(){
    return A;
}

float calculadora::getb(){
    return B;
}

void calculadora::sumar(){
    cout<<"La suma de "<<A<<"+"<<B<<" es igual a "<<A+B<<endl;
}

void calculadora::restar(){
    cout<<"La resta de "<<A<<"-"<<B<<" es igual a "<<A-B<<endl;
}

void calculadora::multiplicar(){
    cout<<"La multiplicacion de "<<A<<"*"<<B<<" es igual a "<<A*B<<endl;
}

void calculadora::dividir(){
    if(B==0){
        throw "No se puede dividir por 0.";
    }else{
        cout<<"La division de "<<A<<"/"<<B<<" es igual a "<<A/B<<endl;
    }
}

int main(){
    float a,b;
    int opcion;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>b;
    calculadora c(a,b);
    do{
        cout<<"Menu: "<<endl;
        cout<<"1. Sumar."<<endl;
        cout<<"2. Restar."<<endl;
        cout<<"3. Multiplicar."<<endl;
        cout<<"4. Dividir."<<endl;
        cout<<"5. Salir."<<endl;
        do{
            cout<<"Ingrese la opcion que desee: "<<endl;
            cin>>opcion;
        }while(opcion<1 || opcion>5);
        switch(opcion){
            case 1:
                c.sumar();
                break;
            case 2:
                c.restar();
                break;
            case 3:
                c.multiplicar();
                break;
            case 4:
                try{
                    c.dividir();
                }catch(const char* msg){
                    cerr<<msg<<endl;
                }
                break;
            case 5:
                cout<<"Saliendo..."<<endl;
                break;
        }
    }while(opcion!=5);
}





