#include "src/calculator.h"

int main() {
    calculator(1, 's', 1);
    calculator(1.23, '*', 1.23);
    calculator(1.23, '+', 1.23);
    calculator(1.23, '-', 1.23);
    calculator(1.23, '/', 1.23);
    calculator(2147483647, '*', 1.23);
    calculator(1, ' ' ,3);
    calculator(1, '+' ,4);
    calculator(1, '+' ,1);
    calculator(1, '-' ,1);
    calculator(1, '*' ,1);
    calculator(1, '/' ,1);
    calculator(1, '/' ,0);
    calculator(2147483647, '+' ,1);
    calculator(2147483647, '+' ,2147483647);
    calculator(2147483647, '*' ,2147483647);
    calculator(1, '/' ,2147483647);
    calculator(0, '-' ,2147483647);
    calculator(1, '/' ,-1);
    calculator(0, '+', 0);
    calculator(0, '*', 42);
    calculator(42, '/', 0);
    calculator(-2147483648, '+', 1);
    calculator(1, '+', -2147483648);
    calculator(-2147483648, '-', 1);
    calculator(1, '-', -2147483648);
    calculator(-2147483648, '*', 1);
    calculator(1, '*', -2147483648);
    calculator(-2147483648, '/', 1);
    calculator(1, '/', -2147483648);
    // Function calls to calculate
    // Write your all possible input scenarios here
    // Notice that calculator code written here works with floats now
    return 0;
}
