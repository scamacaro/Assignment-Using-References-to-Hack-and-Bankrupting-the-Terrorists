/*
Sanyerlis Camacaro- CSC215 - Sancamac@uat.edu
Assignment: Using References to Hack and Bankrupting the Terrorists

I've been hired as a coder for the CIA. There is a new group of terrorists that are operating in the US. 
Our agents have been monitoring them for a while now.they have just completed selling cryptocurrency and have deposited the funds 
in the Bank of International Terror.  
Our analysts have concluded this transaction is so they can fund and build a network of people in the U.S. 

My assigment is:  when the bank balance is checked the second time to hack and switch the funds in the terrorist account 
with the funds of Joe's Coffee Shop, a struggling local store that is a favorite of Langley's.
*/


#include <iostream> // includes input and out as the standard library.

using namespace std;// means using standard namespace and that I dont have to type std:: in front of each line.
string Name;
// function prototype (declaration) "Bad Swap"when call copies of "Good swap"<JoeCoffeeShopAccount> and c are sent to
//parameters, x and y. 
void normalTransaction(int x, int y);

// function prototype (declaration) "Good Swap" when calling, the parameter x will refer to <JoeCoffeeShopAccount> and parameter y
// will refer to <JoeCoffeeShopAccount>
void hackedTransaction(int& x, int& y);

// first line of your program, your first instruction.
int main()
{
	cout << "\tWelcome to References to Hack and Bankrupting the Terrorists\n" << endl; // Title of Program 
	cout << "\nBefore we start, we would like to ask you some information to create the best experience.\n" << endl; // line for user agreement.
	cout << "\nWould you like to continue? Y/N?\n" << endl; // y/n gets printed out,questionf is user would like to proceed to answer quest

	char answer; // declares answer as varible.
	cin >> answer; // character inputs answer.
	if (answer == 'y' || answer == 'Y') // if user inputs y they will proceed to answer questions.
	{

		cout << "Enter your name: "; // Asks user to input their name
		cin >> Name; // user inputs recruit's name and the name is displayed throughout the simulation. 
		cout << "\nWelcome to the Bank of International Terror" << ",Recruit," << Name << "!\n";
		cout << "You will be hacking and bankrupting the terrorists.\n\n"; // tells users that they will be hacking the terrorists.
		// Joe's Coffee Shop Original Account Balance
		int JoeCoffeeShopAccount = 530;

		// Terrorist Original Account Balance
		int terroristAccount = 78994135;

		cout << "\tBank of International Terror\n" << endl; // name of the bank.
		cout << "------------------------------------" << endl; // visible line that separates the bank name and account balances.
		cout << "\tAccount Balances\n" << endl; // title for account balances.
		cout << "____________________________________\n" << endl; // visible line underneath Account balances. 
		cout << "Joe's Coffee Shop: $" << JoeCoffeeShopAccount << endl; // Joe's Coffee Shop Original Account Balance. 
		cout << "Terrorist Account: $" << terroristAccount << "\n\n" << endl; // Terrorists Original Account Balance. 
		
		cout << "Calling normalTransaction()\n"; // Title of Calling the Good Swap Transaction. 

		// Call the function normalTransaction with the integers <JoeCoffeeShopAccount> and <terroristAccount>
		normalTransaction(JoeCoffeeShopAccount, terroristAccount);

		cout << "Joe's Coffee Shop: $" << JoeCoffeeShopAccount << "\n"; // Joe's Coffee Shop Original Account Balance.
		cout << "Terrorist Account: $" << terroristAccount << "\n\n"; // Terrorists Original Account Balance.

		cout << "Calling hackedTransaction()\n"; // Title of Calling the Bad Swap Transaction. 

		// Call the function hackedTransaction with the integers <JoeCoffeeShopAccount> and <terroristAccount>
		hackedTransaction(JoeCoffeeShopAccount, terroristAccount);

		cout << "Joe's Coffee Shop: $" << JoeCoffeeShopAccount << "\n"; // Joe's Coffee Shop with new balance from terrorists.
		cout << "Terrorist Account: $" << terroristAccount << "\n"; // Terrorists with new balance from Joe's Coffee. 
	}
	else // if user click something else or n they will.
	{
		cout << " We understand that you're not ready, to try again, exit and enter 'Y' to continue." << endl; // message when user inputs no.
	}

	// if successful returns value. 
	return 0;
}

// Function definition
void normalTransaction(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

// Function definition
void hackedTransaction(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}