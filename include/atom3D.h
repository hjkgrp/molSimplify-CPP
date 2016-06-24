// Written by Tim Ioannidis for HJK Group
// Dpt of Chemical Engineering, MIT

/*
##########################################################
########   Declares class of 3D atoms that    ############
########     will be used to manipulate      #############
########   coordinates and other properties  #############
##########################################################
*/

#ifndef ATOM3D_H
#define ATOM3D_H

#include <string>

using namespace std;

class atom3D
{
private:
    string sym;
    int mass;
    int atno;
    double rad;
    double xyz[3];
    bool metal;
public:
    atom3D();
    atom3D(string,double*);
    ~atom3D();
    double x();
    double y();
    double z();
    void coords(double*);
    double distance(atom3D);
    void distancev(double*,atom3D);
    bool ismetal();
    void setcoords(double*);
    string symbol();
    void translate(double*);
};

#endif
