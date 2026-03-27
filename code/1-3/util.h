#include <stdio.h>

static inline void logger_static_inline(char* message) {
    static int counter = 0;
    counter++;
    printf("%d: %s\n", counter, message);
}