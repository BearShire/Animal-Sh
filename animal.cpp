#include <iostream>
#include "animal.h"
#include <cstdlib>
#include <fstream>
#include <windows.h>
#include <sstream>

using namespace std;

void Zwierze::add_animal()
  {

      cout<<"Dodawanie nowego zwierzecia do bazy: "<<endl;
      cout<<"Podaj gatunek: ";
      cin>>type;
      cout<<"Podaj imie: ";
      cin>>name;
      cout<<"Podaj wiek: ";
      cin>>age;
      cout<<"Podaj plec: ";
      cin>>gender;
      cout<<"dodatkowe notatki: ";
      cin>>notes;
      cout<<"-------------------"<<endl<<endl;


  }

void Zwierze::show_data()
  {
    cout<<"-------------------"<<endl;
    cout<<"Imie: "<<name<<endl;
    cout<<"Gatunek: "<<type<<endl;
    cout<<"wiek: "<<age<<endl;
    cout<<"plec: "<<gender<<endl;
    cout<<"notatki: "<<notes<<endl;

    cout<<"-------------------"<<endl;
  }

void Zwierze::save_animal_to_file()
  {

    fstream file;
    file.open("baza danych.txt", ios::app);
    file<<name<<endl;
    file<<type<<endl;
    file<<age<<endl;
    file<<gender<<endl;
    file<<notes<<endl;
    file.close();


}

void Zwierze::edit_animal()
{
    cout<<"Edycja zwierzecia "<<endl;
      cout<<"Podaj gatunek: ";
      cin>>type;
      cout<<"Podaj imie: ";
      cin>>name;
      cout<<"Podaj wiek: ";
      cin>>age;
      cout<<"Podaj plec: ";
      cin>>gender;
      cout<<"dodatkowe notatki: ";
      cin>>notes;
      cout<<"-------------------"<<endl<<endl;
}

void Zwierze::load_animal()
{
    fstream file; //CENY
    file.open("baza danych.txt", ios::in);
    /*if(file.good()==false)
    {
       cout<<"plik nie dziala, najlepiej stworz nowy!";
       Sleep(2000);
       exit (0);
    }
    else
    {
//http://www.cplusplus.com/forum/articles/9645/

        }*/

        ZROBIC GET LINE W PETLI WHILE Z STRINGIEM W LINI 3 z AGE dowalic konwersje string > int
while (i<2)
    file>>type;
    file>>name;
    file>>age;
    file>>gender;
    file>>notes;
    i++;

    file.close();
    cout<<endl;

    cout<<"-------------------"<<endl;
    cout<<"Gatunek: "<<type<<endl;
    cout<<"Imie: "<<name<<endl;
    cout<<"wiek: "<<age<<endl;
    cout<<"plec: "<<gender<<endl;
    cout<<"notatki: "<<notes<<endl;

    cout<<"-------------------"<<endl; Sleep(3000);



}

