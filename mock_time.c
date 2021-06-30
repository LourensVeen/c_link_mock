#include <time.h>


time_t mock_now;

time_t time(time_t *tloc) {
    if (tloc)
        *tloc = mock_now;
    return mock_now;
}

