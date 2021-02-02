#include <iostream>
using namespace std;
#include <fstream>
void ingresarElementosArreglo(int arr[], int t);
int busqueda(int arr[], int t, int dato);
void escribirArchivo();

int main() {
  int a[100];
  int n,b;
  ofstream archivoprueba;
  string nombrearchivo;
  cout<<"Ingrese el nombre del archivo: "; 
  getline(cin,nombrearchivo);
  archivoprueba.open(nombrearchivo.c_str(),ios::out);  
  cout <<"Ingrese el tamanio del arreglo: ";
  cin >>n;
  ingresarElementosArreglo( a, n);
  cout << "Ingrese elemento a buscar : ";
  cin >> b; 
  busqueda(a, n, b);
  if(busqueda(a, n, b)==-1)
  {
    archivoprueba<<"ELEMENTO NO ENCONTRADO";
    cout <<"ELEMENTO NO ENCONTRADO";
  }
  else 
  {
    archivoprueba<<"ELEMENTO ENCONTRADO EN LA POSICIÓN "<< busqueda(a, n, b); 
    cout <<"ELEMENTO ENCONTRADO EN LA POSICIÓN "<< busqueda(a, n, b); 
  }
    archivoprueba<<"---->" << b ;
    cin.ignore();
    archivoprueba.close();
}

int busqueda(int arr[], int t, int dato)
{
  int i;

  for( i=0 ; i<t ; i++)
  {
      
    if(arr[i]==dato)
    {
      return i;
    }
  }
  
  return -1;
}

void ingresarElementosArreglo(int arr[], int t)
{
 int n;
 for (int i=0; i<t; i++)
 {
   cout << "Ingrese el elemento "<<i <<": " ;
   cin >> arr[i];
 }

}


