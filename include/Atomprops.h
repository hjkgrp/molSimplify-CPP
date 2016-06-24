// Written by Tim Ioannidis for HJK Group
// Dpt of Chemical Engineering, MIT

/*
##########################################################
########   Declares class of 3D atoms that    ############
########     will be used to manipulate      #############
########   coordinates and other properties  #############
##########################################################
*/

#ifndef ATOMPROPS_H
#define ATOMPROPS_H

#include <string>

using namespace std;

struct Atomprops
{
    string Type;
    string name; 
    double mass;
    int atno;
    double radius;
    bool ismetal;
};
// define external variable holding the data
extern Atomprops AtomInfo[128];

#endif
