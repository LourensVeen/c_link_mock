#include <stdbool.h>
#include <time.h>


bool is_time_to_now_even(int seconds) {
    time_t now;

    now = time(NULL);
    return (seconds - now) % 2 == 0;
}

