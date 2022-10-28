
#include <stdint.h>
#include <stdio.h>

enum return_state
{
    Ok,
    Error,
};

enum operation{
    sin,
    cos,
    tg,
    ctg
};

/*
    @param  op - operation to execute
    @param  arg - angle in radian
    @param  result - result of the operation on arg

    @retun  Ok on success, 
            Error when operation fails,
            Error when operation has not been registred
*/
enum return_state run(enum operation op, double arg, double* result);

/*
    @param  op - operation to regiuster a handler
    @param  handler - function to handle the operation

    @return Ok on success,
            Error when handler is invalid 
*/
enum return_state register_function(enum operation op, /*todo*/ handler);

