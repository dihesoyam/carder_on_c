#include <iostream>
#include "funcs.h"
using std::cout;
using std::endl;
using std::cin;
int launch() {
     int first, second, rnd_value, *value_address;
     start = true;
     if(start){
     cout<<"Enter minimal value: "<<endl;
     cin>>first;
       cout<<"Enter value of scatter: "<<endl;
           cin>>second;
           rnd_value = getRandom(first,second);
           value_address = &rnd_value;
     cout<<"Random value: "<<rnd_value<< " at "<<value_address<<endl;
     start  = false;
     restart(start);
}
return 0;
}
