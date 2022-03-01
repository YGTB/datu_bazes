#include <iostream>
#include <fstream>
#include <ctime>
#include <stdio.h>
using namespace std;

int main()
{
    srand(time(0));

    string vardi[8];
    string uzvardi[8];
    int a = 0;
    int b = 0;
    int c = 0;
    int reizes = 0;
    int ID = 0;

    cout << "Ludzu ievadiet personu vardus" << endl;
    for(int i = 0; i < 8; i++)
        {
            cout <<"Personas:" << i << endl;
            cin >> vardi[i];
        }
    cout << endl;

    for(int i = 0; i < 8; i++)
        {
            cout << vardi[i] << endl;
        }
    cout << endl;

    cout << "Ludzu ievadiet personu uzvardus" << endl;

    for(int i = 0; i < 8; i++)
        {
            cout <<"Personas:" << i << endl;
            cin >> uzvardi[i];
        }
    cout << endl;

    for(int i = 0; i < 8; i++)
        {
            cout << uzvardi[i] << endl;
        }
    cout << endl;

    cout << "Ievadiet 2D masinu izmerus, robeza no 3 lidz 9" << endl;
    cin >> a;
    cin >> b;

    cout << endl;

    ofstream mans_fails;
    mans_fails.open("dati.txt",ios::out);

    for(int x = 0; x < a; x++)
     {
      if(x == 0)
          {
             cout << "ID";
             cout << " ";
             mans_fails << "ID ";
          }
         if(x == 1)
             {
                cout << "Vards";
                cout << " ";
                mans_fails << "Vards ";
             }
            if(x == 2)
                {
                    cout << "Uzvards";
                    cout << " ";
                    mans_fails << "Uzvards ";
                }
                if(x == 3)
                    {
                        cout << "Vecums";
                        cout << " ";
                        mans_fails << "Vecums ";
                    }
                    if(x == 4)
                        {
                            cout << "Tel.nr.";
                            cout << " ";
                            mans_fails << "Tel.nr. ";
                        }
                        if(x == 5)
                            {
                                cout << "Ceka nr.";
                                cout << " ";
                                mans_fails << "Ceka nr. ";
                            }
     }
    cout << endl;
    mans_fails << endl;

    string Rand_Mas[a][b];
    for(int x = 0; x < a; x++)
     {
      for( int y = 0; y < b; y++)
       {
        if(y == 0)
            {
                ID = ID + 1;
                cout << ID << " ";
                mans_fails << ID << " ";
            }
         if(y == 1)
             {
                Rand_Mas[x][y] = vardi[rand()%8];
             }
            if(y == 2)
                {
                    Rand_Mas[x][y] = uzvardi[rand()%8];
                }
                if(y == 3)
                    {
                        Rand_Mas[x][y] = to_string(rand()%108+12);
                    }
                    if(y == 4)
                        {
                            Rand_Mas[x][y] = "2"+to_string(((rand()%99999)+10000)*99);
                        }
                       if(y == 5)
                           {
                               Rand_Mas[x][y] = "#00"+to_string(((rand()%9999)+1000)*99);
                           }

                            mans_fails << Rand_Mas[x][y] << " ";
                            cout << Rand_Mas[x][y] << " ";
                        }
                        cout << '\n';
                        mans_fails << endl;
                    }

    cout<< endl;

    mans_fails.close();

    cout <<"Ludzu ievadiet skaitli no 0 - 7, lai izveletos konkretu personu" << endl;
    cin >> c;

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if(Rand_Mas[i][j] == vardi[c])
            {
                reizes = reizes + 1;
            }
        }
    }
    cout << endl;
    cout << endl;
    cout << "Persona "<< vardi[c] <<" tika atrasts " << reizes << " reizes " << endl;

    return 0;
}
// Edgars Igors Kristaps Rainers Ingolfs Peters Janis Rolands
// Berzins Abolins Cakars Biezins Alpa Lapa Lietins Janka
