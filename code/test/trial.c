/* str_io.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a syscall that read a string and print it
 *
 */

#include "syscall.h"
char a[256];
int main() {
    int pid= Exec("str_io");
    Join(pid);
    while(2){PrintStringUC("trial\n");}

}
