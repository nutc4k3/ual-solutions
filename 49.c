/*
* https://challenges.re/49/
* Challenge #49 - AT&T Assembly Language
* main:
*       pushq   %rbp
*       movq    %rsp, %rbp
*       movl    $2, %edi
*       call    sleep
*       popq    %rbp
*       ret
*/

int main() {
    sleep(2); //sleep for 2 miliseconds
    return 0;
}


