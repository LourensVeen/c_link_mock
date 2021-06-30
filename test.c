#include <assert.h>
#include <stdbool.h>
#include <time.h>


bool is_time_to_now_even(int seconds);

extern time_t mock_now;


int main() {
    mock_now = 0;
    assert(is_time_to_now_even(2));

    mock_now = 1;
    assert(!is_time_to_now_even(2));
}

