#include <iostream>
#include <string>
using namespace std;

class CtaBanc {
private:
    string nombre;
    double saldo;

public:
    void setnombre(string n){
        nombre = n;
    }

    string getnombre (){
        return nombre
    }

    void setsaldo(double s){
        saldo=s;
    }

    double getsaldo (){
        return saldo
    }

    void setdeposita(double d){
        deposita=d;
    }

    double getdeposita (){
        return deposita
    }

    bool setretira(double r){
        retira=r;
    }

    double getretira (){
        return retira
    }

    void deposita() {
        cout << "Se ha depositado:" << endl;
    }

    void retira() {
        cout << "Se ha retirado" << endl;
    }

    void muestra() {
        cout << "Se muestra" << endl;
    }
};

int main() {
    
    string nombre;
    double saldo;

    CtaBanc tarjeta;

    tarjeta.deposita();
    tarjeta.retira();
    tarjeta.muestra();

    cout<<"Ingresa el nombre de la tarjeta: \n";
	cin>>nombreUser;
	
	cout<<"Ingresa el saldo de la tarjeta: \n";
	cin>>saldoUser;

    tarjeta.setnombre(nombreUser); // Establecer el nombre
    tarjeta.setsaldo(saldoUser); // Establecer el saldo
    tarjeta.setdeposita(); // Establecer el deposito
    tarjeta.setretira(); // Establecer lo retirado 

    cout << "nombre: " << tarjeta.getnombre() << endl;
    cout << "saldo: " << tarjeta.getsaldo() << endl;
    cout << "deposita: " << tarjeta.getdeposita() << endl;
    cout << "retira: " << tarjeta.getretira() << endl;

    return 0;
}