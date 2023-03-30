/*
 * El servidor se encarga de realizar la suma y avisar cuando este 
 se haya ejecutado arrojando el resultado y que variables se usaron
 */

#include "suma.h"

int *
suma_1_svc(dupla_int *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	printf("El procedimiento ha sido invocado remotamente\n");
	printf("Server response to client...\n");
	printf("parameters: %d, %d\n", argp->a, argp->b);
	result = argp->a + argp->b;
	printf("returning: %d\n", result);

	return &result;
}
