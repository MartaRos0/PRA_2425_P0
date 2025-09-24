#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico{
	private:
		double  x,y,z;
		bool sujetando;
	public:
		BrazoRobotico(double x_,double y_,double z_,bool sujetando_){
			x=x_;
			y=y_;
			z=z_;
			sujetando=sujetando_;
		}

		double getX();
		double getY();
		double getZ();
		bool getSujetando();

		void coger();
		void soltar();
		void mover(double nx, double ny,double nz);

	};
#endif
