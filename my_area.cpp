#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main(){
         
         int vi_opcion = 1;
         float vf_area = 0;
         bool vb_opcion = false;

         int vi_base = 0;
         int vi_altura = 0;
         int vi_radio = 0;
      
         cout << "|===========================================|\n";
         cout << "| Calcular area de una figura geometrica    |\n";
         cout << "|         realizado por Carlos Monroy       |\n";
         cout << "|     Universidad Cooperativa de Colombia   |\n";
         cout << "|                                           |\n";
         cout << "=============================================\n";
         cout << "\n";

         cout << "Selecione una opcion por favor\n";
         cout << "Circulo   [1] por defecto\n";
         cout << "Triangulo [2] \n";
         cout << "Cuadrado  [3]\n";
         cout << "[1] :";
         cin >> vi_opcion;
   
         cout << "Se ingreso : " << vi_opcion << endl;

         if (vi_opcion < 1 ){
                 vi_opcion = 1;
                 vb_opcion = true;
         }else if (vi_opcion > 3 ){
                   vi_opcion = 1;
                   vb_opcion = true;

         }


         if (vb_opcion) {
                 cout << "Digite una opcion correcta, se asigna por defecto 1\n";
         }

         switch(vi_opcion) {
          case 1:
           //arear del circulo
           cout << "Ingrese el radio del circulo :";
           cin >> vi_radio;
           cout << "\n";
           vf_area = (vi_radio * vi_radio) * 3.14151692;
           break;
         
         
          case 2:
           //arear del triangulo
           cout << "Ingrese la altura :";
           cin >> vi_altura;
           cout << "\n";
           cout << "Ingrese la bese :";
           cin >> vi_base;
           cout << "\n";
           vf_area = (vi_base * vi_altura) / 2;
           break;
        default:
          //Area del cuadrado
          cout << "Ingrese la longitud de la base : ";
          cin >> vi_base;
          cout <<"\n";

          vf_area = vi_base * vi_base;
          break;

       }

        cout << "El area es: " << vf_area << endl;
        return 0;

}
