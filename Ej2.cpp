#include <iostream>
using namespace std;

int main(){

    //factorial

    int n, prod=1;

    cout<<"Ingrese un numero que desee calcular su factorial: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        prod=prod*i;
    }


    cout<<"El factorial del numero "<<n<<" es: "<<prod<<endl;
    
}