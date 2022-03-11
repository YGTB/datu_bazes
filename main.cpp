#include <iostream>
#include <fstream>
#include <ctime>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    srand(time(0));

    int a = 0 ,b = 0, c = 0, reizes = 0, ID = 0;

    string word, filename;
    string vardini, uzvardini;
    string vardi[8], uzvardi[8], produkti[8];

    fstream file;

    filename = "vardi.txt";
    file.open(filename.c_str());

    for(int i = 0; i < 8; i++)
        {
            cout <<"Personas:" << i << endl;
            file >> vardini;
            cout << vardini << endl;
            vardi[i] = vardini;
        }
    cout << endl;


    for(int i = 0; i < 8; i++)
        {
            cout << vardi[i] << " ";
        }
    cout << endl;
    file.close();

    filename = "uzvardi.txt";
    file.open(filename.c_str());


    for(int j = 0; j < 8; j++)
        {
            cout <<"Personas:" << j << endl;
            file >> uzvardini;
            cout << uzvardini << endl;
            uzvardi[j] = uzvardini;
        }
    cout << endl;

    for(int j = 0; j < 8; j++)
        {
            cout << uzvardi[j] << " ";
        }
    cout << endl;
    file.close();

    cout << "Ievadiet 2D masinu izmerus" << endl;
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
                            cout << "Tel nr.";
                            cout << " ";
                            mans_fails << "Tel nr. ";
                        }
                        if(x == 5)
                            {
                                cout << "Ceka nr.";
                                cout << " ";
                                mans_fails << "Ceka nr. ";
                            }
                            if(x == 6)
                                {
                                    cout << "Produkti";
                                    cout << " ";
                                    mans_fails << "Produkti ";
                                }
     }
    cout << endl;
    mans_fails << endl;


    filename = "produkti.txt";
    file.open(filename.c_str());
    for(int z = 0; z < 8; z++)
        {
            file >> word;
            produkti[z] = word;
        }

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
                           if(y == 6)
                                {
                                    Rand_Mas[x][y] = produkti[rand()%8];
                                }

                            mans_fails << Rand_Mas[x][y] << " ";
                            cout << Rand_Mas[x][y] << " ";
                        }
                        cout << '\n';
                        mans_fails << endl;
                    }
    cout<< endl;

    mans_fails.close();

    return 0;
}
