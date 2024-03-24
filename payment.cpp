// Author Name: Iftiar Mullah
// Project name: Sales Tax Payment Calculator
// UID: 806212501

#include <iostream>
#include <string>

using namespace std;

int main() {
	// Declared variables
	double stateTaxRate = 0, levy = 0, avgLocalTaxRate = 0, purchaseAmount;
	string state, month; 
	int day, year; 

	// Asks for and obtains user input for state name, purchase amount, month, day, and year.
	cout << "State Name: "; 
	getline(cin, state);

	cout << "Purchase amount: "; 
	cin >> purchaseAmount;
	cin.ignore();

	cout << "Provide the month: "; 
	getline(cin, month);

	cout << "Provide the day: "; 
	cin >> day;

	cout << "Provide the year: "; 
	cin >> year;

	// If user inputs any of the following states, then tax rates and levy is applied accordingly.
	if (state == "Alabama")
	{
		stateTaxRate = 0.04;
		avgLocalTaxRate = 0.0514;
		levy = 0;
		if ((month == "July") && (day > 14 && day < 18)) // If user inputs a state along with a free tax date, then tax rates and levy is applied accordingly.
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "Alaska")
	{
		stateTaxRate = 0.00;
		avgLocalTaxRate = 0.0143;
		levy = 0;
	}
	else if (state == "Arizona")
	{
		stateTaxRate = 0.056;
		avgLocalTaxRate = 0.0277;
		levy = 0;
	}
	else if (state == "Arkansas")
	{
		stateTaxRate = 0.0650;
		avgLocalTaxRate = 0.0293;
		levy = 0;
		if ((month == "August") && (day > 5 && day < 8))
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "California")
	{
		stateTaxRate = 0.0725;
		avgLocalTaxRate = 0.0131;
		levy = 0.01;
	}
	else if (state == "Colorado")
	{
		stateTaxRate = 0.029;
		avgLocalTaxRate = 0.0473;
		levy = 0;
	}
	else if (state == "Connecticut")
	{
		stateTaxRate = 0.0635;
		avgLocalTaxRate = 0;
		levy = 0;
		if ((month == "August") && (day > 20 && day < 28))
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "Delaware")
	{
		stateTaxRate = 0;
		avgLocalTaxRate = 0;
		levy = 0;
	}
	else if (state == "Florida")
	{
		stateTaxRate = 0.06;
		avgLocalTaxRate = 0.015;
		levy = 0;
	}
	else if (state == "Georgia")
	{
		stateTaxRate = 0.04;
		avgLocalTaxRate = 0.0329;
		levy = 0;
	}
	else if (state == "Hawaii")
	{
		stateTaxRate = 0.04;
		avgLocalTaxRate = 0.0041;
		levy = 0;
	}
	else if (state == "Idaho")
	{
		stateTaxRate = 0.06;
		avgLocalTaxRate = 0.0003;
		levy = 0;
	}
	else if (state == "Illinois")
	{
		stateTaxRate = 0.0625;
		avgLocalTaxRate = 0.0249;
		levy = 0;
	}
	else if (state == "Indiana")
	{
		stateTaxRate = 0.07;
		avgLocalTaxRate = 0;
		levy = 0;
	}
	else if (state == "Iowa")
	{
		stateTaxRate = 0.06;
		avgLocalTaxRate = 0.0082;
		levy = 0;
		if ((month == "August") && (day > 4 && day < 7))
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "Kansas")
	{
		stateTaxRate = 0.065;
		avgLocalTaxRate = 0.0217;
		levy = 0;
	}
	else if (state == "Kentucky")
	{
		stateTaxRate = 0.06;
		avgLocalTaxRate = 0;
		levy = 0;
	}
	else if (state == "Louisiana")
	{
		stateTaxRate = 0.0445;
		avgLocalTaxRate = 0.05;
		levy = 0;
	}
	else if (state == "Maine")
	{
		stateTaxRate = 0.055;
		avgLocalTaxRate = 0;
		levy = 0;
	}
	else if (state == "Maryland")
	{
		stateTaxRate = 0.06;
		avgLocalTaxRate = 0;
		levy = 0;
		if ((month == "August") && (day > 13 && day < 21))
		{ 
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "Massachusetts")
	{
		stateTaxRate = 0.062;
		avgLocalTaxRate = 0;
		levy = 0;
		if ((month == "August") && (day > 13 && day < 16))
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}

	}
	else if (state == "Michigan")
	{
		stateTaxRate = 0.06;
		avgLocalTaxRate = 0;
		levy = 0;
	}
	else if (state == "Minnesota")
	{
		stateTaxRate = 0.0688;
		avgLocalTaxRate = 0.0055;
		levy = 0;
	}
	else if (state == "Mississippi")
	{
		stateTaxRate = 0.07;
		avgLocalTaxRate = 0.0007;
		levy = 0;
		if ((month == "July") && (day > 28 && day < 31))
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "Missouri")
	{
		stateTaxRate = 0.0423;
		avgLocalTaxRate = 0.039;
		levy = 0;
		if ((month == "April") && (day > 18 && day < 26))
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "Montana")
	{
		stateTaxRate = 0;
		avgLocalTaxRate = 0;
		levy = 0;
		}
	else if (state == "Nebraska")
	{
		stateTaxRate = 0.055;
		avgLocalTaxRate = 0.0135;
		levy = 0;
	}
	else if (state == "Nevada")
	{
		stateTaxRate = 0.0685;
		avgLocalTaxRate = 0.0129;
		levy = 0;
		if ((month == "August") && (day > 4 && day < 8))
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "New Hampshire")
	{
		stateTaxRate = 0;
		avgLocalTaxRate = 0;
		levy = 0;
	}
	else if (state == "New Jersey")
	{
		stateTaxRate = 0.0663;
		avgLocalTaxRate = -0.0003;
		levy = 0;
	}
	else if (state == "New Mexico")
	{
		stateTaxRate = 0.0513;
		avgLocalTaxRate = 0.0269;
		levy = 0;
	}
	else if (state == "New York")
	{
		stateTaxRate = 0.04;
		avgLocalTaxRate = 0.0449;
		levy = 0;
	}
	else if (state == "North Carolina")
	{
		stateTaxRate = 0.0475;
		avgLocalTaxRate = 0.0222;
		levy = 0;
	}
	else if (state == "North Dakota")
	{
		stateTaxRate = 0.05;
		avgLocalTaxRate = 0.0185;
		levy = 0;
	}
	else if (state == "Ohio")
	{
		stateTaxRate = 0.0575;
		avgLocalTaxRate = 0.0142;
		levy = 0;
		if ((month == "August") && (day > 4 && day < 8))
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "Oklahoma")
	{
		stateTaxRate = 0.045;
		avgLocalTaxRate = 0.0442;
		levy = 0;
		if ((month == "August") && (day > 5 && day < 9))
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "Oregon")
	{
		stateTaxRate = 0;
		avgLocalTaxRate = 0;
		levy = 0;
	}
	else if (state == "Pennsylvania")
	{
		stateTaxRate = 0.06;
		avgLocalTaxRate = 0.0034;
		levy = 0;
	}
	else if (state == "Rhode Island")
	{
		stateTaxRate = 0.07;
		avgLocalTaxRate = 0;
		levy = 0;
	}
	else if (state == "South Carolina")
	{
		stateTaxRate = 0.06;
		avgLocalTaxRate = 0.0143;
		levy = 0;
		if ((month == "August") && (day > 4 && day < 8))
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "South Dakota")
	{
		stateTaxRate = 0.045;
		avgLocalTaxRate = 0.019;
		levy = 0;
	}
	else if (state == "Tennessee")
	{
		stateTaxRate = 0.07;
		avgLocalTaxRate = 0.0247;
		levy = 0;
		if ((month == "July") && (day > 28 && day < 32))
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "Texas")
	{
		stateTaxRate = 0.0625;
		avgLocalTaxRate = 0.0194;
		levy = 0;
		if ((month == "August") && (day > 4 && day < 8))
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "Utah")
	{
		stateTaxRate = 0.0595;
		avgLocalTaxRate = 0.0099;
		levy = 0.0125;
	}
	else if (state == "Vermont")
	{
		stateTaxRate = 0.06;
		avgLocalTaxRate = 0.0018;
		levy = 0;
	}
	else if (state == "Virginia")
	{
		stateTaxRate = 0.053;
		avgLocalTaxRate = 0.0035;
		levy = 0.01;
	}
	else if (state == "Washington")
	{
		stateTaxRate = 0.065;
		avgLocalTaxRate = 0.0267;
		levy = 0;
	}
	else if (state == "West Virginia")
	{
		stateTaxRate = 0.06;
		avgLocalTaxRate = 0.0039;
		levy = 0;
		if ((month == "August") && (day > 4 && day < 8))
		{
			stateTaxRate = 0;
			avgLocalTaxRate = 0;
			levy = 0;
		}
	}
	else if (state == "Wisconsin")
	{
		stateTaxRate = 0.05;
		avgLocalTaxRate = 0.0044;
		levy = 0;
	}
	else if (state == "Wyoming")
	{
		stateTaxRate = 0.04;
		avgLocalTaxRate = 0.0136;
		levy = 0;
	}

	// The following is to identify user input errors -- if any of these statements are true, then "Invalid (variable)!" is printed.
	if (state != "Alabama" && state != "Alaska" && state != "Arizona" && state != "Arkansas" && state != "California" && state != "Colorado" && state != "Connecticut" && state != "Delaware" && state != "Florida" && state != "Georgia" && state != "Hawaii" && state != "Idaho" && state != "Illinois" && state != "Indiana" && state != "Iowa" && state != "Kansas" && state != "Kentucky" && state != "Louisiana" && state != "Maine" && state != "Maryland" && state != "Massachusetts" && state != "Michigan" && state != "Minnesota" && state != "Mississippi" && state != "Missouri" && state != "Montana" && state != "Nebraska" && state != "Nevada" && state != "New Hampshire" && state != "New Jersey" && state != "New Mexico" && state != "New York" && state != "North Carolina" && state != "North Dakota" && state != "Ohio" && state != "Oklahoma" && state != "Oregon" && state != "Pennsylvania" && state != "Rhode Island" && state != "South Carolina" && state != "South Dakota" && state != "Tennessee" && state != "Texas" && state != "Utah" && state != "Vermont" && state != "Virginia" && state != "Washington" && state != "West Virginia" && state != "Wisconsin" && state != "Wyoming") 
	{
		cout << "Invalid state!";
	}
	else if (purchaseAmount <= 0) 
	{
		cout << "Invalid amount!";
	}
	else if (month != "January" && month != "February" && month != "March" && month != "April" && month != "May" && month != "June" && month != "July" && month != "August" && month != "September" && month != "October" && month != "November" && month != "December") 
	{
		cout << "Invalid month!";
	}
	else if (day < 1 || day > 31) 
	{
		cout << "Invalid day!";
	}
	else if (year < 1 || year > 2025) 
	{
		cout << "Invalid year!";
	}
	else
	{
		// Payment total calculation is limited to printing at most only two numbers after the decimal point.
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "Please pay a total of $" << (stateTaxRate + avgLocalTaxRate + levy + 1) * purchaseAmount; // Calculates total payment based on user inputs.
	}
	return 0;
}