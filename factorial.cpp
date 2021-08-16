#include "functions.h"

int factorial(int n){
    if(n<0)
    {
        cout<<"re-enter a positive number\n";
        return 0;
    }
    
    else if(n!=1)
	   return(n * factorial(n-1));
    
    return 1;
}
