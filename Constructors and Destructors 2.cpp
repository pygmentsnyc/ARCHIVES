#include <iostream> //Input / Output Libraries
#include <cstdlib> //Defines several general purpose functions, including dynamic memory management, random number generation, communication with the environment, integer arithmetics, searching, sorting and converting.
#include <string> //String data type lib
using namespace std;

//global scope

class Dog {     //Declare class name "Cap Letter" - Dog      CLASS: Data Type "Private by Default" 
			   //Data members/attributes: (variables) age, weight, color
			  //Access specifier (restrcited by fucntions of this partciluclar class)
	 //private to the class
	int age;
	int weight;
	string color;

public: //Actions/Methods/Fucntions

	void bark() {
		cout << "Woof! ";
	}

	void bark(string noise) {
		cout << noise << endl;
	}


	/*
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 //Accesor - Setters: Assigns Value
	 void set_age (int yrs) {age = yrs; }  //In line functions - A function where and headers are in one
	 void set_weight (int lbs) {weight = lbs; }
	 void set_color(string clr) {color = clr; }

	 //Accesor - Getters: Retrieves Value
	 int get_age() {return age; }        //In line functions
	 int get_weight() {return weight; }
	 string get_color() {return color; }
   */
   ////////////////////////////////////////////////////////////////////////////////////////////////////////////    


											   //Constructor must be the same name as the Calss
	Dog() {                                 //Default Constructor: (0) Arguements in the Parameter - No Return // (::) - 
		age = 1;                                //(::)SubClass: Scoping Operator
		weight = 10;
		color = "Gray";
	}


	Dog(int age, int weight, string color) {    //Overloading: Constructor with multi (3) Arguements in the Parameter
		this->age = age;
		this->weight = weight;
		this->color = color;
	}


	Dog(int age, int weight) {                 //Overloading: Constructor with (2) Arguements in the Parameters
		this->age = age;
		this->weight = weight;
		this->color = "Brown";
	}


	~Dog() {                                    //(~) Default Destructor

	}


	// AdD Pullic getter Methods - To retrieve individual Values from each of the private
	int get_age() { return age; }
	int get_weight() { return weight; }
	string get_color() { return color; }

};


int main() {

	//Instantiate object of type Dog

	/*Dog fido;                          //Data Type , Object Name

		  fido.set_age(3);             //Assign Data to the Object named fido
		  fido.set_weight(15);
		  fido.set_color("Brown");

		  cout<<"fido is a "<<fido.get_color()<<" dog"<<endl;  //Retrieve Data and display
		  cout<<"fido is "<<fido.get_age()<<" year old dog"<<endl;
		  cout<<"fifo weights "<<fido.get_weight()<<" pounds "<<endl;

		  fido.bark(); fido.bark(); fido.bark(); //Calling the fucntion
   */

	Dog fido(3, 16, "Black"); //Object (fido)
	cout << "fido is a " << fido.get_color() << " dog" << endl;  //Retrieve Data and display
	cout << "fido is " << fido.get_age() << " year old dog" << endl;
	cout << "fido weights " << fido.get_weight() << " pounds " << endl;
	cout << endl;

	fido.bark(); fido.bark(); fido.bark(); //Calling the fucntion
	cout << endl;
	fido.bark("GRR!");
	cout << endl << endl;


	Dog rasco(4, 200); //Object (rasco)
	cout << "rasco is a " << rasco.get_color() << " dog" << endl;  //Retrieve Data and display
	cout << "rasco is " << rasco.get_age() << " year old dog" << endl;
	cout << "rasco weights " << rasco.get_weight() << " pounds " << endl;
	cout << endl;

	rasco.bark(); rasco.bark(); rasco.bark(); //Calling the fucntion
	rasco.bark("How,How!");
	cout << endl << endl;

	Dog sammy(0, 150); //Object (rasco) / Calling the Default Constructor
	cout << "sammy is a " << fido.get_color() << " dog" << endl;  //Retrieve Data and display
	cout << "sammy is " << rasco.get_age() << " year old dog" << endl;
	cout << "sammy weights " << sammy.get_weight() << " pounds " << endl;
	cout << endl;

	sammy.bark(); sammy.bark(); sammy.bark(); //Calling the fucntion      
	sammy.bark("Meow!");

	system("PAUSE");
	return 0;  //exit status

}




