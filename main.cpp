#include <iostream>
#include "animal.h"
#include <cstdlib>
#include <windows.h>
#include <fstream>

using namespace std;
const int maxplace=10;
Zwierze z[maxplace];

void loading_data()
{
z[0].load_animal();
/*int ile=maxplace;
                while (ile>10)

                    {
                    z[(ile-1)].load_animal();
                    ile-=1;
                    }*/

}

void clearing_base()
{
    fstream file;
    file.open("baza danych.txt", ios::trunc | ios::out);
    file.close();
}

void main_menu()
{
    int place=10;




    while(true)
    {
        int wybor;
        system("cls");

        cout<<"------------------------------------------------------"<<endl;
        cout<<"      Schronisko dla zwierzat ver 0.3 by Bearshire"<<endl;
        cout<<"------------------------------------------------------"<<endl<<endl;

        cout<<"       Menu"<<endl;
        cout<<"1. Dodaj zwierze"<<endl;
        cout<<"2. Usun zwieze"<<endl;
        cout<<"3. Pokaz zwiezeta"<<endl;
        cout<<"4. Status schroniska"<<endl;
        cout<<"5. Edytuj zwierze"<<endl;
        cout<<"6. Wyjdz programu"<<endl;
        cin>>wybor;

        switch(wybor)
        {
            case 1: //ADD ANIMAL
            {
                if(place==0)
                {
                    cout<<"Brak miejsca, nie mozesz dodac nowego zwierzecia!"<<endl;
                    system("pause");
                }

                else
                {
                    place-=1;
                    z[(9-place)].add_animal();

                }
            }break;

            case 2: //REMOVE ANIMAL
            {

            }break;

            case 3: //Show ANIMALS
            {
                system("cls");
                cout<<"Zostalo "<<place<<" miejsc!"<<endl;

                int i;
                if (place==10) cout<<"Schronisko jest puste!"<<endl;
                if (place==0) cout<<"Schronisko jest pelne!"<<endl;
                for (i=0; i<(10-place); i++)
                {
                    z[(i)].show_data();
                }
                system("pause");
            }break;

            case 4: //Status
            {
            if (place==10) cout<<"Schronisko jest puste!"<<endl;
                if (place<10&&place>0)
                cout<<"Schronisko jest czesciowo zapelnione!"<<endl; cout<<"Zostalo "<<place<<" miejsc!"<<endl;
                if (place==0) cout<<"Schronisko jest pelne!"<<endl;
                Sleep(2000);
            }break;

            case 5: //Editing animal
            {
                system("cls");
                cout<<"Zostalo ktore zwieze chcesz edytowac?"<<endl;
                cout<<"Wybierz od 1 do "<<maxplace<<endl;
                cin>>wybor;
                if(wybor>maxplace||wybor<1)
                {
                  cout<<"Zly numer zwierzecia, maksymalnie jest "<<maxplace<<"!"<<endl;
                  Sleep(2000);
                }
                else
                {
                 z[(wybor-1)].show_data();
                cout<<"---------------------------"<<endl;
                z[(wybor-1)].edit_animal();
                cout<<"Dane zwierzecia zostaly zmienione!"<<endl;
                system("pause");
                }
                system("cls");
            }break;

            case 6: //EXIT PROGRAM
            {
            char wybor;
            cout<<"Zapisac do bazy danych? t/n ";
            cin>>wybor;
            if(wybor=='t')
            {
                int ile=(maxplace-place);
                while (ile>0)
                    {
                    cout<<"|nr zwierzecia do zapisu to "<<(ile-1)<<" |"<<endl;
                    cout<<"|ile -  "<<ile<<" |"<<endl;

                    z[(ile-1)].save_animal_to_file();
                    ile-=1;
                    }
                cout<<endl<<"Zapisano stan bazy!";
            }
            exit(0);
            }
        }
    }

}

int main()
{
    loading_data();Sleep(2000);
    z[0].show_data();Sleep(2000);
    system("pause");
    //clearing_base();
    //main_menu();
}
