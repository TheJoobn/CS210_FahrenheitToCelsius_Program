//TITLE:		Farenheit to Celcius Calculator.
//AUTHOR:		Jaden B. Knutson
/*DATE:			3/31/23	(5:23 AM)
				4/1/23	(6:57 AM) */
//DESCRIPTION:	
				/*This program reads from the FahrenheitTemperature.txt file and outputs to the CelsiusTemperature.txt file.
				This program reads a list from a file containing cities and their temps in fahrenheit.
				It converts those temps to celcius and then writes a line for each city to the output file.
				Each line in the output file contains the cities name and temp in celcius. /*

/*--------------------------------------------------*/
#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
using namespace std;

/*--------------------------------------------------*/
//Variables for city name and temp to store information from our input file
string cityName;
int fahrenheit;
int celcius;

/*---------------------------------------------------------------------------------------------------*/










/*START MAIN*//*START MAIN*//*START MAIN*/
/*---------------------------------------------------------------------------------------------------*/
int main() {


	/*--------------------------------------------------*/
	//File obect to read from file
	ifstream inFS;
	inFS.open("FahrenheitTemperature.txt"); //opens our file to be read

	//File object to write to file
	ofstream outFS;
	outFS.open("CelsiusTemperature.txt"); //opens our file to write to.
	//creates file if it doesn't exists yet



	/*--------------------------------------------------*/
	//Checkt to see if file can be opened, if not, outputs failure message to user.
	if (!inFS.is_open()) {
		cout << "Read File cannot be opened: FahrenheitTemperature.txt" << endl;
		return 1; //returns error

	}/*END IF*/

	//Checkt to see if file can be opened, if not, outputs failure message to user.
	if (!outFS.is_open()) {
		cout << "Write File cannot be opened: CelsiusTemperature.txt" << endl;
		return 1; //returns error

	}/*END IF*/


	/*--------------------------------------------------*/
	//Otherwise if file can be opened, outputs success message to user, and creates celcius file.
	else {
		cout << "\n" << "Celcius file has been written." << "\n";

		//Loop each line of the file reading the cities name and temp.
		while (inFS >> cityName >> fahrenheit) {

			//Conversion of Fahrenheit to Celcius
			celcius = (int)round(((fahrenheit - 32) * 5) / (double)9);

			//Writes a line containing the city name and temp to output file: 'CelsiusTemperature.txt'
			outFS << cityName << " " << celcius << endl;


		}/*END WHILE*/
	}/*END ELSE*/



	/*--------------------------------------------------*/
	//Closes the file objects for reading and writing.
	inFS.close();
	outFS.close();
	return 0;




}/*END MAIN*/
/*---------------------------------------------------------------------------------------------------*/
/*END MAIN*//*END MAIN*//*END MAIN*/