#include <iostream>
//#include <string>
#include "funcs.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;
bool restarting(char value){
     char v = value;
     switch(v)
    {
        case "y":
            cout << "Restarting..." << endl;
            re_start = true;
            break;
        case "n":
             cout << "Ending..." << endl;
            re_start = false;
             system("pause");
             break;
        default:
            cout << "You can only use y or n" << endl;
            break;
    }
    return re_start;
}
