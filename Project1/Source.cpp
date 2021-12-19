#include<iostream>
#include<math.h>
using namespace std;

/*
	------>>>>>>>	By Mahmoud Basha 
*/

//1-
void rectangleAreaAndPerimeter(float length,float hight){

	printf("Perimeter is:%f\n", (length+hight)*2 );
	printf("Area is:%f\n", length*hight );
}

//2- ******
void quadraticEquation(int a, int b, int c) {}

//3-
void hello10Times() {
	for (int i = 0; i < 10; i++)
	{
		printf("Hello Wordl!!\n");
	}
}

//4-
void sumOfFirsr50Numbers() {
	int total = 0;
	for (int i = 0; i < 50; i++) {
		total = total + i;
	}
	printf("Total Of First 50 Numbers=%d\n", total);
}

//5
void calculate2Power4() {
	int result = 1;
	for (int i = 0; i < 4; i++) {
		result = result * 2;
	}
	printf("Total Of First 50 Numbers=%d\n", result);

}

//6- ******
void LCM(int num1, int num2) {
	while (1) {

	}
}

//7- ******
void printPrimeNumbers(int n) {
	for (int i = 2; i <= n; i++) {

	}
}

//8- ******
void printSumofPrimeNumbers(int n) {
	for (int i = 2; i <= n; i++) {

	}
}

//9-
bool checkIfIsArmstrongNumber(int n) {
	int sum = 0;
	int tempN = n;
	while (tempN > 0) {
		int r = tempN % 10;
		sum = sum + (r * r * r);
		tempN = tempN / 10;
	}
	if (sum == n)
		return true;
	else
		return false;
}

//10-
void printAllArmstrongNmbers(int n) {
	for (int i = 1; i <= n; i++) {
		if (checkIfIsArmstrongNumber(i))
			printf("This Number:%d is Aarmstrong Number\n", i);
	}
}

//11-
bool checkIfIsPerfectNumber(int n) {
	if (n <= 0 || n == 1) return false;
	int sum = 0;
	int tempN = n;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) sum += i;
	}
	if (sum == n)
		return true;
	else
		return false;
}

//12-
void printAllPerfectNumbers(int n) {
	for (int i = 1; i <= n; i++) {
		if (checkIfIsPerfectNumber(i))
			printf("This Number:%d is Perfect Number\n", i);
	}
}

//13-
int factorialOfNumber(int n) {
	int result = 1;
	for (int i = 1; i <=n ; i++)
	{
		result = result * i;
	}
	return result;
}
bool checkIfIsStrongNumber(int n) {
	int sum = 0;
	int tempN = n;
	while (tempN > 0) {
		int r = tempN % 10;
		tempN = tempN / 10;
		sum = sum + factorialOfNumber(r);
	}
	if (sum == n)
		return true;
	else
		return false;
}

//14-
void printAllStrongNumbers(int n) {
	for (int i = 1; i <= n; i++) {
		if (checkIfIsStrongNumber(i))
			printf("This Number:%d is Perfect Number\n", i);
	}
}

//15-
bool checkIfPalindromeNumber(int n) {
	int palindormeN = 0;
	int tempN = n;
	while (tempN > 0) {
		int r = tempN % 10;
		tempN = tempN / 10;
		palindormeN = palindormeN * 10 + r;
	}
	if (palindormeN == n)
		return true;
	else
		return false;
}

//16- ******
void findSumOfSeries(){}

//17- ******
void  displayTheNTermsOfHarmonicSeriesandTheirSum(){}

//18-
void  displayFloydTriangle(int lines){
	for (int i = 1; i <= lines; i++) {

		if (i % 2 != 0) {
			for (int j = 1; j <= i; j++) {
				if (j % 2 != 0)
					printf("1");
				else
					printf("0");
			}
		}
		else{
			for (int k = 1; k <= i; k++) {
				if (k % 2 != 0)
					printf("0");
				else
					printf("1");
			}
		}
		
		
		printf("\n");
	}
}

//19- ******


//20- ******


//21- ******



//22-
void numberOfNumbersBetween100And200By9() {
	int counter = 0;
	int sum = 0;

	for (int i = 100; i <= 200; i++)
	{
		if (i % 9 == 0) {
			counter++;
			sum += i;
		}

	}
	printf("The Sum Of Integers That Between 100 And 200 That divided by 9 is:%d\n", sum);
	printf("The Number Of Integers That Between 100 And 200 That divided by 9 is:%d\n", counter);
}

//23- ******
void fromDecimalToBinary(int num) {
	int tempN = num;
	int arr[10] = {0};
	int count = 0;
	while (tempN > 0) {
		int r = tempN % 2;
		arr[count] = r;
		tempN /= 2;
		count++;
	}
	for (int i = 0; i < count; i++) {
		cout << arr[i];
	}
	
}

//24-
void fromBinaryToDeimal(int binary) {
	int result = 0;
	int count = 0;
	int tempN = binary;

	while (tempN > 0) {
		int r = tempN % 2;
		result = result + (r*(pow(2,count)));
		tempN /= 10;
		count++;
	}
	cout << result;
}

//25-*******
void printPascalTriangle(int rows){}

void main() {

	cout << sqrt(-100) << endl;
	


}