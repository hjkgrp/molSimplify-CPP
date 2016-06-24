// Written by Tim Ioannidis for HJK Group
// Dpt of Chemical Engineering, MIT

/*
##########################################################
########   Defines class of 3D atoms that    #############
########     will be used to manipulate      #############
########   coordinates and other properties  #############
##########################################################
*/

// import modules
#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include "../include/atom3D.h"
#include "../include/Atomprops.h"

using namespace std;
/******************************/
/** HERE WE DEFINE THE CLASS **/
/******************************/
// Default constructor
atom3D::atom3D(){
    sym = "C";
    mass = 12 ; 
    atno = 6 ;
    rad = 0.75 ;
    xyz[0]=0.0; xyz[1]=0.0; xyz[2]=0.0;
    metal = false ;
}
// Alternative constructor
atom3D::atom3D(string isym,double* ixyz){
    sym = isym;
    // check if sym in dictionary
    bool ff = false;
    for (int i=0; i<128; i++){
        if (!sym.compare(AtomInfo[i].Type)){
            ff = i ; break ; 
        }
    }
    if (ff) {
        mass = AtomInfo[ff].mass;
        atno = AtomInfo[ff].atno;
        rad = AtomInfo[ff].radius;
        metal = AtomInfo[ff].ismetal;
        xyz[0] = ixyz[0];xyz[1] = ixyz[1];xyz[2] = ixyz[2];
    }
    else{
        atom3D();
        xyz[0] = ixyz[0];xyz[1] = ixyz[1];xyz[2] = ixyz[2];
    }
}
// Destructor
atom3D::~atom3D() {}

/*************************************/
/** functions for retrieving values **/
/*************************************/
double atom3D::x(){
    return xyz[0];
}
double atom3D::y(){
    return xyz[1];
}
double atom3D::z(){
    return xyz[2];
}
void atom3D::coords(double* nxyz){
    nxyz[0] = xyz[0];
    nxyz[1] = xyz[1];
    nxyz[2] = xyz[2];
}
string atom3D::symbol(){
    return sym;
}
bool atom3D::ismetal(){
    return metal;
}

/**********************************/
/** functions for setting values **/
/**********************************/
void atom3D::setcoords(double* sxyz){
    xyz[0] = sxyz[0];
    xyz[1] = sxyz[1];
    xyz[2] = sxyz[2];
}

/****************************/
/** manipulating functions **/
/****************************/
// return distance with other atom
double atom3D::distance(atom3D at2){
    double* xyz2=new double[3];
    at2.coords(xyz2);
    double dx = xyz[0]-xyz2[0];
    double dy = xyz[1]-xyz2[1];
    double dz = xyz[2]-xyz2[2];
    return sqrt(dx*dx+dy*dy+dz*dz);
}
// return distance vector
void atom3D::distancev(double* dxyz, atom3D at2){
    double* xyz2=new double[3];
    at2.coords(xyz2);
    dxyz[0] = xyz[0]-xyz2[0];
    dxyz[1] = xyz[1]-xyz2[1];
    dxyz[2] = xyz[2]-xyz2[2];
}
// translate by dxyz
void atom3D::translate(double* dxyz){
    xyz[0] += dxyz[0];
    xyz[1] += dxyz[1];
    xyz[2] += dxyz[2];
}
