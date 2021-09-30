# CodeExampleTwo
This code is a simple C++ program that calculates the body mass index of a user when given a weight and height and prints out an appropriate message. I started the code off by
adding in my libraries by including <iostream> and <iomanip>

I proceeded to set up my constants and variables. The constant is BMI_CONSTANT = 703; This is the number that we will multiply with the user input weight divided by height
multiplied by height. The variables are weight, height, and bodyMassIndex as seen below:
  
  const int BMI_CONSTANT = 703;
	double weight;
	double height;
	double bodyMassIndex;
  
After variables have been set up, the program needs to get the weight and the height from the user. To do this, the program asks the user to input a value for the variable
"weight" and a value for the variable "height". This is seen in this code below:
  
  cout << "Please Enter weight in pounds: " << endl;
	cin >> weight;
	cout << "Please Enter height in inches: " << endl;
	cin >> height;
  
The program then use the variables and the BMI_CONSTANT to evaluate the BMI and set the value in the "bodyMassIndex" variable. The formula is weight multiplied by the 
BMI_CONSTANT variable
set to 703. Then answer to this multiplication is divided by the user input of height times the user input of height again. The example of the code for this segment is below:
  
  bodyMassIndex = weight * BMI_CONSTANT / (height * height);
  
The program then needs to be set up to be properly read by humans. So the next line of code sets up the format and manipulates the output to be visually pleasing and legible.
  
  cout << fixed << showpoint << setprecision(2);
  
The program then prints out the BMI of the user.
After the BMI has been shown to the user, the program goes through an if/else loop to see where the new BMI calculation resides on the BMI scale. If the BMI is less than 20, the 
user is underweight and needs to see a doctor. The program prints out in the command prompt, "Underweight: You should probably see a doctor." If the BMI is less than or equal to
25, the program will print, "looking normal.". If the BMI is less than or equal to 30, the program will print, "Overweight: See your doctor.". Anything else will print, "Obese:
See your doctor.".
  
After this, the program is finished and can be closed or restarted to calculate another user's body mass index.
