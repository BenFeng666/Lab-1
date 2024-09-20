#include <iostream>
#include "name.hpp"
using namespace std;

string get_name(){
    string name;
    cout<<"please enter your name ";
    getline(cin,name);
    return name;
}