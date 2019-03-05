/*
* https://challenges.re/51/
* "If we compile this piece of code in MSVC and run it, three numbers are printed. Where do they come from? Where do they come from if you compile it in MSVC with optimization (\Ox)? Why is the situation completely different if we compile with GCC?"
* #include <stdio.h>
*
* int main(){
*	printf ("%d, %d, %d\n");
*
*	return 0;
* };
*/

The numbers come from "ghost" values or values that were previously used by the stack.
If you compile in MSVC with optimization (https://docs.microsoft.com/en-us/cpp/build/reference/ox-full-optimization?view=vs-2017) the values would come from noise close to where the adress jmp will redirect to. (not sure if that is correct)
I don't know for sure :(
