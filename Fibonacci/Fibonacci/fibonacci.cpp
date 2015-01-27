#include <iostream>
#include <stdio.h>

unsigned long Fabonacci_Lookup[31] =
{
0, 
1, 
1, 
2, 
3, 
5, 
8, 
13, 
21, 
34, 
55, 
89,  
144, 
233, 
377, 
610, 
987, 
1597, 
2584, 
4181, 
6765, 
10946, 
17711,
28657, 
46368, 
75025, 
121393,  
196418, 
317811, 
514229, 
832040 
};

using namespace std;

int main()
{
	unsigned input; 
	while (true)
	{
		cout << "\n\nEnter a number between 0 - 30\n"
			 << "Program will give back a Fibonacci answer that corresponds\n"
			 << "to a given input value (Ctrl-C to quit): ";

		// scanf_s("%d", &input);
		cin >> input;
		if (!cin)
		{
			cout.flush();
			cin.clear();	// Clear out all failbit flags
			cin.ignore(INT_MAX, '\n'); // Ignore all corrupted input until the next Newline
			cout << "Invalid input.\n";
			continue;
		}

		if ((input < 0) || (input > 30))
		{
			printf("Enter a number between 0 - 31 only.\n");
			continue;
		}

		// Search the lookup table
		printf("The fibonacci number for the given number is: %u\n", 
			Fabonacci_Lookup[input]);
		
	}
	
	
}