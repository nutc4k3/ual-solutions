/*
* https://challenges.re/48/
* Challenge #48 - win32 compiled
* main:
*    push 0xFFFFFFFF
*    call MessageBeep
*    xor  eax,eax
*    retn
* Documentation for the function "MessageBeep"
* https://docs.microsoft.com/en-us/windows/desktop/api/winuser/nf-winuser-messagebeep
*/

int main() {
    MessageBeep(0xffffffff); //Simple beep
    return 0;
}
