using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Hacker : MonoBehaviour {

    // Game configuration data
	string[] LevelOnePasswords = { "donkey", "victor", "terrain" };
    string[] LevelTwoPasswords = { "occupation", "environment", "obsession" };

    // Game state
    int level;
    string userGuess;
    string password;
    string retry = "Sorry, try again!";

    enum Screen { MainMenu, Password, Win };
    Screen currentScreen;

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
        else if (currentScreen == Screen.Password) {
            CheckPassword(input);
        }
        else if (currentScreen == Screen.Win) {
            Terminal.WriteLine("YOU ARE A WINNER");
        }
    }

    void RunMainMenu(string input) {
        bool isValidLevelNumber = (input == "1" || input == "2");
        if (isValidLevelNumber) {
            level = int.Parse(input);
            StartGame();
        }
        else if (input == "007") {
			Terminal.WriteLine("Please select a level Mr. Bond!");
		}
        else {
            Terminal.WriteLine("Please enter a valid input");
        }
    }

    void StartGame() {
        currentScreen = Screen.Password;
        Terminal.ClearScreen();
        switch(level) {
            case 1:
                password = LevelOnePasswords[0];
                break;
            case 2:
                password = LevelTwoPasswords[0];
                break;
            default:
                Debug.LogError("Invalid level number");
                break;
        }
        Terminal.WriteLine("Please enter your guess of what the password is: ");
    }
  //  void StartGame(string input) {
		//currentScreen = Screen.Password;
    //    Terminal.ClearScreen();
    //    Terminal.WriteLine("Please enter your password: ");
    //    CheckPassword(input);
    //}

    //void CheckPassword(string input) {
    //    switch (input) {
    //        case "1":
    //            password = LevelOnePasswords[0];
    //            break;
    //        case "2":
    //            password = LevelTwoPasswords[0];
    //            break;
    //    }
    //}
}
