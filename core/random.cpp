#include <iostream>
#include <cstdlib>
#include "funcs.h"
using std::cout;
using std::endl;
int getRandom(int min_value, int max_value){
     int value;
     if(max_value != 0&&typeid(min_value) == typeid(int)&&typeid(max_value) == typeid(int)){
          value = min_value + rand() % max_value;
     }else{
          cout<<"Random error!"<<endl;
          system("pause");
     }
     return value;
}
