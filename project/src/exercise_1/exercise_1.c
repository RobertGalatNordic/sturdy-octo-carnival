// explain what `volatile` means in C
// explain `static` keyword in C
// Create `LOG` macro that will wrap `printf` function but only when `LOG_ENABLED` has been defined
// explain difference between `const pointer to variable` and `pointer to const variable`. 
// How to detect byte endian? show an example
// explain what is `mutex`
// explain what is `semafor`

// explain what values will have the variables a-d, and where in memeory are they stored.
#include <stdint.h>

int a;
uint8_t b = -1;

void foo(int c){
    int d;
}


///////////////////////////////////////////

// what is wrong with this funciton? What test would you suggest? propose beter implementaiton of the same functionality

void wait(int x)
{
    while(x--)
    {
        unsigned int c = 1000;
        while(c > 0)
        {
            c = c - 1;
        }
    }
}

//////////////////////////////////////////