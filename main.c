#include <stdbool.h>
#include <stdio.h>


bool is_time_to_now_even(int seconds);


int main() {
    printf("Time to now is even: %d", is_time_to_now_even(10));
    return 0;
}

