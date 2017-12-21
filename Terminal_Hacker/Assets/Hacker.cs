using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Hacker : MonoBehaviour {

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
            Terminal.WriteLine("Congratulations!! You are the baddest hacker in all the land and you have received a prize of 10 Bitcoins!!");
        }
    }

    void RunMainMenu(string input) {
        if (input == "007") {
            Terminal.WriteLine("Please select a level Mr. Bond!");
        }
        else if (input == "1") {
            level = 1;
            password = "donkey";
            StartGame();
        }
        else if (input == "2") {
            level = 2;
            password = "combobulate";
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
            ShowGameChallenge(1);
        }

        else if (level == 2) {
            ShowGameChallenge(2);
        }
    }

    void ShowGameChallenge(int level) {
        if (level == 1) {
            Terminal.WriteLine("What is the anagram of \'ram?\'");
            LevelOne(input);
        }

        if (level == 2) {
            Terminal.WriteLine("Alright big boy, this one is a bit of a toughie. What is the anagram for: \'ghariltmo\'");
            LevelTwo(input);
        }
    }

    void LevelOne(string input) {
        if (input.ToLower() == "ram") {
            currentScreen = Screen.Win;
        }
        else {
            Terminal.WriteLine(retry);
        }
    }

    void LevelTwo(string input) {
        if (input.ToLower() == "algorithm") {
            currentScreen = Screen.Win;
        }
        else {
            Terminal.WriteLine(retry);
        }
    }

    void CheckPassword(string input) {
        //if (input == password) {
            
        //}
    }
}
