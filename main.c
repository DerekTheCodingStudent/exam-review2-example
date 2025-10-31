
int main() {
	char exampleArray[] = {'a', '@', '.', 'b', '3', 'p', '7', 'A', ';', 'Z'};
	int arraySize = sizeof(exampleArray)/sizeof(exampleArray[0]);
	printf("I am going to print all of the contents in the array!\n{ ");
	for(int i = 0; i < arraySize; i++) {
		printf("%d: %c%s", i, exampleArray[i], (i == arraySize-1) ? "" : ", ");
	}
	puts(" }\n");
	printf("I am going to print out all of the characters in the array that is in the alphabet!\n");
	for(int i = 0; i < arraySize; i++) {
		if(isalpha(exampleArray[i])) {
			printf("Character %c is in the alphabet!\n", exampleArray[i]); 
		}		
	}

	printf("\nNow, I am going to modify the array by lowercasing everything!\n");
	printf("However, before I do that, I will print out everything in the array!\n{ ");
	for(int i = 0; i < arraySize; i++) {
		printf("%d: %c%s", i, exampleArray[i], (i == arraySize-1) ? "" : ", ");
	}
	puts(" }\n");

	puts("Doing the modification!\n");
	for(int i = 0; i < arraySize; i++) {
		exampleArray[i] = tolower(exampleArray[i]);
	}
	
	puts("This is the state of the array after the modification!");
	printf("{ ");
	for(int i = 0; i < arraySize; i++) {
		printf("%d: %c%s", i, exampleArray[i], (i == arraySize-1) ? "" : ", ");
	}
	puts(" }\n");

	puts("Well, what if I want to copy \"HELLLLLLLLLLLLLLOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO EVERYBODYYYYYYYYYYYY!!!!! IT'S ME!!!!!!! DEREK!!!!\" to a variable?");
	puts("Here's how to do it!");

	char* str = malloc(sizeof(char)*0xa0);
	puts("I will initialize the first index of the string to be the null terminator. This gets the variable ready to be copied to.");
	
	str[0] = 0; 

	puts("Copying myStringThatShouldBeCopied to str!");
	strcpy(str, "HELLLLLLLLLLLLLLOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO EVERYBODYYYYYYYYYYYY!!!!! IT'S ME!!!!!!! DEREK!!!!");

	printf("The contents of str is %s\n\n", str);	
	
	puts("Now, the final thing I should be talking about is the criteria");
	puts("However, I think it is simple enough for me to just talk about it and not show how to do so because");
	puts("The criteria/counting portion of question are if statements with the correct conditionals.");
	puts("Good luck everyone!");

	return 0;
}
