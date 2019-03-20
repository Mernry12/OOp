#include "ooptool.h"

using namespace std;

int main(int argc, const char *argv[]) {
	argsp_t argsp(argc, argv);
	vector<int> einlesen =  read_pgm("lena.pgm");
	double schwellwert = argsp.int_pos(2,20);
	double schwell = schwellwert/100;
	int groesse= einlesen[0]*einlesen[1]+3;
	for( int i = 3;i<groesse;++i){

		if(einlesen[i]<=(schwell*einlesen[2])){
			einlesen[i]= 0;
		}else{
			einlesen[i]= einlesen[2];
		}
	}






	save_pgm("lena2.pgm",einlesen);

}
