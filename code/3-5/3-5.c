#include <stdio.h>

void my_print(char type, void* x) {
    if (type == 'C') {
        printf("%c\n", *(char*)x);
    } else if (type == 'D') {
        printf("%d\n", *(int*)x);
    } else if (type == 'S') {
        printf("%s\n", (char*)x);
    }
}

int main() {
    int a = 24930;
    char b = 'a';
    char* c = "hello world";

    my_print('C', &b);
    my_print('D', &a);
    my_print('S', c);
    my_print('C', c);

    return 0;
}