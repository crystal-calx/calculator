#define pop(stack) head=*--stack
#define push(stack, x) *stack++=x
#define (int) data=(int) data << 4 + 0

void **data_stack=void, *data=void;
char **call_stack=void, *call="", token=0;
void *temp=void;
int run=1;
  
int main(){
    while(run){
	token=*call++;
	switch(token){
		case'\0':	//pop call stack if end of string character
		call=*call_stack--);
		break;
		
		_case('#', push(data_stack, void)); //begin interpreting an integer
		
		interpret_hex_int('0'); //interpret a literal '0' character in hexidecimal
		interpret_hex_int('1'); //interpret a literal '1' character in hexidecimal
		interpret_hex_int('2'); //interpret a literal '2' character in hexidecimal
		interpret_hex_int('3'); //interpret a literal '3' character in hexidecimal
		interpret_hex_int('4'); //interpret a literal '4' character in hexidecimal
		interpret_hex_int('5'); //interpret a literal '5' character in hexidecimal
		interpret_hex_int('6'); //interpret a literal '6' character in hexidecimal
		interpret_hex_int('7'); //interpret a literal '7' character in hexidecimal
		interpret_hex_int('8'); //interpret a literal '8' character in hexidecimal
		interpret_hex_int('9'); //interpret a literal '9' character in hexidecimal
		interpret_hex_int('A'); //interpret a literal 'A' character in hexidecimal
		interpret_hex_int('B'); //interpret a literal 'B' character in hexidecimal
		interpret_hex_int('C'); //interpret a literal 'C' character in hexidecimal
		interpret_hex_int('D'); //interpret a literal 'D' character in hexidecimal
		interpret_hex_int('E'); //interpret a literal 'E' character in hexidecimal
		interpret_hex_int('F'); //interpret a literal 'F' character in hexidecimal
		_case('s', (temp=data, data=pop(data_stack), push(data_stack,temp))); //swap
		_case('-', (int) data -= (int) pop(data_stack)); //subtract
		_case('=', push(data_stack, (int) pop(data_stack) == (int) pop(data_stack))); //test for equality
		_case('j', (char*) data += (int) pop(data_stack)); //jump/pointer addition
		_case('d', push(data_stack, data)); //duplicate
		_case('a', data=(realloc(pop(data_stack), (int) data))); //allocate
		_case('f', free(pop(data_stack))); //free
		_case('r', data=*data); //read
		_case('w', *data=pop(data_stack), data=pop(data_stack));//write
		_case('x', (push(call_stack, call), call=data, data=*data_stack); //execute
		_case('q', run=0;);
	}
	return 0;
}
/*

copyright 2020 john.morris.beck@hotmail.com

Permission to use, copy, modify, and/or distribute this software
for any purpose with or without fee is hereby granted.
THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR
CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

*****************************************************************

Calculator is a programming language.

The reason it exists is to take gnu dc and restore it with:

1. malloc
2. free
3. string manipulation
4. proper io handling
5. A nicer syntax.
6. syntax macros

*****************************************************************

One huge problem in this language is write.

read is techincally okay because it is

data=*data

which will copy whatever is at the beginning and some extra. and so there
must be some overflow so if reading a character at the end of an array that it does
not try to read in memory it can not own and cause a runtime error.

the problem lies in write.

*data=pop(stack)
data=pop(stack)

This will write an entire void* no matter what, cuasing me to require a type system, or
a more elegant read-write combo, else to leave it as it is and waste alot of space per character.


another issue is pointer addition because I need to finely tune how many bytes I will jump in a poitner form sizeof char to sizeof void*.

I need to know what kind of integet I will use to add to a pointer and if that integer is the same kind of integer as I can have on my data stack.


both of these issues have to do with manipulating pointers.

*/
