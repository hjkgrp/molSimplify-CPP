// Written by Tim Ioannidis for HJK Group
// Dpt of Chemical Engineering, MIT

/*
##########################################################
########   Declares class of 3D atoms that    ############
########     will be used to manipulate      #############
########   coordinates and other properties  #############
##########################################################
*/

#include <string>
#include "../include/Atomprops.h"

// populate data with type, name, atomic mass, atomic number, covalent radius and ismetal data from http://www.webelements.com/ (last accessed May 13th 2015)
Atomprops AtomInfo[128]={
    {"X","none",1.0,0,0.77,false},
    {"H","hydrogen",1.0079,1,0.37,false},
    {"B","boron",10.83,5,0.85,false},
    {"C","carbon",12.0107,6,0.77,false},
    {"N","nitrogen",14.0067,7,0.75,false},
    {"O","oxygen",15.9994,8,0.73,false},
    {"F","fluorine",18.9984,9,0.71,false},
    {"Na","sodium",22.99,11,1.55,false},
    {"Mg","magnesium",24.30,12,1.39,false},
    {"Al","aluminum",26.98,13,1.26,false},
    {"Si","silicon",28.08,14,1.16,false},
    {"P","phosphorus",30.9738,15,1.06,false},
    {"S","sulphur",32.065,16,1.02,false},
    {"Cl","chlorine",35.453,17,0.99,false},
    {"K","potassium",39.10,19,1.96,false},
    {"Ca","calcium",40.08,20,1.71,false},
    {"Sc","scandium",44.96,21,1.7,true},
    {"Ti","titanium",47.867,22,1.36,true},
    {"V","vanadium",50.94,23,1.22,true},
    {"Cr","chromium",51.9961,24,1.27,true},
    {"Mn","manganese",54.938,25,1.39,true},
    {"Fe","iron",55.84526,26,1.25,true},
    {"Ni","nickel",58.4934,28,1.21,true},
    {"Co","cobalt",58.9332,27,1.26,true},
    {"Cu","copper",63.546,29,1.38,true},
    {"Zn","zinc",65.39,30,1.31,true},
    {"Ga","gallium",69.72,31,1.24,false},
    {"Ge","germanium",72.63,32,1.21,false},
    {"As","arsenic",74.92,33,1.21,false},
    {"Se","selenium",78.96,34,1.16,false},
    {"Br","bromine",79.904,35,1.14,false},
    {"Rb","rubidium",85.47,37,2.10,false},
    {"Sr","stronitum",87.62,38,1.85,false},
    {"Y","yttrium",88.91,39,1.63,true},
    {"Zr","zirconium",91.22,40,1.54,true},
    {"Nb","niobium",92.91,41,1.47,true},
    {"Mo","molybdenum",95.96,42,1.38,true},
    {"Ru","ruthenium",101.1,44,1.25,true},
    {"Rh","rhodium",102.9,45,1.25,true},
    {"Pd","palladium",106.4,46,1.20,true},
    {"Ag","silver",107.9,47,1.28,true},
    {"In","indium",114.8,49,1.42,false},
    {"Sn","tin",118.7,50,1.40,false},
    {"I","iodine",126.9,53,1.33,false},
    {"Pt","platinum",195.1,78,1.23,true},
    {"Au","gold",197.0,79,1.24,true}
};
