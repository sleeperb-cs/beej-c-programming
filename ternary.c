#include <stdlib.h>
#include <stdio.h>


//ternary operators and example of post vs pre increment
int main(){

    int x = 11;
    float y = 3;
    float z = 3;

    //comma operator
    x = 10, y = 20;
    x = 11; y = 21;

    // This expression:

    if(x){
        y++;
        y += x > 10? 17: 37;
    }
    // is equivalent to this non-expression:

    if (x > 10){
        z++;
        z += 17;
    }
    else{
        z++;
        z += 37;
    }

    printf("The number %d is %s. y = %.02f\n, z = %.3f\n", x, x % 2 == 0? "even": "odd", y, z);

}
