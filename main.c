#include <stdio.h>
#include <windows.h>
#include "blackjack_lib.h"

int main() {
    bj_stack *a=NULL;
    char *krutoy="krut\n"; // Зовите меня мистер крутой
    for (int i=0;krutoy[i];i++) {
        push(&a, krutoy[i]);
        printf("%c",a->data);
    }
    return 0;
}
