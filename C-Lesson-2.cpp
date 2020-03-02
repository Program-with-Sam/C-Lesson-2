#include <stdio.h>

int main()
{
	// Single line comment
	/*
		Multi-line comment
	*/

	// Character variable
	char a = 'a';
	// Integer variable
	int b = 3;
	// Float variable
	float c = 3.7f;
	// Double variable
	double d = 4.8;

	// Print the char
	printf("This is the char %c", a);
	// Print the int
	printf("\nThis is the integer %d", b);
	// Print the float
	printf("\nThis is the float %f", c);
	// Print the double
	printf("\nThis is the double %f", d);

	// Declare an array
	char myArray[250] = {'H','e','l','l','o',' ','W','o','r','l','d','!'};
	/*
		Note how this array is similar to a string despite strings not existing in C
	*/
	// Accessing a value
	printf("\nAt index 1 %c", myArray[1]);
	// Note that it is e because we index starting at 0

	// Declaring a multidimensional array
	int matrix[3][3];
}

