#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <fstream>

using namespace std;

    FILE *fichero;
    FILE *fichero2;
    FILE *fichero3;
    FILE *archivo;
    int alto;
    int ancho;
    int i;

class leer
{
    private: //se usaran en public, como atributos
    char nombre[50]="Pic1.pgm";
    char nombre2[50]="Pic2.pgm";


    public: //metodos que pueden ser vistos por todos
    void lee();

};

void leer::lee()
{
    fichero = fopen(nombre, "r" );
    cout << "\nFichero: " <<nombre << endl;

    if(fichero)
      {
        cout <<"archivo leido\n"<< endl;
      }
    else
    {cout << "error, no se pudo leer el archivo!\n" << endl; }

    fichero2 = fopen(nombre2, "w+" );

    cout << "Fichero: " <<nombre2 << endl;
    if(fichero2)
      {
        cout <<"archivo leido\n"<< endl;

      }
    else
    {cout <<"error, no se pudo leer el archivo!\n" << endl; }
}

class ficheros
{
    private:
    char datoP [64];
    char dato [64];
    unsigned int t_po;
    int p;
    int po;

    public:
    void inicio();
    void fina();
};

void ficheros::inicio()
{
    p=fgetc(fichero);
    cout<< p << endl;
    po=fgetc(fichero);
    cout<< po << endl;
}

void ficheros::fina()
{

    if(p==80 && po==50)
       {
           fprintf(fichero2, "%s","P2");
           fprintf(fichero2, "%s","\n");
          do{
              fscanf(fichero, "%s", &dato);
              cout << dato << endl;

             fprintf(fichero2, "%s",dato);
             fprintf(fichero2, "%s"," ");

            }while(strcmp(dato,"1.1")!=0);

          fprintf(fichero2, "%s","\n");
          fscanf(fichero, "%s", &dato);

          ancho=atoi(dato);

          cout <<("\n%i",ancho)<<endl;
          fprintf(fichero2, "%s",dato);
          fprintf(fichero2, "%s"," ");
          fscanf(fichero, "%s", &dato);

          alto = atoi(dato);

          cout <<("\n%i",alto)<<endl<<endl;
          fprintf(fichero2, "%s",dato);
          fscanf(fichero, "%s", &dato);

           if(strcmp(dato,"255")==0)
             {
                //fprintf("%i",o.ancho*o.alto);
                fprintf(fichero2, "%s","\n");
                fprintf(fichero2, "%s","255");
                fprintf(fichero2, "%s","\n");

                  for(i=0;i<ancho*alto;i++)
                     {
                        fscanf(fichero, "%s", &dato);
                        po= atoi(dato);
                            if(po>95)
                            {po=255;}
                            else
                            {
                             po=0;
                            }
                        sprintf(datoP,"%d",po);
                        fprintf(fichero2, "%s",datoP);
                        fprintf(fichero2, "%s","\n");
                     }
           }
    else
    {
        cout<<("\nExiste un error en el archivo");
    }
       }
    fclose(fichero);
    fclose(fichero2);
}

class resultado
{
    private:
    int pixel=0;
    int area;


    public:
    void respuesta();
};

void resultado::respuesta()
{
    int elementos=100; //(ancho*alto);
    char caracter[elementos];

    while(feof(archivo)==0)
        {
          fgets(caracter,elementos,archivo);
            for(i=0;i<3;i++)
               {
                if(caracter[i]==0)
                  {pixel++;}
               }
        }
    cout<<endl<<"Hay un total de:"<<pixel<<"pixeles negros"<<endl;
    area=(pixel/8556.25);
    cout<<endl<<"El �rea es:"<<area<<"nm2 aproximadamente"<<endl;
}
int main()
{
    leer l;
    l.lee();

   ficheros e;
   e.inicio();
   e.fina();


   archivo = fopen("Pic2.pgm","r");

        if(archivo == NULL)
         {exit(1);}

    resultado r;
    r.respuesta();

    fclose(archivo);

    return 0;
}
