#include <iostream>

using namespace std;

class Zwierze
{
public:

//Atrybuty ( Atributes )
  string name;
  string type;
  int age;
  string gender;
  string notes;

  //metody ( methodes )
  void add_animal();
  void show_data();
  void save_animal_to_file();
  void edit_animal();
  void load_animal();

};
