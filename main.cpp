/* Ariana Paola Rivera Alejandro
número de estudiante: 801-24-4953
username: ari-pao
Asignación 2: Suma de dos fracciones
Colaboraciones:
n/a
*/

//cabecera
#include<iostream>
using namespace std;

//incializar función
int main(){

  //cuerpo de la función (código para sumar dos fracciones)

  //desplegar mensaje a pantalla que contenga propósito (sumar dos fracciones)
  cout << "Este programa suma dos fracciones."<<endl;

    //desplegar a pantalla mensaje para pedir numerador de la primera fracción
    cout << "Entre el numerador de la 1ra fracción: ";
    //incializar variable del primer numerador
    int numerator_1;
    //ingresar el numerador
    cin >> numerator_1;


    //desplegar a pantalla mensaje para pedir denominador de la primera fracción
    cout << "Entre el denominador de la 1ra fracción: ";
    //incializar variable del primer denominador
    int denominator_1;
    //ingresar el denominador
    cin >> denominator_1;

    //desplegar a pantalla mensaje para pedir numerador de la segunda fracción
    cout << "Entre el numerador de la 2nda fracción: ";
    //incializar variable del segundo numerador
    int numerator_2;
    //ingresar el numerador
    cin >> numerator_2;


     //desplegar a pantalla mensaje para pedir denominador de la segunda fracción   
    cout << "Entre el denominador de la 2nda fracción: ";
    //incializar variable del segundo denominador
    int denominator_2;
    //ingresar el denominador
    cin >> denominator_2;

  //formula: ad + bc /bd
  //calculo entre el primer numerador por el segundo denominador 
  // más el primer denominador por el segundo numerador
  int result_num = (numerator_1 * denominator_2) + (denominator_1 * numerator_2);

  //calculo entre el primer denominador por el segundo denominador
  int result_den = (denominator_1 * denominator_2);

  //despeglar a pantalla el resultado entre ambos calculos
  cout << "La suma es: " << result_num << "/" << result_den <<endl;

  //mensaje de agradecimiento
  cout<< "¡Gracias por participar!"<<endl;

  return 0;
}
//fin del programa
