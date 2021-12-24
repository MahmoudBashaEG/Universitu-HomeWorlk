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

//2-
void quadraticEquation() {
	int a = 0;
	int b = 0;
	int c = 0;
	printf("Enter a:");
	cin >> a;
	printf("Enter b:");
	cin >> b;
	printf("Enter c:");
	cin >> c;

	float featured = (b * b) - (4 * a * c);
	if (featured < 0) {
		printf("There isn't roots");
		return;
	}
	float x1 = (-b + sqrt(featured))/(2*a) + 0.0;
	float x2 = (-b - sqrt(featured)) / (2 * a) + 0.0;
	printf("The First Root is %f\n",x1);
	printf("The Second Root is %f\n",x2);
}

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

//6-
void LCM() {
	int num1=0;
	int num2=0;
	printf("Enter First positive integers: ");
	cin >> num1;

	printf("Enter Second positive integers: ");
	cin >> num2;

	int max = (num1>num2)? num1:num2;

	while (1) {
		if (max % num1 == 0 && max % num2 == 0) {
			printf("The LCM of %d and %d is %d.\n", num1, num2, max);
			break;
		}
		max++;
	}
}

//7-
void printPrimeNumbers(int n) {

	for (int i = 2; i <= n; i++) {
		int counter = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) counter++;
		}
		if(counter<=2){
			printf("This Number %d is Primer Number\n",i);
		}
	}
	
}

//8-
void printSumofPrimeNumbers(int n) {
	
	// Look At the 7. question and y will understand.
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
void findSumOfSeriesV1(){}

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
void findSumOfSeriesV2() {}


//20- ******
void findSumOfSeriesV3() {}


//21- ******
void findSumOfSeriesV4(int n) {
	int total = 0;
	for (int i = 1; i <= n; i++) {
		total = (total * 10) + 1;
	}
	cout << total << endl;
}


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

int changeFirstAndLast(int number) {
	int nNumber = 0;
	int power = 0;
	int first = number % 10;
	number /= 10;
	power++;
	while(number>=10){
		int r = number % 10;
		number /= 10;
		nNumber = r * (pow(10, power)) + nNumber;
		power++;
	}
	nNumber = first * (pow(10, power)) + nNumber + number;
	return nNumber;
}

void changeFirstAndLastWithArray(int number) {
	int tNumber = number;
	int arr[20];
	int counter = 0;
	while (tNumber > 0) {
		tNumber /= 10;
		counter++;
	}

	tNumber = number;
	for(int i=counter-1;i>=0;i--){
		arr[i] = tNumber % 10;
		tNumber /= 10;
	}

	int first = arr[0];
	arr[0] = arr[counter - 1];
	arr[counter - 1] = first;
}


//-----------------------------

//		Home Work

int strLength(const char* str) {
	int counter = 0;
	while (str[counter] != '\0') {
		counter++;
	}
	return counter;
}

void addTwoString() {
	char str1[21] = "";
	char str2[21] = "";
	char str3[41] = "";

	printf("Enter Yor First Name But not more than 20 characters:");
	cin>>str1;

	printf("Enter Yor Last Name But not more than 20 characters:");
	cin>>str2;

	int str1Size = strLength(str1);
	int str2Size = strLength(str2);

	for (int i = 0; i < str1Size; i++) {
		str3[i] = str1[i];
	}

	for (int i = str1Size, j =0; i < str1Size +str2Size; i++,j++) {
		str3[i] = str2[j];
	}
	cout << str3 << endl;


}

bool compareTwoString() {
	char str1[21] = "";
	char str2[21] = "";
	printf("Enter The First String more than 20 characters:");
	cin >> str1;

	printf("Enter The Second String more than 20 characters:");
	cin >> str2;

	int str1Size = strLength(str1);
	int str2Size = strLength(str2);

	if (str1Size != str2Size) return  false;

	for (int i = 0; i < str2Size; i++) {
		if (str1[i] != str2[i]) return false;
	}

	return true;

}

//-----------------------------

//		Lab 10

//1-
void showPentagonNymbers() {

  	for(int i =1; i<100 ;i++){
		int result = i*(3 * i - 1) / 2;
		if (result<100) {
			printf("%d is Pentagon Number\n", result);
		}
			

	}
}


//2-
void addTwoMatrix() {
	const int size = 2;
	

	int a[size][size];
	int b[size][size];
	int result[size][size];
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("\nEnter The Value Of For a Array Row %d And Column %d:", i+1, j+1);
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("\nEnter The Value Of For b Array Row %d And Column %d:", i+1, j+1);
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			result[i][j] = a[i][j] + b[i][j];
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}

}


//3-
void averageOfTenStudents() {
	const int studentsNumbers = 10;
	int students[studentsNumbers][2];

	int totalHeight = 0;
	int totalWeight = 0;

	for (int i = 0; i < studentsNumbers; i++) {

		int height = 0;
		printf("Write the Height Of The %d. Student:", i + 1);
		cin >> height ;
		totalHeight += height;
		students[i][0] = height;

		int weight = 0;
		printf("Write the Weight Of The %d. Student:", i + 1);
		cin >> weight;
		totalWeight += weight;
		students[i][1] = weight;
		printf("=========================================================================\n");
	}

	printf("**************************************************************************\n");
	printf("The Average Of Students in Height is %d\n", totalHeight/studentsNumbers);

	printf("The Average Of Students in Weight is %d\n", totalHeight/studentsNumbers);
}


//4-
void transferToTheNextCharacter() {
	char str[30] = "";
	printf("Enter The Password:");
	cin >> str;
	int charactersNumber = strLength(str);
	
	for (int i = 0; i < charactersNumber; i++) {
		printf("%c",str[i] + 1);
	}
}

//-----------------------------

void main() {
	
	

}