#include "pa03.h"
double integrate1(Range rng)
{
	double result = 0;
	double reg = 0;
	reg = (rng.upperlimit - rng.lowerlimit) / (rng.intervals);
	for (int i = 0; i < rng.intervals; i++){
		result += reg * func(rng.lowerlimit + i * reg);
	}
	return result;

	//Perform numerical integration of the function func(x)
	//INPUT: Range rng -- the lower and upper limits of the integration
	//                    and the number of intervals to integrate over
	//OUTPUT: Return the result of the integration

}

void integrate2(RangeAnswer * rngans)
{
	rngans->answer = integrate1(rngans->rng);
	//Perform numerical integration of the function func(x)
	//INPUT: RangeAnswer * rngans 
	//              -- the lower and upper limits of the integration
	//                 and the number of intervals to integrate over
	//OUTPUT: The result of the integration should be placed in rngans->answer

	//You should try to call integrate1 when implementing integrate2
}
