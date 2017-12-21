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
                password = LevelOnePasswords[Random.Range(0, LevelOnePasswords.Length)];
                break;
            case 2:
                password = LevelTwoPasswords[Random.Range(0, LevelTwoPasswords.Length)];
                break;
            default:
                Debug.LogError("Invalid level number");
                break;
        }
        Terminal.WriteLine("Enter your password, hint: " + password.Anagram());
    }

    void CheckPassword(string input) {
        if (input == password) {
            DisplayWinScreen();
        }
        else {
            Terminal.WriteLine(retry);
        }
    }

    void DisplayWinScreen() {
		currentScreen = Screen.Win;
        Terminal.ClearScreen();
        ShowLevelReward();
    }

    void ShowLevelReward() {
        switch (level) {
            case 1:
                Terminal.WriteLine("Congrats, have a book!");
                Terminal.WriteLine(@"
     _______
    /     //
   /     //
  /____ //
 (_____(/                
"
                );
                Terminal.WriteLine("Type \'menu\' to reset");
                break;
            case 2:
                Terminal.WriteLine("You are officially Neo. Follow the white rabbit");
                Terminal.WriteLine(@"
     \\
      \\_
   _-~~ .\
 ,~   )___>
@~    /    
 \____)
"
                );
                Terminal.WriteLine("Type \'menu\' to reset");
                break;
            default:
                Debug.LogError("Invalid level reached");
                break;
        }
    }
}
