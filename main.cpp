#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <cmath>
using namespace std;

float fr1 = 0;
float fr2 = 0;
float fr3 = 0;
float fr4 = 0;
float fr5 = 0;
float fr6 = 0;

float n1 = 0;
float n2 = 0;
float result = 0;

int op = 0;  

string op2 = "";

void fraccion();

void fraccion_suma();
void fraccion_resta();
void fraccion_mul();
void fraccion_div();

void semisuma();
void potencia();
void r_cua();
void r_cub();
void inv();
void base_10();
void cr_archivo();
void salida();

int main()
{
    //int op = 0;

    cout <<" Que desea hacer?" <<endl;
    cout <<" 1.Sumar fracciones" <<endl;
    cout <<" 2.Restar fracciones" <<endl;
    cout <<" 3.Multiplicar fracciones" <<endl;
    cout <<" 4.Dividir fracciones" <<endl;
    cout <<" 5.Hacer semisuma" <<endl;
    cout <<" 6.Hacer potencia" <<endl;
    cout <<" 7.Hacer raiz cuadrada " <<endl;
    cout <<" 8.Hacer raiz cubica" <<endl;
    cout <<" 9.Hacer fraccion inversa" <<endl;
    cout <<" 10.Calcular potencia con base 10" <<endl;
    cout <<" 11.Salir" <<endl;
    cout <<" ===> ";
    cin >> op;

    switch(op)
    {
        case 1:{
            fraccion();
        }
        break;
        case 2:{
            fraccion();
        }
        break;
        case 3:{
            fraccion();
        }
        break;
        case 4:{
            fraccion();
        }
        break;
        case 5:{
            semisuma();
        }
        break;
        case 6:{
            potencia();
        }
        break;
        case 7:{
            r_cua();
        }
        break;
        case 8:{
            r_cub();
        }
        break;
        case 9:{
            inv();
        }
        break;
        case 10:{
            base_10();
        }
        break;
        case 11:{
            salida();
        }
        break;
        default:{
            cout <<" Opcion incorrecta" <<endl;
            system("PAUSE");
        }
    }

    cout <<" Quiere guardar los datos en un archivo? (S/n) ";
    cin >> op2;
    if(op2 == "s" | op2 == "S" | op2 == "")
    {
        cr_archivo();
    }
    system("PAUSE");
    return 0;
}

void salida()
{
    cout <<" Saliendo ... " <<endl;
    exit(0);
}

void fraccion()
{
    switch(op)
    {
        case 1:{
            fraccion_suma();
        }
        break;
        case 2:{
            fraccion_resta();
        }
        break;
        case 3:{
            fraccion_mul();
        }
        break;
        case 4:{
            fraccion_div();
        }
        break;
        default:{
            exit(1);
        }
    }
}

void semisuma()
{
    cout <<" Cual es el primer termino?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el segundo termino?" <<endl;
    cout <<" ===> ";
    cin >> n2;

    result = (n1+n2)/2;

    cout <<" El resultado es " <<result <<endl;
}

void potencia()
{
    cout <<" Cual es la base?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual sera el exponente?" <<endl;
    cout <<" ===> ";
    cin >> n2;

    result = pow(n1, n2);

    cout <<" El resultado es " <<result <<endl;
}


void fraccion_mul()
{
    cout <<" Cual es el primer numerador?" <<endl;
    cout <<" ===> ";
    cin >> fr1;

    cout <<" Cual es el primer denominador?" <<endl;
    cout <<" ===> ";
    cin >> fr2;

    cout <<" Cual es el numerador de la segunda fraccion?" <<endl;
    cout <<" ===> ";
    cin >> fr3;

    cout <<" Cual es el denominador de la segunda fraccion?" <<endl;
    cout <<" ===> ";
    cin >> fr4;

    fr5 = fr1*fr3;
    fr6 = fr2*fr4;

    cout <<" El resutado es " <<fr5 <<"/" <<fr6 <<endl;
}


void fraccion_div()
{
    cout <<" Cual es el primer numerador?" <<endl;
    cout <<" ===> ";
    cin >> fr1;

    cout <<" Cual es el primer denominador?" <<endl;
    cout <<" ===> ";
    cin >> fr2;

    cout <<" Cual es el numerador de la segunda fraccion?" <<endl;
    cout <<" ===> ";
    cin >> fr3;

    cout <<" Cual es el denominador de la segunda fraccion?" <<endl;
    cout <<" ===> ";
    cin >> fr4;

    fr5 = fr1*fr4;
    fr6 = fr2*fr3;

    cout <<" El resultado es " <<fr5 <<"/" <<fr6 <<endl;
}


void fraccion_suma()
{
    cout <<" Cual es el primer numerador?" <<endl;
    cout <<" ===> ";
    cin >> fr1;

    cout <<" Cual es el primer denominador?" <<endl;
    cout <<" ===> ";
    cin >> fr2;

    cout <<" Cual es el numerador de la segunda fraccion?" <<endl;
    cout <<" ===> ";
    cin >> fr3;

    cout <<" Cual es el denominador de la segunda fraccion?" <<endl;
    cout <<" ===> ";
    cin >> fr4;

    if (fr2 != fr4)
    {
        cout <<" De momento no se hacer m.c.m. Intenta elegir otro denominador " <<endl;
        system("PAUSE");
        exit(1);
    }

    fr5 = fr1+fr3;
    fr6 = fr2;

    cout <<" El resutado es " <<fr5 <<"/" <<fr6 <<endl;
}


void fraccion_resta()
{
    cout <<" Cual es el primer numerador?" <<endl;
    cout <<" ===> ";
    cin >> fr1;

    cout <<" Cual es el primer denominador?" <<endl;
    cout <<" ===> ";
    cin >> fr2;

    cout <<" Cual es el numerador de la segunda fraccion?" <<endl;
    cout <<" ===> ";
    cin >> fr3;

    cout <<" Cual es el denominador de la segunda fraccion?" <<endl;
    cout <<" ===> ";
    cin >> fr4;

    if (fr2 != fr4)
    {
        cout <<" De momento no se hacer m.c.m. Intenta elegir otro denominador " <<endl;
        system("PAUSE");
        exit(1);
    }

    fr5 = fr1 - fr3;
    fr6 = fr2;

    cout <<" El resultado es " <<fr5 <<"/" <<fr6 <<endl;
}


void r_cua()
{
    cout <<" Cual es el numero?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    result = sqrt(n1);

    cout <<" El resultado es " <<result <<endl;
}


void r_cub()
{
    cout <<" Cual es el numero?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    result = cbrt(n1);

    cout <<" El resultado es " <<result <<endl;
}


void base_10()
{
    cout <<" Cual sera el exponente de la operacion?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    result = pow(10, n1);

    cout <<" El resultado es " <<result <<endl;
}


void inv()
{
    cout <<" Cual es el numero?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    result = 1/n1;

    cout <<" El resultado es " <<result <<endl;
}


void cr_archivo()
{
    string nm = "";

    cout <<" Cual sera el nombre del archivo?" <<endl;
    cout <<" Se le anadira '.txt' al final" <<endl;
    cout <<" ===> ";
    cin >> nm;
    nm = nm + ".txt";

    ofstream archivo;
    archivo.open(nm, ios::out);

    switch(op)
    {
        case 1:{
            archivo <<" Primera fraccion ===> " <<fr1 <<"/" <<fr2 <<endl;
            archivo <<" Segunda fraccion ===> " <<fr3 <<"/" <<fr4 <<endl;
            archivo <<" Resultado ===> " <<fr5 <<"/" <<fr6 <<endl;
        }
        break;
        case 2:{
            archivo <<" Primera fraccion ===> " <<fr1 <<"/" <<fr2 <<endl;
            archivo <<" Segunda fraccion ===> " <<fr3 <<"/" <<fr4 <<endl;
            archivo <<" Resultado ===> " <<fr5 <<"/" <<fr6 <<endl;
        }
        break;
        case 3:{
            archivo <<" Primera fraccion ===> " <<fr1 <<"/" <<fr2 <<endl;
            archivo <<" Segunda fraccion ===> " <<fr3 <<"/" <<fr4 <<endl;
            archivo <<" Resultado ===> " <<fr5 <<"/" <<fr6 <<endl;
        }
        break;
        case 4:{
            archivo <<" Primera fraccion ===> " <<fr1 <<"/" <<fr2 <<endl;
            archivo <<" Segunda fraccion ===> " <<fr3 <<"/" <<fr4 <<endl;
            archivo <<" Resultado ===> " <<fr5 <<"/" <<fr6 <<endl;
        }
        break;
        case 5:{
            archivo <<" Primer termino ===> " <<n1 <<endl;
            archivo <<" Segundo termino ===> " <<n2 <<endl;
            archivo <<" Resultado ===> " <<result <<endl;
        }
        break;
        case 6:{
            archivo <<" Base ===> " <<n1 <<endl;
            archivo <<" Exponente ===> " <<n2 <<endl;
            archivo <<" Resultado ===> " <<result <<endl;
        }
        break;
        case 7:{
            archivo <<" Primer numero ===> " <<n1 <<endl;
            archivo <<" Resultado ===> " <<result <<endl;
        }
        break;
        case 8:{
            archivo <<" Primer numero ===> " <<n1 <<endl;
            archivo <<" Resultado ===> " <<result <<endl;
        }
        break;
        case 9:{
            archivo <<" Denominador ===> " <<n1 <<endl;
            archivo <<" Resultado ===> " <<result <<endl;
        }
        case 10:{
            archivo <<" Exponente ===> " <<n1 <<endl;
            archivo <<" Resultado ===> " <<result <<endl;
        }
        case 11:{
            exit(1);
        }
        break;
        default:{
            exit(1);
        }
    }

    if(archivo.fail())
    {
        cout <<" No se ha podido crear el archivo. La app se cerrara" <<endl;
        system("PAUSE");
        exit(1);
    }
    archivo.close();
    cout <<" Archivo creado correctamente" <<endl;
    system("PAUSE");
}