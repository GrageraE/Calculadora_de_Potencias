#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <wchar.h>
#include <locale>
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

int base1 = 0;
int exp1 = 0;
int base2 = 0;
int exp11 = 0;
int exp111 = 0;

int factorial = 1;

int op = 0;  
int op_pot = 0;
int op_11 = 0;

string op2 = "";
string op_rep = "";

void fraccion();

void fraccion_suma();
void fraccion_resta();
void fraccion_mul();
void fraccion_div();


void op_potencia();

void mul_pot();
void div_pot();
void mul_pot_dis();
void div_pot_dis();

void potencia_potencia();
void potencia_potencia_2();
void potencia_potencia_3();


void semisuma();
void potencia();
void r_cua();
void r_cub();
void inv();
void base_10();
void fact();
void pi_por();
void e_por();
void pi_el();
void e_el();
void cr_archivo();
void salida();
void changelog();

int main()
{
    //int op = 0;
    setlocale(LC_ALL, "");

    do{
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
    cout <<" 11.Factorial de un numero" <<endl;
    cout <<" 12.Multiplicar Pi por ... " <<endl;
    cout <<" 13.Multiplicar e por ... " <<endl;
    cout <<" 14.Elevar Pi a ... " <<endl;
    cout <<" 15.Elevar e a ... " <<endl;
    cout <<" 16.Multiplicar potencias " <<endl;
    cout <<" 17.Dividir potencias " <<endl;
    cout <<" 18.Potencia de una potencia" <<endl;
    cout <<" 19.Ver lista de cambios " <<endl;
    cout <<" 20.Salir" <<endl;
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
            fact();
        }
        break;
        case 12:{
            pi_por();
        }
        break;
        case 13:{
            e_por();
        }
        break;
        case 14:{
            pi_el();
        }
        break;
        case 15:{
            e_el();
        }
        break;
        case 16:{
            op_potencia();
        }
        break;
        case 17:{
            op_potencia();
        }
        break;
        case 18:{
            potencia_potencia();
        }
        break;
        case 19:{
            changelog();
        }
        break;
        case 20:{
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

    cout <<" Quiere hacer otra operacion mas? (S/n) ";
    cin >> op_rep; 
    if(op_rep == "s" || op_rep == "S")
    {
        cout <<endl;
    }
    }
    while (op_rep == "s" || op_rep == "S");

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


void fact()
{
    //int factorial = 1;

    cout <<" Cual es el numero?" <<endl;
    cout <<" ===> ";
    cin >> n1;


    for(int i = 1; i <= n1; i++)
    {
        factorial = factorial*i;
    }
    cout <<" El factorial es " <<factorial <<endl;
}


void pi_por()
{
    cout <<" Escriba el numero para multiplicar" <<endl;
    cout <<" ===> ";
    cin >> n1;

    result = 3.14*n1;
    cout <<" El resultado es " <<result <<endl;
}


void e_por()
{
    cout <<" Escriba el numero para multiplicar" <<endl;
    cout <<" ===> ";
    cin >> n1;

    result = 2.71*n1;
    cout <<" El resultado es " <<result <<endl;
}


void pi_el()
{
    cout <<" Escriba el exponente para elevar" <<endl;
    cout <<" ===> ";
    cin >> n1;

    result = pow(3.14, n1);
    cout <<" El resultado es " <<result <<endl;
}

void e_el()
{
    cout <<" Escriba el numero para elevar" <<endl;
    cout <<" ===> ";
    cin >> n1;

    result = pow(2.71, n1);
    cout <<" El resultado es " <<result <<endl;
}


void op_potencia()
{
    cout <<" Di la primera base" <<endl;
    cout <<" ===> ";
    cin >> base1;

    cout <<" Di el primer exponente de dicha potencia" <<endl;
    cout <<" ===> ";
    cin >> exp1;

    cout <<" Di la base de la segunda potencia" <<endl;
    cout <<" ===> ";
    cin >> base2;

    cout <<" Di el exponente de dicha potencia " <<endl;
    cout <<" ===> ";
    cin >> exp11;

    if(base1 != base2 && exp1 != exp11)
    {
        cout <<" De momento no se pueden hacer operaciones con distintas bases y exponentes" <<endl;
        system("PAUSE");
        exit(1);
    }
    

    switch(op)
    {
        case 16:{
            if(exp1 == exp11 && base1 == base2)
            {
                int op_11 = 0;
                cout <<" Se han detectado que todos los campos son iguales?" <<endl;
                cout <<" Como desea calcular la poetncia?" <<endl;
                cout <<" 1.Sumando exponentes " <<endl;
                cout <<" 2.Multiplicando bases " <<endl;
                cout <<" ===> ";
                cin >> op_11;
                switch(op_11)
                {
                    case 1:{
                        mul_pot_dis();
                        return;
                    }
                    break;
                    case 2:{
                        mul_pot();
                        return;
                    }
                    break;
                    default:{
                        cout <<" Opcion incorrecta" <<endl;
                        system("PAUSE");
                        exit(1);
                    }
                }
            }

            if (exp1 == exp11)
            {
                mul_pot();
            }
            if(base1==base2)
            {
                mul_pot_dis();
            }
        }
        break;
        case 17:{

            if(exp1 == exp11 && base1 == base2)
            {
                //int op_11 = 0;
                cout <<" Se han detectado que todos los campos son iguales" <<endl;
                cout <<" Como desea calcular la poetncia?" <<endl;
                cout <<" 1.Restando exponentes " <<endl;
                cout <<" 2.Dividiendo bases " <<endl;
                cout <<" ===> ";
                cin >> op_11;
                switch(op_11)
                {
                    case 1:{
                        div_pot_dis();
                        return;
                    }
                    break;
                    case 2:{
                        div_pot();
                        return;
                    }
                    break;
                    default:{
                        cout <<" Opcion incorrecta" <<endl;
                        system("PAUSE");
                        exit(1);
                    }
                }
            }

            if(exp1 == exp11)
            {
                div_pot();
            }
            if(base1==base2)
            {
                div_pot_dis();
            }
        }
    }
}

void mul_pot()
{
    result = base1*base2;
    cout <<" El resultado es " <<result <<" elevado a " <<exp1 <<endl;
}

void div_pot()
{
    result = base1/base2;
    cout <<" El resultado es " <<result <<" elevado a " <<exp1 <<endl;
}

void mul_pot_dis()
{
    result = exp1+exp11;
    cout <<" El resultado es " <<base1 <<" elevado a " <<result <<endl;
}

void div_pot_dis()
{
    result = exp1-exp11;
    cout <<" El resultado es " <<base1 <<" elevado a " <<result <<endl;
}


void potencia_potencia()
{
    //int op_pot = 0;

    cout <<" De cuantos exponentes vamos a multiplicar?" <<endl;
    cout <<" 1.- 2 Exponentes" <<endl;
    cout <<" 2.- 3 Exponentes" <<endl;
    cout <<" ===> ";
    cin >> op_pot;
    switch(op_pot)
    {
        case 1:{
            potencia_potencia_2();
        }
        break;
        case 2:{
            potencia_potencia_3();
        }
        break;
        default:{
            cout <<" Opcion incorrecta" <<endl;
            system("PAUSE");
            exit(1);
        }
    }
}

void potencia_potencia_2()
{
    cout <<" Cual es la base?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el primer exponente?" <<endl;
    cout <<" ===> ";
    cin >> exp1;

    cout <<" Cual es el segundo exponente?" <<endl;
    cout <<" ===> ";
    cin >> exp11;

    result = exp1*exp11;
    cout <<" El resultado es " <<n1 <<" elevado a " <<result <<endl;
}

void potencia_potencia_3()
{
    cout <<" Cual es la base?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el primer exponente?" <<endl;
    cout <<" ===> ";
    cin >> exp1;

    cout <<" Cual es el segundo exponente?" <<endl;
    cout <<" ===> ";
    cin >> exp11;

    cout <<" Cual es el tercer exponente?" <<endl;
    cout <<" ===> ";
    cin >> exp111;

    result = exp1*exp11*exp111;
    cout <<" El resultado es " <<n1 <<" elevado a " <<result <<endl;
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
        break;
        case 10:{
            archivo <<" Exponente ===> " <<n1 <<endl;
            archivo <<" Resultado ===> " <<result <<endl;
        }
        break;
        case 11:{
            archivo <<" Numero ===> " <<n1 <<endl;
            archivo <<" Resultado ===> " <<factorial <<endl;
        }
        break;
        case 12:{
            archivo <<" Numero ===> " <<n1 <<endl;
            archivo <<" Resultado ===> " <<result <<endl;
        }
        break;
        case 13:{
            archivo <<" Numero ===> " <<n1 <<endl;
            archivo <<" Resultado ===> " <<result <<endl;
        }
        break;
        case 14:{
            archivo <<" Exponente ===> " <<n1 <<endl;
            archivo <<" Resultado ===> " <<result <<endl;
        }
        break;
        case 15:{
            archivo <<" Exponente ===> " <<n1 <<endl;
            archivo <<" Resultado ===> " <<result <<endl;
        }
        break;
        case 16:
        case 17:{
            archivo <<" Base 1 ===> " <<base1 <<endl;
            archivo <<" Exponente 1 ===> " <<exp1 <<endl;
            archivo <<" Base 2 ===> " <<base2 <<endl;
            archivo <<" Exponente 2 ===> " <<exp11 <<endl;
            //Here is an other bug
            /*if(op_11 == 1)
            {
                archivo <<" Resultado: " <<base1 <<" elevado a " <<result <<endl;
            }
            if(op_11 == 2)
            {
                archivo <<" Resultado: " <<result <<" elevado a " <<exp1 <<endl;
            }
            */
            if(base1 != base2)
            {
                archivo <<" Resultado: " <<result <<" elevado a " <<exp1 <<endl;
            }
            if(exp1 != exp11)
            {
                archivo <<" Resultado: " <<base1 <<" elevado a " <<result <<endl;
            }
        }
        break;
        case 18:{
            archivo <<" Base: " <<n1 <<endl;
            archivo <<" Exponente 1: " <<exp1 <<endl;
            archivo <<" Expoente 2: " <<exp11 <<endl;
            if(op_pot = 2)
            {
                archivo <<" Exponente 3: " <<exp111 <<endl;
            }
            archivo <<" Resultado: " <<n1 <<" elevado a " <<result <<endl;
        }
        break;
        case 19:{
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


void changelog()
{
    setlocale(LC_ALL, "");
    ifstream lista;
    lista.open("changelog.txt", ios::in);
    if(lista.fail())
    {
        cout <<" No se encuentra el changelog.txt. Debes de descargarlo de GitHub " <<endl;
        system("PAUSE");
        exit(1);
    }
    while(!lista.eof())
    {
        string texto;
        getline(lista, texto);
        cout <<texto <<endl;
    }
    lista.close();
    cout <<endl;
    system("PAUSE");
    salida();
}
