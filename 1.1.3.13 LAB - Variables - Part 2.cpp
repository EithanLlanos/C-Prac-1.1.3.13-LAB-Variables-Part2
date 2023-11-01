//Scenario
//Check the program in the editor.Find all possible compilation errors and logic errors.Fix them.
//
//Your version of the program must print the same result as the expected output.Before you use the compiler, try to find the errors only by manual code analysis.
//
//If you want to improve the variable names, then do so, but remember that variable names have to be as descriptive as possible, and also as short as possible.
//
////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//
//int main()
//{
//	int 60seconds = 60;
//	int 60minutes = 50;
//	printf("One hour is %d seconds\n", 60seconds * 60minutes);
//	return 0;
//}
//
//Expected output
//One hour is 3600 seconds
//

#include <stdio.h>

int main() {
	int seconds = 60;
	int minutes = 60;
	printf("One hour is %d seconds \n", seconds * minutes);
	return 0;
}