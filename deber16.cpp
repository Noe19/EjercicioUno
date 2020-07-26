#include <iostream>
using namespace std;

void ingresar(int a[],int n);

void burbuja(int a[],int n,int b[]);


int main()
{

    int arreglo[100],arreglob[100];
    int n;
    cout<<"INGRESE EL TAMANIO:";
    cin>>n;
    ingresar(arreglo,n);
    cout<<endl;
   
    burbuja(arreglo,n,arreglob);
    cout<<endl;
    
    return 0;
}


void ingresar(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Ingrese el elemeneto al arreglo:"<<endl;
        cin>>a[i];
    }

}






void burbuja(int a[] , int n , int b[] )
{
 int j=0,contador=0;
  for(int i=0;i<n;i++ )
  {
    if(a[i]%2==0)
{
  b[j]=a[i];
  contador++;
  j++;
  
  }
  }
  for(int j=0;j<contador ;j++)
  {
    cout << b[j] << " ";
  }
}



