#include <iostream>
#include "Header.h"

// Global variables.

std::string username;
int age;
int jobSelection;
int clothesSelection;
int weaponSelection;
std::string jobType;
std::string homeTown;
std::string armourType;
std::string armourColour;
std::string weaponSelect;
bool selectionValid = false;


int main()
{

	std::string job;
	// Gets username
	std::cout << "                     =========================================================\n                     |  == WELCOME TO [insert name here] TEXT-BASED RPG! ==  |\n============================================================================================================\n\n";
	std::cout << "To start your journey, we require a few details to make the story more suited to you as a player!\n\n============================================================================================================\n\nFirst of all, what is your name?: ";
	std::cin >> username;
	// Gets age
	std::cout << "\nWhat is your age?: ";
	std::cin >> age;
	// Gets home town
	std::cout << "\nWhat is the name of your hometown? (Can be fantasy or reality): ";
	std::cin >> homeTown;

	// Job selection function
	std::cout << "\n\n== BACKSTORY ==\n\n" << username << " was born into a poor peasant family in " << homeTown << ".\nFrom a young age, " << username << " had to work hard to help their parents make ends meet.\nThey spent long hours in the fields, tending to crops and livestock, and doing whatever odd jobs they could find.\n\n" << username << "'s most recent job is being a... \n\n";
	JobSelection(selectionValid, jobSelection, username, jobType, job);
	
	// Debugging string "jobType" not returning (local variable not working myb use pointers)
	std::cout << "\n\n\n========================================\n\n\n" << job << "\n\n\n========================================\n\n\n";
	std::cout << "\n== BACKSTORY CONTINUED ==\n\nDespite their difficult circumstances, " << username << " always took pride in their appearance, even if their clothes were tattered and worn.\nThey would spend what little money they had on colorful scraps of cloth and ribbons.\n" << username << " is currently wearing...\n\n";
	
	// Clothes selection function
	ClothesSelection(jobType, clothesSelection, selectionValid, armourType, username);

	// Colour selection function
	ColourSelection(jobType, username, armourColour);

	// Weapon selection function
	WeaponSelection(username, jobType, weaponSelection, selectionValid, weaponSelect);

	std::cout << "\n\n========\n\n== FINISHED CHARACTER DESCRIPTION ==\n\n" << username << " is a " << age << " year old " << jobType << " who is currently wearing their " << armourColour << " " << armourType << " and wields a " << weaponSelect << "!\n\n========\n\n = != Are you ready to start ? = != ";
	std::cin.get();
}