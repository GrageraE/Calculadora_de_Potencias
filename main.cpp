#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <cmath>  //Operaciones matematicas
#include <algorithm>  //Maximo/Minimo
//Para caracteres espaciales 
#include <wchar.h>
#include <locale>
using namespace std;  //Las palabras magicas con las que funcionan las librerias

//Variables de las fracciones 
int fr1 = 0;
int fr2 = 0;
int fr3 = 0;
int fr4 = 0;
int fr5 = 0;
int fr6 = 0;
int fr7 = 0;
int fr8 = 0;
//Variables que almacenan entradas del usuario
float n1 = 0;
float n2 = 0;
float n3 = 0;
float result = 0;
float result2 = 0;
int m1 = 0;
int m2 = 0;
//Variables para operaciones con potencias 
int base1 = 0;
int exp1 = 0;
int base2 = 0;
int exp11 = 0;
int exp111 = 0;

int factorial = 1; //Almacena el resultado del factorial (x!)

//Variables otras operaciones:
double ot1 = 0;
double ot2 = 0;
double ot3 = 0;  //Por si se necesitan en vez de 1, 2 inputs y para el elevado a -1
double ot4 = 0;

//Variables de seleccion de opciones numericas:
int op = 0;  
int op_pot = 0;
int op_11 = 0;
int op_sen1 = 0;
int op_sen2 = 0;
int op_ot = 0;
int op_ot3 = 0; //Esta es para el "es divisible por..."

string op2 = ""; //Variables que almacenan las opciones del usuario en formato de caracter
string op_rep = "";
string op_pot2 = "";
string op_porcen = "";
string op_ot2 = "";

//Operaciones con fracciones
void fraccion();

void fraccion_suma();
void fraccion_resta();
void fraccion_mul();
void fraccion_div();

//Operaciones con potencias 
void op_potencia();

void mul_pot();
void div_pot();
void mul_pot_dis();
void div_pot_dis();
//Potencia de una potencia...
void potencia_potencia();
void potencia_potencia_2();
void potencia_potencia_3();
void potencia_potencia_result();

//Operaciones sencillas
void op_sen();

void sumar();
void restar();
void mul();
void div();
void sumar3();
void restar3();
void mul3();
//Operaciones con procentajes:
void porcen();  //Calcular un porcentaje
void porcen2();  
void porcen3();
void porcen4();
void iva();
void div_mod();

int mcd();  //Maximo comun divisor
int mcm();  //Minimo comun multiplo

//Operaciones con arcos/Notaciones científicas 
void ot();

void tangente();
void arco_tan();
void hipertan();
void cose();
void arco_cose();
void hipercose();
void not_mul();
void not_div();
void es_divisor();
int es_divisor_2();
int es_divisor_3();
int es_divisor_4();
int es_divisor_6();
int es_divisor_7();
int es_divisor_8();
int es_divisor_9();
int es_divisor_11();

void semisuma();  //(a+b)/2
void potencia();
void r_cua();
void r_cub();
void inv();  //n elevado a -1 / 1 partido de  n
void base_10();
void fact();  //x!
void pi_por(); 
void e_por();
void pi_el();
void e_el();

//Monomios:
void menuMonomios();
int opMonomio = 0;
void sumaMonomios();
void restarMonomios();
void multiplicarMonomios();
void dividirMonomios();
void potenciaMonomios();
//Variables monomios:
float ce1 = 0;  //Primer monomio
int pl1 = 0;
float ce2 = 0;  //Segundo monomio
int pl2 = 0;
float ce3 = 0;  //Tercer monomio
int pl3 = 0;
/*
    Ce ===> Coeficiente (numeros, pueden ser flotantes)
    Pl ===> Parte literal (letras, en este caso, exponentes de dichas letras [lo almacenan])
    //End
*/

//Otras operaciones 
void op_ot_9();
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
    cout <<" 19.Operaciones mas sencillas" <<endl;
    cout <<" 20.Hacer mcd" <<endl;
    cout <<" 21.Hacer mcm" <<endl;
    cout <<" 22.Hacer otras operaciones" <<endl;
    cout <<" 23.Hacer operaciones con monomios (y polinomios)" <<endl;
    cout <<" 24.Salir " <<endl;
    cout <<" 25.Ver lista de cambios" <<endl;
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
            op_sen();
        }
        break;
        case 20:{
            cout <<" Digite el primer numero " <<endl;
            cout <<" ===> ";
            cin >> n1;
            cout <<" Digite el segundo numero: " <<endl;
            cout <<" ===> ";
            cin >> n2;
            result = mcd();
            cout <<" El mcd es " <<result <<endl;

        }
        break;
        case 21:{
            cout <<" Digite el primer numero " <<endl;
            cout <<" ===> ";
            cin >> n1;
            cout <<" Digite el segundo numero: " <<endl;
            cout <<" ===> ";
            cin >> n2;
            result = mcm();
            cout <<" El mcm es " <<result <<endl;

        }
        break;
        case 22:{
            ot();
        }
        break;
        case 23:{
            menuMonomios();
        }
        break;
        case 24:{
            salida();
        }
        break;
        case 25:{
            changelog();
        }
        break;
        default:{
            cout <<" Opcion incorrecta" <<endl;
            system("PAUSE");
        }
    }

    if(op == 18)
    {
        cout <<" Quiere saber el resultado? (S/n) " <<endl;
        cout <<" ===> ";
        cin >> op_pot2;
        if(op_pot2 == "s" || op_pot2 == "S")
        {
            potencia_potencia_result();
        }
    }

    if(op_ot <= 6 && op_ot > 0)
    {
        cout <<" Quiere hacer la inversa del resultado? (S/n) ";
        cin >> op_ot2;
        if(op_ot2 == "S" || op_ot2 == "s")
        {
            ot3 = 1/ot2;
            cout <<" El resultado elevado a -1 es " <<ot3 <<endl;
        }
    }

    if(op_ot==9)  //Esto es para que no ejeute lo siguiente si la variable op_ot == 9
    {
        op_ot_9();  //Mas detalles en la funcion
    }
    else
    {
        //A partir de aquí no se debe de poner más condicionales...
        cout <<" Quiere guardar los datos en un archivo? (S/n) ";
        cin >> op2;
        if(op2 == "s" | op2 == "S" | op2 == "")
        {
            cr_archivo();
        }
    }

    if(op_ot==9)
    {
        //Aqui no va a hacer NADA
    }
    else
    {
        cout <<" Quiere hacer otra operacion mas? (S/n) ";
        cin >> op_rep; 
        if(op_rep == "s" || op_rep == "S")
        {
            cout <<endl;
        }
    }

    }  //Cuidado con esta parte: hay un ciclo do-while, el codigo podría ser "ambiguo"...
    while (op_rep == "s" || op_rep == "S");

    system("PAUSE");
    return 0;
}

void salida()
{
    cout <<" Saliendo ... " <<endl;
    exit(0);
}

void op_sen()
{
    cout <<" Que operacion desea hacer?" <<endl;
    cout <<" 1.Sumar " <<endl;
    cout <<" 2.Restar" <<endl;
    cout <<" 3.Multiplicar " <<endl;
    cout <<" 4.Dividir" <<endl;
    cout <<" 5.Calcular un porcentaje" <<endl;
    cout <<" 6.Calcular el porcentaje de una fraccion" <<endl;
    cout <<" 7.Calcular el IVA (21 por ciento)" <<endl;
    cout <<" 8.Hacer division con modulo (mostrar resto) " <<endl;
    cout <<" 9.Sumar un procentaje" <<endl;
    cout <<" 10.Restar un porcentaje" <<endl;
    cout <<" ===> ";
    cin >> op_sen1;
    
    if(op_sen1 == 4)
    {
        div();
        return;
    }
    if(op_sen1 == 8)
    {
        div_mod();
        return;
    }

    if(op_sen1 == 5)
    {
        porcen();
        return;
    }
    if(op_sen1 == 6)
    {
        porcen2();
        return;
    }
    if(op_sen1 == 9)
    {
        porcen3();
        return;
    }
    if(op_sen1 == 10)
    {
        porcen4();
        return;
    }
    if(op_sen1 == 7)
    {
        iva();
        return;
    }
    cout <<" De cuantos factores seran?" <<endl;
    cout <<" 1.De dos factores" <<endl;
    cout <<" 2.De tres factores" <<endl;
    cout <<" ===> ";
    cin >> op_sen2;

    if(op_sen2 > 2)
    {
        cout <<" Opcion incorrecta" <<endl;
        system("PAUSE");
        exit(1);
    }

    switch(op_sen1)
    {
        case 1:{
            if(op_sen2 == 1)
            {
                sumar();
            }
            else{
                sumar3();
            }
        }
        break;
        case 2:{
            if(op_sen2 == 1)
            {
                restar();
            }
            else{
                restar3();
            }
        }
        break;
        case 3:{
            if(op_sen2 == 1)
            {
                mul();
            }
            else{
                mul3();
            }
        }
        break;
        default:{
            cout <<" Opcion incorrecta" <<endl;
            system("PAUSE");
            exit(1);
        }
    }
}   

void sumar()
{
    cout <<" Cual es el primer numero?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el segundo numero?" <<endl;
    cout <<" ===> ";
    cin >> n2;

    result = n1+n2;
    cout <<" El resultado es " <<result <<endl;
}
void sumar3()
{
    cout <<" Cual es el primer numero?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el segundo numero?" <<endl;
    cout <<" ===> ";
    cin >> n2;

    cout <<" Cual es el tercer numero?" <<endl;
    cout <<" ===> ";
    cin >> n3;

    result = n1+n2+n3;
    cout <<" El resultado es " <<result <<endl;
}

void restar()
{
    cout <<" Cual es el primer numero?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el segundo numero?" <<endl;
    cout <<" ===> ";
    cin >> n2;

    result = n1-n2;
    cout <<" El resultado es " <<result <<endl;
}
void restar3()
{
    cout <<" Cual es el primer numero?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el segundo numero?" <<endl;
    cout <<" ===> ";
    cin >> n2;

    cout <<" Cual es el tercer numero?" <<endl;
    cout <<" ===> ";
    cin >> n3;

    result = n1-n2-n3;
    cout <<" El resultado es " <<result <<endl;
}

void mul()
{
    cout <<" Cual es el primer numero?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el segundo numero?" <<endl;
    cout <<" ===> ";
    cin >> n2;
    
    result = n1*n2;
    cout <<" El resultado es " <<result <<endl;
}
void mul3()
{
    cout <<" Cual es el primer numero?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el segundo numero?" <<endl;
    cout <<" ===> ";
    cin >> n2;

    cout <<" Cual es el tercer numero?" <<endl;
    cout <<" ===> ";
    cin >> n3;

    result = n1*n2*n3;
    cout <<" El resultado es " <<result <<endl;
}

void div()
{
    cout <<" Cual es el primer numero?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el segundo numero?" <<endl;
    cout <<" ===> ";
    cin >> n2;

    result = n1/n2;
    cout <<" El resultado es " <<result <<endl;
}

void div_mod()
{
    string op_m = "";
    cout <<" Cual es el primer numero?" <<endl;
    cout <<" ===> ";
    cin >> m1;

    cout <<" Cual es el segundo numero?" <<endl;
    cout <<" ===> ";
    cin >> m2;
    
    result = m1 % m2;
    cout <<" El resultado es " <<result <<endl;
    cout <<" Quieres saber cual es resultado de la division? (S/n) ";
    cin >> op_m;
    if(op_m == "s" || op_m == "S")
    {
        result2 = m1/m2;
        cout <<" El resultado de la division es " <<result2 <<endl;
        if(result2 == 0)
        {
            cout <<" El resultado de la division es decimal." <<endl;
        }
    }
}

void porcen()
{
    cout <<" Cual es el numero del cual se debe coger su porcentaje?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el porcentaje?" <<endl;
    cout <<" ===> ";
    cin >> n2;

    result = (n1*n2)/100;
    cout <<" El " <<n2 <<" por ciento de " <<n1 <<" es " <<result <<endl;
}
void porcen2()
{
    cout <<" Cual es el numero base?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el otro numero?" <<endl;
    cout <<" ===> ";
    cin >> n2;
    if(n2 > n1)
    {
        cout <<" El segundo numero es mas grande que el primero." <<endl;
        cout <<" Por lo que el porciento sera mas alto que 100. Seguro que quieres continuar? (S/n) ";
        cin >> op_porcen;
        if(op_porcen == "n")
        {
            cout <<" La app se cerrara" <<endl;
            system("PAUSE");
            exit(0);
        }
    }

    result = (n2*100)/n1;
    cout <<" El resultado es el " <<result <<" por ciento de " <<n1 <<endl;
}

void porcen3()
{
    cout <<" Cual es el numero no porcentaje?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el procentaje que quieres sumar?" <<endl;
    cout <<" ===> ";
    cin >> n2; 

    result = (n1*n2)/100;
    result = n1+result;
    cout <<" El resultado es " <<result <<endl;
}

void porcen4()
{
    cout <<" Cual es el numero no porcentaje?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Cual es el procentaje que quieres restar?" <<endl;
    cout <<" ===> ";
    cin >> n2; 

    result = (n1*n2)/100;
    result = n1-result;
    cout <<" El resultado es " <<result <<endl;
}

void iva()
{
    cout <<" Cual es el precio? (en euros) " <<endl;
    cout <<" ===> ";
    cin >> n1;

    result = (n1*21)/100;
    result = n1-result;
    cout <<" El resultado es " <<result <<endl;
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
    cin >> fr3;

    cout <<" Cual es el primer denominador?" <<endl;
    cout <<" ===> ";
    cin >> fr1;

    cout <<" Cual es el numerador de la segunda fraccion?" <<endl;
    cout <<" ===> ";
    cin >> fr4;

    cout <<" Cual es el denominador de la segunda fraccion?" <<endl;
    cout <<" ===> ";
    cin >> fr2;

    if (fr2 != fr1)
    {
        n1 = fr1;
        n2 = fr2;
        fr5 = mcm(); //Este valor será el común denominador
        //Numeradores:
        fr6 = fr5/fr1*fr3; //Numerador numero 1
        fr7 = fr5/fr2*fr4; //Numerador numero 2
        result = fr6+fr7; //La suma de los numeradores 
        cout <<" El resultado es " <<result <<"/" <<fr5 <<endl;
    }
    else
    {
        fr5 = fr4+fr3;
        fr6 = fr2;
        cout <<" El resutado es " <<fr5 <<"/" <<fr6 <<endl;
    }
}


void fraccion_resta()
{
    cout <<" Cual es el primer numerador?" <<endl;
    cout <<" ===> ";
    cin >> fr3;

    cout <<" Cual es el primer denominador?" <<endl;
    cout <<" ===> ";
    cin >> fr1;

    cout <<" Cual es el numerador de la segunda fraccion?" <<endl;
    cout <<" ===> ";
    cin >> fr4;

    cout <<" Cual es el denominador de la segunda fraccion?" <<endl;
    cout <<" ===> ";
    cin >> fr2;

    if (fr2 != fr4)
    {
        n1 = fr1;
        n2 = fr2;
        fr5 = mcm(); //Este valor será el común denominador
        //Numeradores:
        fr6 = fr5/fr1*fr3; //Numerador numero 1
        fr7 = fr5/fr2*fr4; //Numerador numero 2
        result = fr6-fr7; //La resta de los numeradores 
        cout <<" El resultado es " <<result <<"/" <<fr5 <<endl;
    }
    else
    {
    fr5 = fr1 - fr3;
    fr6 = fr2;
    cout <<" El resultado es " <<fr5 <<"/" <<fr6 <<endl;
    }
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
void potencia_potencia_result()
{
    result2 = pow(n1, result);
    cout <<" El resultado es " <<result2 <<endl;
}

void cr_archivo()
{
    string nm = "";

    cout <<" Cual sera el nombre del archivo?" <<endl;
    cout <<" Se le anadira '.txt' al final" <<endl;
    cout <<" ===> ";
    cin.ignore();
    getline(cin, nm);
    nm = nm + ".txt";

    ofstream archivo;
    archivo.open(nm, ios::out);

    switch(op)
    {
        case 1:{
            archivo <<" Primera fraccion ===> " <<fr3 <<"/" <<fr1 <<endl;
            archivo <<" Segunda fraccion ===> " <<fr4 <<"/" <<fr2 <<endl;
            if(fr1 != fr2)
            {
                archivo <<" Resultado ===> " <<result <<"/" <<fr5 <<endl;
            }
            else{
                archivo <<" Resultado ===> " <<fr5 <<"/" <<fr6 <<endl;
            }
        }
        break;
        case 2:{
            archivo <<" Primera fraccion ===> " <<fr1 <<"/" <<fr2 <<endl;
            archivo <<" Segunda fraccion ===> " <<fr3 <<"/" <<fr4 <<endl;
            if(fr1 != fr2)
            {
                archivo <<" Resultado ===> " <<result <<"/" <<fr5 <<endl;
            }
            else{
                archivo <<" Resultado ===> " <<fr5 <<"/" <<fr6 <<endl;
            }
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
            if(op_pot2 == "s" || op_pot2 == "S")
            {
                archivo <<endl;
                archivo <<" El resultado de esta potencia es " <<result2 <<endl;
            }
        }
        break;
        case 19:{
            if(op_sen1 == 4)
            {
                archivo <<" Numero 1: " <<n1 <<endl;
                archivo <<" Numero 2: " <<n2 <<endl;
                archivo <<" Resultado: " <<result <<endl; 
            }
            if(op_sen1 == 5)
            {
                archivo <<" Base: " <<n1 <<endl;
                archivo <<" Porcentaje: " <<n2 <<" por ciento " <<endl;
                archivo <<" Resultado: " <<result <<endl;
            }
            if(op_sen1 == 6)
            {
                archivo <<" Base: " <<n1 <<endl;
                archivo <<" Porcentaje (resultado): " <<result <<" por ciento " <<endl;
                archivo <<" 'Otro' numero: " <<n2 <<endl;
            }
            if(op_sen1 == 7)
            {
                archivo <<" Precio con IVA: " <<n1 <<endl;
                archivo <<" Precio sin IVA: " <<result <<endl;
            }
            if(op_sen1 == 8)
            {
                archivo <<" Primer numero: " <<m1 <<endl;
                archivo <<" Segundo numero: " <<m2 <<endl;
                archivo <<" Resultado: " <<result <<endl;
                archivo <<" Resultado de la division: " <<result2 <<endl;
                archivo <<" Si pone 0 puede ser que no se haya pedido el resultado" <<endl;
            }
            if(op_sen1 == 9)
            {
                archivo <<" Primer numero: " <<n1 <<endl;
                archivo <<" Porcentaje que se suma: " <<n2 <<endl;
                archivo <<" Resultado: " <<result <<endl;
            }
            if(op_sen1 == 10)
            {
                archivo <<" Primer numero: " <<n1 <<endl;
                archivo <<" Porcentaje que se va a restar: " <<n2 <<endl;
                archivo <<" Resultado: " <<result <<endl;
            }
            switch(op_sen2)
            {
                case 1:{
                    archivo <<" Numero 1: " <<n1 <<endl;
                    archivo <<" Numero 2: " <<n2 <<endl;
                    archivo <<" Resultado: " <<result <<endl;
                }
                break;
                case 2:{
                    archivo <<" Numero 1: " <<n1 <<endl;
                    archivo <<" Numero 2: " <<n2 <<endl;
                    archivo <<" Numero 3: " <<n3 <<endl;
                    archivo <<" Resultado: " <<result <<endl;
                }
            }
        }
        break;
        case 20:{
            archivo <<" Primer numero: " <<n1 <<endl;
            archivo <<" Segundo numero: " <<n2 <<endl;
            archivo <<" Maximo Comun Divisor: " <<result <<endl;
        }
        break;
        case 21:{
            archivo <<" Primer numero: " <<n1 <<endl;
            archivo <<" Segundo numero: " <<n2 <<endl;
            archivo <<" Minimo Comun Multiplo: " <<result <<endl;
        }
        break;
        case 22:{
            if(op_ot <= 6 )
            {
                archivo <<" Valor introducido: " <<ot1 <<endl;
                switch(op_ot)
                {
                    case 1: archivo <<" La tangente es: " <<ot2 <<endl;
                    break;
                    case 2: archivo <<" La tangente hiperbolica es " <<ot2 <<endl;
                    break;
                    case 3: archivo <<" La arcotangente es " <<ot2 <<endl;
                    break;
                    case 4: archivo <<" El coseno es " <<ot2 <<endl;
                    break;
                    case 5: archivo <<" El coseno hiperbolico es " <<ot2 <<endl;
                    break;
                    case 6: archivo <<" El arcocoseno es " <<ot2 <<endl;
                    break;
                    default: exit(1);
                }
                if(op_ot2 == "s" || op_ot2 == "S")
                {
                    archivo <<" El resultado elevado a la -1 es " <<ot3 <<endl;
                }
            }
            else{
                archivo <<" Primer valor: " <<ot1 <<endl;
                archivo <<" Primer exponente: " <<ot2 <<endl;
                archivo <<" Segundo valor: " <<ot3 <<endl;
                archivo <<" Segundo exponente: " <<ot4 <<endl;
                archivo <<" Resultado: " <<n1 <<" por 10 elevado a " <<n2 <<endl;
            }
        }
        break;
        case 23:{
            switch(opMonomio)
            {
                case 1:{
                    archivo <<" Primer monomio: Coeficiente: " <<ce1 <<endl;
                    archivo <<" Parte literal: " <<pl1 <<endl;
                    archivo <<" Segundo monomio: Coeficiente: " <<ce2 <<endl;
                    archivo <<" Parte literal: " <<pl2 <<endl;
                    archivo <<" Tercer monomio: Coeficiente: " <<ce3 <<endl;
                    archivo <<" Parte literal: " <<pl3 <<endl;
                    archivo <<" Resultado: " <<ce1+ce2+ce3 <<"x" <<pl1 <<endl;
                }
                break;
                case 2:{
                    archivo <<" Primer monomio: Coeficiente: " <<ce1 <<endl;
                    archivo <<" Parte literal: " <<pl1 <<endl;
                    archivo <<" Segundo monomio: Coeficiente: " <<ce2 <<endl;
                    archivo <<" Parte literal: " <<pl2 <<endl;
                    archivo <<" Tercer monomio: Coeficiente: " <<ce3 <<endl;
                    archivo <<" Parte literal: " <<pl3 <<endl;
                    archivo <<" Resultado: " <<ce1-ce2-ce3 <<"x" <<pl1 <<endl;
                }
                break;
                case 3:{
                    archivo <<" Primer monomio: Coeficiente: " <<ce1 <<endl;
                    archivo <<" Parte literal: " <<pl1 <<endl;
                    archivo <<" Segundo monomio: Coeficiente: " <<ce2 <<endl;
                    archivo <<" Parte literal: " <<pl2 <<endl;
                    archivo <<" Tercer monomio: Coeficiente: " <<ce3 <<endl;
                    archivo <<" Parte literal: " <<pl3 <<endl;
                    archivo <<" Resultado: " <<ce1*ce2*ce3 <<"x" <<pl1+pl2+pl3 <<endl;
                }
                break;
                case 4:{
                    archivo <<" Primer monomio: Coeficiente: " <<ce1 <<endl;
                    archivo <<" Parte literal: " <<pl1 <<endl;
                    archivo <<" Segundo monomio: Coeficiente: " <<ce2 <<endl;
                    archivo <<" Parte literal: " <<pl2 <<endl;
                    archivo <<" Tercer monomio: Coeficiente: " <<ce3 <<endl;
                    archivo <<" Parte literal: " <<pl3 <<endl;
                    archivo <<" Resultado: " <<ce1/ce2/ce3 <<"x" <<pl1-pl2-pl3 <<endl;
                }
                break;
                case 5:{
                    archivo <<" Coeficiente: " <<ce1 <<endl;
                    archivo <<" Parte literal: " <<pl1 <<endl;
                    archivo <<" Resultado: " <<pow(pow(ce1,n1),n2) <<"x" <<pl1*n1*n2 <<endl;
                }
                break;
                default: exit(1);
            }
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

int mcd()
{
    int mcd = 0;
    int a = max(n1, n2);
    int b = min(n1, n2);
    while(b!=0)
    {
        mcd = b;
        b = a%b;
        a = mcd;
    }
    return mcd;
}

int mcm()
{
    int mcm1 = mcd();
    int mcm2 = (n1*n2)/mcm1;
    return mcm2;
}

void ot()
{
    cout <<" 1.Calcular tangente" <<endl;
    cout <<" 2.Calcular tangente hiperbolica " <<endl;
    cout <<" 3.Calcular arcotangente" <<endl;
    cout <<" 4.Calcular coseno" <<endl;
    cout <<" 5.Calcular coseno hiperbolico" <<endl;
    cout <<" 6.Calcular arcoseno" <<endl;
    cout <<" 7.Multiplicar dos notaciones cientificas " <<endl;
    cout <<" 8.Dividir dos notaciones cientificas " <<endl;
    cout <<" 9.Saber si un numero es divisible por... " <<endl;
    cout <<" ===> ";
    cin >> op_ot;
    switch(op_ot)
    {
        case 1:{
            tangente();
        }
        break;
        case 2:{
            hipertan();
        }
        break;
        case 3:{
            arco_tan();
        }
        break;
        case 4:{
            cose();
        }
        break;
        case 5:{
            hipercose();
        }
        break;
        case 6:{
            arco_cose();
        }
        break;
        case 7:{
            not_mul();
        }
        break;
        case 8:{
            not_div();
        }
        break;
        case 9:{
            es_divisor();
        }
        break;
        default:{
            cout <<" Opcion incorrecta" <<endl;
            system("PAUSE");
            exit(1);
        }
    }
    return;
}

void tangente()
{
    cout <<" Cual es el valor?" <<endl;
    cout <<" ===> ";
    cin >> ot1;

    ot2 = tan(ot1);
    cout <<" El resultado de esta operacion es " <<ot2 <<endl;
}

void arco_tan()
{
    cout <<" Cual es el valor?" <<endl;
    cout <<" ===> ";
    cin >> ot1;

    ot2 = atan(ot1);
    cout <<" El resultado de esta operacion es " <<ot2 <<endl;

}

void hipertan()
{
    cout <<" Cual es el valor?" <<endl;
    cout <<" ===> ";
    cin >> ot1;

    ot2 = tanh(ot1);
    cout <<" El resultado de esta operacion es " <<ot2 <<endl;
}

void cose()
{
    cout <<" Cual es el valor?" <<endl;
    cout <<" ===> ";
    cin >> ot1;

    ot2 = cos(ot1);
    cout <<" El resultado de esta operacion es " <<ot2 <<endl;
}

void arco_cose()
{
    cout <<" Cual es el valor?" <<endl;
    cout <<" ===> ";
    cin >> ot1;

    ot2 = acos(ot1);
    cout <<" El resultado de esta operacion es " <<ot2 <<endl;
}

void hipercose()
{
    cout <<" Cual es el valor?" <<endl;
    cout <<" ===> ";
    cin >> ot1;

    ot2 = cosh(ot1);
    cout <<" El resultado de esta operacion es " <<ot2 <<endl;
}

void not_mul()
{
    cout <<" Cual es el primer valor? (NO '10 elevado a...' " <<endl;
    cout <<" ===> ";
    cin >> ot1;  //Pedimos valores...

    cout <<" Cual es el exponente de 10?" <<endl;
    cout <<" ===> ";
    cin >> ot2;

    cout <<" Cual es el segundo valor?" <<endl;
    cout <<" ===> ";
    cin >> ot3;

    cout <<" Cual es el segundo exponente de 10?" <<endl;
    cout <<" ===> ";
    cin >> ot4;

    n1 = ot1*ot3;
    n1 = n1/10;  //Obtenemos la primera parte del resultado
    n2 = ot2+ot4;
    n2 = n2+1;  //Obtenemos lo que se eleva a 10

    cout <<" El resultado es " <<n1 <<" por 10 elevado a " <<n2 <<endl;
}

void not_div()
{
    cout <<" Cual es el primer valor? (NO '10 elevado a...' " <<endl;
    cout <<" ===> ";
    cin >> ot1;  //Pedimos valores...

    cout <<" Cual es el exponente de 10?" <<endl;
    cout <<" ===> ";
    cin >> ot2;

    cout <<" Cual es el segundo valor?" <<endl;
    cout <<" ===> ";
    cin >> ot3;

    cout <<" Cual es el segundo exponente de 10?" <<endl;
    cout <<" ===> ";
    cin >> ot4;

    n1 = ot1/ot3;
    n1 = n1/10;
    n2 = ot2-ot4;
    n2 = n2+1;

    cout <<" El resultado es " <<n1 <<" por 10 elevado a " <<n2 <<endl;
}

void es_divisor()
{
    cout <<" Que numero es el que quieres saber si es divisible por?" <<endl;
    cout <<" ===> ";
    cin >> m1;

    cout <<" Cual es ese 'por'?" <<endl;
    cout <<" 1.Por 2" <<endl;
    cout <<" 2.Por 3" <<endl;
    cout <<" 3.Por 4" <<endl;
    cout <<" 4.Por 6" <<endl;
    cout <<" 5.Por 7" <<endl;
    cout <<" 6.Por 8" <<endl;
    cout <<" 7.Por 9" <<endl;
    cout <<" 8.Por 11" <<endl;
    cout <<" ===> ";
    cin >> op_ot3;

    switch(op_ot3)
    {
        case 1:{
            if(es_divisor_2()==1)
            {
                cout <<" El numero " <<m1 <<" es divisible por 2" <<endl;
            }
            else{
                cout <<" El numero " <<m1 <<" no es divisible por 2" <<endl;
            }
        }
        break;
        case 2:{
            if(es_divisor_3()==1)
            {
                cout <<" El numero " <<m1 <<" es divisible por 3" <<endl;
            }
            else{
                cout <<" El numero " <<m1 <<" no es divisible por 3" <<endl;
            }

        }
        break;
        case 3:{
            if(es_divisor_4()==1)
            {
                cout <<" El numero " <<m1 <<" es divisible por 4" <<endl;
            }
            else{
                cout <<" El numero " <<m1 <<" no es divisible por 4" <<endl;
            }

        }
        break;
        case 4:{
            if(es_divisor_6()==1)
            {
                cout <<" El numero " <<m1 <<" es divisible por 6" <<endl;
            }
            else{
                cout <<" El numero " <<m1 <<" no es divisible por 6" <<endl;
            }

        }
        break;
        case 5:{
            if(es_divisor_7()==1)
            {
                cout <<" El numero " <<m1 <<" es divisible por 7" <<endl;
            }
            else{
                cout <<" El numero " <<m1 <<" no es divisible por 7" <<endl;
            }

        }
        break;
        case 6:{
            if(es_divisor_8()==1)
            {
                cout <<" El numero " <<m1 <<" es divisible por 8" <<endl;
            }
            else{
                cout <<" El numero " <<m1 <<" no es divisible por 8" <<endl;
            }

        }
        break;
        case 7:{
            if(es_divisor_9()==1)
            {
                cout <<" El numero " <<m1 <<" es divisible por 9" <<endl;
            }
            else{
                cout <<" El numero " <<m1 <<" no es divisible por 9" <<endl;
            }

        }
        break;
        case 8:{
            if(es_divisor_11()==1)
            {
                cout <<" El numero " <<m1 <<" es divisible por 11" <<endl;
            }
            else{
                cout <<" El numero " <<m1 <<" no es divisible por 11" <<endl;
            }

        }
        break;
        default:{
            cout <<" Opcion incorrecta " <<endl;
            system("PAUSE");
            exit(1);
        }
    }
}

int es_divisor_2()
{
    if(m1%2 == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int es_divisor_3()
{
    if(m1%3==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int es_divisor_4()
{
    if(m1%4==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int es_divisor_6()
{
    if(m1%6==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int es_divisor_7()
{
    if(m1%7==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int es_divisor_8()
{
    if(m1%8==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int es_divisor_9()
{
    if(m1%9==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int es_divisor_11()
{
    if(m1%11==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void op_ot_9()
{
    cout <<" Quiere hacer otra operacion mas? (S/n) ";
    cin >> op_rep; 
    if(op_rep == "s" || op_rep == "S")
    {
        cout <<endl;
        op_rep = "s";
        return;
    }
    else{
        system("PAUSE");
        exit(0);
    }
}


//Monomios:

void menuMonomios()
{
    cout <<" Elige una opcion: " <<endl;
    cout <<" 1.Sumar monomios" <<endl;
    cout <<" 2.Restar monomios" <<endl;
    cout <<" 3.Multiplicar monomios" <<endl;
    cout <<" 4.Dividir monomios" <<endl;
    cout <<" 5.Elevar monomios (solo un monomio)" <<endl;
    cout <<" ===> ";
    cin >> opMonomio;
    switch(opMonomio)
    {
        case 1:{
            sumaMonomios();
        }
        break;
        case 2:{
            restarMonomios();
        }
        break;
        case 3:{
            multiplicarMonomios();
        }
        break;
        case 4:{
            dividirMonomios();
        }
        break;
        case 5:{
            potenciaMonomios();
        }
        break;
        default:{
            cout <<" Opcion no soportada/incorrecta. El proceso se detendra" <<endl;
            cout <<" ";
            system("PAUSE");
            exit(1);
        }
    }

}

void sumaMonomios()
{
    cout <<" Cual es la parte literal comun?" <<endl;
    cout <<" ===> ";
    cin >> pl1;

    cout <<" Cual es el primer coeficiente literal?" <<endl;
    cout <<" ===> ";
    cin >> ce1;

    cout <<" Cual es el segundo coeficiente literal?" <<endl;
    cout <<" ===> ";
    cin >> ce2;

    //Opcional para el usuario:
    cout <<" Cual es el tercer coeficiente literal?" <<endl;
    cout <<" Pon 0 si no hay un tercer monomio" <<endl;
    cout <<" ===> ";
    cin >> ce3;

    cout <<" La suma de " <<ce1 <<"x" <<pl1 <<" + " <<ce2 <<"x" <<pl1 <<" + " <<ce3 <<"x" <<pl1;
    cout <<" es " <<ce1+ce2+ce3 <<"x" <<pl1 <<endl;
}

void restarMonomios()
{
    cout <<" Cual es la parte literal comun?" <<endl;
    cout <<" ===> ";
    cin >> pl1;

    cout <<" Cual es el primer coeficiente literal?" <<endl;
    cout <<" ===> ";
    cin >> ce1;

    cout <<" Cual es el segundo coeficiente literal?" <<endl;
    cout <<" ===> ";
    cin >> ce2;

    //Opcional para el usuario:
    cout <<" Cual es el tercer coeficiente literal?" <<endl;
    cout <<" Pon 0 si no hay un tercer monomio" <<endl;
    cout <<" ===> ";
    cin >> ce3;

    cout <<" La resta de " <<ce1 <<"x" <<pl1 <<" - " <<ce2 <<"x" <<pl1 <<" - " <<ce3 <<"x" <<pl1;
    cout <<" es " <<ce1-ce2-ce3 <<"x" <<pl1 <<endl;
}

void multiplicarMonomios()
{
    cout <<" Cual es la parte literal comun?" <<endl;
    cout <<" ===> ";
    cin >> pl1;

    cout <<" Cual es el primer coeficiente literal?" <<endl;
    cout <<" ===> ";
    cin >> ce1;

    cout <<" Cual es la segunda parte literal?" <<endl;
    cout <<" ===> ";
    cin >> pl2;

    cout <<" Cual es el segundo coeficiente literal?" <<endl;
    cout <<" ===> ";
    cin >> ce2;

    //Opcional para el usuario:
    cout <<" Cual es la tercera parte literal?" <<endl;
    cout <<" Pon 0 si no hay un tercer monomio" <<endl;
    cout <<" ===> ";
    cin >> pl3;

    cout <<" Cual es el tercer coeficiente literal?" <<endl;
    cout <<" Pon 1 si no hay un tercer monomio" <<endl;
    cout <<" ===> ";
    cin >> ce3;

    cout <<" El resultado es " <<ce1*ce2*ce3 <<"x" <<pl1+pl2+pl3 <<endl;
}

void dividirMonomios()
{
    cout <<" Cual es la parte literal comun?" <<endl;
    cout <<" ===> ";
    cin >> pl1;

    cout <<" Cual es el primer coeficiente literal?" <<endl;
    cout <<" ===> ";
    cin >> ce1;

    cout <<" Cual es la segunda parte literal?" <<endl;
    cout <<" ===> ";
    cin >> pl2;

    cout <<" Cual es el segundo coeficiente literal?" <<endl;
    cout <<" ===> ";
    cin >> ce2;

    //Opcional para el usuario:
    cout <<" Cual es la tercera parte literal?" <<endl;
    cout <<" Pon 0 si no hay un tercer monomio" <<endl;
    cout <<" ===> ";
    cin >> pl3;

    cout <<" Cual es el tercer coeficiente literal?" <<endl;
    cout <<" Pon 1 si no hay un tercer monomio" <<endl;
    cout <<" ===> ";
    cin >> ce3;

    cout <<" El resultado es " <<ce1/ce2/ce3 <<"x" <<pl1-pl2-pl3 <<endl;
}

void potenciaMonomios()
{
    cout <<" Cual es el coeficiente del monomio?" <<endl;
    cout <<" ===> ";
    cin >> ce1;

    cout <<" Cual es la parte literal del monomio?" <<endl;
    cout <<" ===> ";
    cin >> pl1;

    cout <<" En que esta elevado todo ese monomio?" <<endl;
    cout <<" ===> ";
    cin >> n1;

    cout <<" Y todo eso, en que esta elevado?" <<endl;
    cout <<" Pon 1 si no existe ese parentesis" <<endl;
    cout <<" ===> ";
    cin >> n2;

    cout <<" El resultado es " <<pow(pow(ce1,n1),n2) <<"x" <<pl1*n1*n2 <<endl;
}