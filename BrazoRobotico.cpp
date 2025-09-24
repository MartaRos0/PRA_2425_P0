#include<iostream>
#include "BrazoRobotico.h"
using namespace std;

BrazoRobotico::BrazoRobotico(double x_, double y_, double z_, bool sujetando_) {
	x = x_;
	y = y_;
	z = z_;
	sujetando = sujetando_;
}

double BrazoRobotico::getX(){return x;}
double BrazoRobotico::getY(){return y;}
double BrazoRobotico::getZ(){return z;}
bool BrazoRobotico::getSujetando(){return sujetando;}

void BrazoRobotico::coger(){
	sujetando=true;
        cout<<"El brazo esta sujetando un objeto"<<endl;
}
void BrazoRobotico::soltar(){
	sujetando=false;
        cout<<"El brazo ha soltado lo que tenia"<<endl;
}
void BrazoRobotico::mover(double nx, double ny, double nz) {
    x = nx;
    y = ny;
    z = nz;
    cout << "Brazo movido a (" << x << ", " << y << ", " << z << ")."<<endl;
}

