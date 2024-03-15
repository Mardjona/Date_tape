#include <stdint.h>
#include <stdbool.h>

   int main(int argc, char** argv) {

    printf("sizeof int8_t: %llu\n", sizeof(int8_t)); // char
    printf("sizeof int16_t: %llu\n", sizeof(int16_t)); // short
    printf("sizeof int32_t: %llu\n", sizeof(int32_t));  //int
    printf("sizeof int64_t: %llu\n", sizeof(int64_t)); // long
    printf("sizeof float: %llu\n", sizeof(float)); // float
    printf("sizeof double: %llu\n", sizeof(double)); // double
    return 0;
}
