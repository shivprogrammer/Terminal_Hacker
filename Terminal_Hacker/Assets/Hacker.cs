using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Hacker : MonoBehaviour {

    // Game state
	int level;
    string passwordGuess;

    enum Screen { MainMenu, Password, Win };
    Screen currentScreen;

    //string[] LevelOne = { "ram", "orb", "its" }; // arm, bro, sit
    //Random random = new Random();
    //int chosenNum = random.Next(2);

    // Use this for initialization
    void Start () {
        ShowMainMenu();
    }

    void ShowMainMenu () {
        currentScreen = Screen.MainMenu;
        Terminal.ClearScreen();
        Terminal.WriteLine("What would you like to hack into?");
        Terminal.WriteLine("Press 1 for the local library");
        Terminal.WriteLine("Press 2 for the police station");
        Terminal.WriteLine("Enter your selection: ");
    }

    void OnUserInput (string input) {
        if (input == "menu") {
            ShowMainMenu();
        }
        else if (currentScreen == Screen.MainMenu) {
            RunMainMenu(input);
        }
        else if (currentScreen == Screen.Win) {
            Terminal.WriteLine("Congratulations!! You are the baddest hacker in all the land and you have received a prize of 10 Bitcoins!!");
        }
    }

    void RunMainMenu(string input) {
        if (input == "007") {
            Terminal.WriteLine("Please select a level Mr. Bond!");
        }
        else if (input == "1") {
            level = 1;
            StartGame();
        }
        else if (input == "2") {
            level = 2;
            StartGame();
        }
        else {
            Terminal.WriteLine("Please enter a valid input");
        }
    }

    void StartGame() {
		currentScreen = Screen.Password;
        Terminal.WriteLine("Alrighty son, you have chosen " + level);

        if (level == 1) {
            ShowLevelOne();
        }

        else if (level == 2) {
            ShowLevelTwo();
        }
    }

    void ShowLevelOne(string input) {
        Terminal.WriteLine("What is the anagram of \'ram?\'");

        if (input.ToLower() == "ram") {
            currentScreen = Screen.Win;
        }
        else {
            Terminal.WriteLine("Sorry, try again!");
        }
    }

    void ShowLevelTwo(string input) {
        Terminal.WriteLine("Alright big boy, this one is a bit of a toughie. What is the anagram for: \'ghariltmo\'");

        if (input.ToLower() == "algorithm") {
            currentScreen = Screen.Win;
        }
        else {
            Terminal.WriteLine("Sorry, try again!");
        }
    }
}
