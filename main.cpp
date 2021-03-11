#include <iostream>

#include <ctime>

#include <fstream>


using namespace std;
void imprimir(int b[], int n);
void HeapSort(int b[], int n);
void ingresor(int b[], int n);
void ingresoma(int b[], int n);


int main()
{
  int A[10],op, n;
  ofstream heapsort;
  heapsort.open("heapsort.txt", ios::out);
    cout<<"\t\t\t\tORDENAMIENTO HEAPSORT"<<endl;
    cout<<"\nINGRESE EL TAMAÑO DEL ARREGLO:";
    cin>>n;
    heapsort<<"ARREGLO DE TAMAÑO:"<<n<<endl;
    cout<<"\nMENU\n1.- INGRESAR ELEMENTOS DE FORMA ALEATORIA\n2.- INGRESAR ELEMENTOS DE FORMA MANUAL\nOPCION:";
    cin>>op;
    switch (op){
    case 1:
    {
      ingresor(A, n);
      cout<<"\n\nELEMENTOS INGRESADOS\n"<<endl;
      heapsort<<"\nELEMENTOS INGRESADOS\n"<<endl;
      for(int i=1; i<=n; i++)
      {
        heapsort<<"|"<<A[i]<<"|";
      }
      imprimir(A, n); 
      cout<<endl;
      heapsort<<endl;
      cout<<"\n\nELEMENTOS ORDENADOS POR HEAPSORT\n"<<endl<<endl;
      heapsort<<"\nELEMENTOS ORDENADOS POR HEAPSORT\n"<<endl;      
      HeapSort(A, n);
      imprimir(A, n);
      for(int i=1; i<=n; i++)
      {
        heapsort<<"|"<<A[i]<<"|";
      }
    }break;
    case 2:
    {
      ingresoma(A, n);
      cout<<"\n\nELEMENTOS INGRESADOS\n"<<endl;
      heapsort<<"\n\nELEMENTOS INGRESADOS\n"<<endl;
      for(int i=1; i<=n; i++)
      {
        heapsort<<"|"<<A[i]<<"|";
      }
      heapsort<<endl;
      imprimir(A, n);
      cout<<endl;
      cout<<"\n\nELEMENTOS ORDENADOS POR HEAPSORT\n"<<endl<<endl;
      heapsort<<"\nELEMENTOS ORDENADOS POR HEAPSORT\n"<<endl;      
      HeapSort(A, n);
      imprimir(A, n);
      for(int i=1; i<=n; i++)
      {
        heapsort<<"|"<<A[i]<<"|";
      }
    }break;
  heapsort.close();
    }
  return 0;
}

void imprimir(int b[], int n)
{
  for(int i=1; i<=n;i++)
  {
    cout<<"|"<<b[i]<<"|";
  }
}


void HeapSort(int b[], int n)
{
  int valor, temp, a;
  for(int i=n;i>0;i--)
  {
    for(int j=1;j<=i;j++)
    {
      valor=b[j];
      a=j/2;
      while(a>0 && b[a]<valor)
      {
        b[j]=b[a];
        j=a;
        a=a/2;
      }
      b[j]=valor;
    }
    temp=b[1];
    b[1]=b[i];
    b[i]=temp;
  }
}

void ingresor(int a[],int n)
{
  srand(time(0));
  for(int i=1;i<=n;i++)
  {
    a[i]=1+rand()%(10-99);
  }
}

void ingresoma(int b[], int n)
{
  
    for(int i=1; i<=n; i++)
    {
        cout<<endl<<"\tELEMENTO ["<<i<<"]:";
        cin>>b[i];

    }

}