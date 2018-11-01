#define EXPRESION_H

#include <iostream>
#include <string>
#include <list>
#include <vector>


class Expresion {

	private:

		string ecuacion;
		Expresion expresion;

	public:

		void setEcuacion(string);
		string getEcuacion();

		void setExpresion(string);
		Expresion getExpresion();

};

#endif
