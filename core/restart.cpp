#include <iostream>
//#include <string>
#include "funcs.h"
using std::cout;
using std::endl;
using std::cin;
//using std::string;
int restart(bool value){
     bool re_start;
     char re_start_value;
if(!value){
     cout<<"Restart? y/n"<<endl;
     cin>>re_start_value;
     restarting(re_start_value);
}

     return 0;
}
