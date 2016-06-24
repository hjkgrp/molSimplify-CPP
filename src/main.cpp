/*
    Copyright 2016 Kulik Lab @ MIT

    This file is part of molSimplify.
    molSimplify is free software: you can redistribute it and/or modify 
    it under the terms of the GNU General Public License as published 
    by the Free Software Foundation, either version 3 of the License,
    or (at your option) any later version.

    molSimplify is distributed in the hope that it will be useful, 
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
    See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License 
    along with molSimplify. If not, see http://www.gnu.org/licenses/.
*/

// Written by Tim Ioannidis for HJK Group
// Dpt of Chemical Engineering, MIT

/*
##########################################################
############  Main script that coordinates  ##############
#############  all parts of the program   ################
##########################################################
*/

#include <iostream>
#include "../include/atom3D.h"

int main()
{
    cout << "\n###############################\n" ;
    cout << "### Welcome to molSimplify! ###\n"; 
    cout << "###############################\n" << endl;
    double xyz[]={0.0,0.0,0.0};
    double xyz2[]={0.5,0.5,0.0};
    double *d;
    atom3D at = atom3D("Cr",xyz);
    atom3D at2 = atom3D("Cr",xyz2);
    d = at.distancev(at2);
    cout << d[0] << endl; 
    delete[] d;
}
