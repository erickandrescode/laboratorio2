// DETERMINANTE DE UNA MATRIZ
// LABORATORIO 2
// Ing. Juan Carlos Duchen Cuellar
// Univ. Erick Andres Mamani Condori

#include <iostream>
#include <cmath>
#define MAX 10                                           //cnumero de filas maximas, se puede cambiar

using namespace std;

void mostrar_matriz(int matriz[][MAX], int orden);                             //dos funciones que muestren la matriz, el cofactor
int determinante(int matriz[][MAX], int orden);
int cofactor(int matriz[][MAX], int orden, int fila, int columna);

int main()
{
   int matriz[MAX][MAX];                                   // como maximo 10 filas y 10 columnas
   int orden;                                              // para cuardar el orden de la matriz
   
   cout << "Ingresa el orden de la matriz (maximo " << MAX << "): ";
   cin >> orden;                                           //se guarda en el valor orden
   while (orden < 0 || orden > MAX) {                      // si es que el orden de la matriz es mayor a 10 no es correcto
      cout << "\nEl orden de la matriz no puede ser mayor que " << MAX << endl;
      cout << "Ingrese nuevamente el orden de la matriz: ";
      cin >> orden;
   }
   
   cout << "\nIngrese los elementos de la matriz:\n\n";
   for (int i = 0; i < orden; i++) {
      for (int j = 0; j < orden; j++) {                 //dos bubles de la amtriz para leer el orden
         cin >> matriz[i][j];                           //utilizamos las i pra las filas y j para las columnas
      }
   }

   cout << "\nMostrando la matriz ingresada:\n";
   mostrar_matriz(matriz, orden);
   
   cout << "\nEl determinante es: " << determinante(matriz, orden) << endl;

   cin.get();
   cin.get();
   return 0;
}

void mostrar_matriz(int matriz[][MAX], int orden)        //cuerpo de la matriz
{
   cout << "Orden: " << orden << endl;
   for (int i = 0; i < orden; i++) {                    //representa las filas
      for (int j = 0; j < orden; j++) {                 //representa las columnas
         cout << "\t" << matriz[i][j];
      }
      cout << "\n";
   }
}


int determinante(int matriz[][MAX], int orden)             //cuerpo de la funcion determinante
{
   int det = 0.0;
   
   if (orden == 1) {
      det = matriz[0][0];
   } else {
      for (int j = 0; j < orden; j++) {
         det = det + matriz[0][j] * cofactor(matriz, orden, 0, j);
      }
   }
   
   return det;
}


int cofactor(int matriz[][MAX], int orden, int fila, int columna)
{
   int submatriz[MAX][MAX];
   int n = orden - 1;
   
   int x = 0;
   int y = 0;
   for (int i = 0; i < orden; i++) {
      for (int j = 0; j < orden; j++) {
         if (i != fila && j != columna) {
            submatriz[x][y] = matriz[i][j];
            y++;
            if (y >= n) {
               x++;
               y = 0;
            }
         }
      }
   }
   
   return pow(-1.0, fila + columna) * determinante(submatriz, n);
}
