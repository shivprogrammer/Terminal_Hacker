﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Hacker : MonoBehaviour {

    // Game state
	int level;

    // Use this for initialization
    void Start () {
        ShowMainMenu();
    }

    void ShowMainMenu () {
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
        else if (input == "007") {
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
        Terminal.WriteLine("Alrighty son, you have chosen " + level);
    }
}
