using UnityEngine;

public class Hacker : MonoBehaviour {

    // Game configuration data
    const string resetMessage = "Type \'menu\' to reset";
	string[] LevelOnePasswords = { "donkey", "victor", "terrain", "zion" };
    string[] LevelTwoPasswords = { "occupation", "environment", "obsession", "madness", "caution" };
    string[] LevelThreePasswords = { "serendipity", "intergalactic", "trepidation", "inexplicable", "cryogenic" };

    // Game state
    int level;
    string password;

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
        Terminal.WriteLine("Press 3 for NASA");
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
        bool isValidLevelNumber = (input == "1" || input == "2" || input == "3");
        if (isValidLevelNumber) {
            level = int.Parse(input);
            AskForPassword();
        }
        else if (input == "007") {
			Terminal.WriteLine("Please select a level Mr. Bond!");
		}
        else {
            Terminal.WriteLine("Please enter a valid level");
        }
    }

    void AskForPassword() {
        currentScreen = Screen.Password;
        Terminal.ClearScreen();
        SetRandomPassword();
        Terminal.WriteLine("Enter your password, hint: " + password.Anagram());
        Terminal.WriteLine(resetMessage);
    }

    void SetRandomPassword() {
        switch (level) {
            case 1:
                password = LevelOnePasswords[Random.Range(0, LevelOnePasswords.Length)];
                break;
            case 2:
                password = LevelTwoPasswords[Random.Range(0, LevelTwoPasswords.Length)];
                break;
            case 3:
                password = LevelThreePasswords[Random.Range(0, LevelThreePasswords.Length)];
                break;
        }
    }

    void CheckPassword(string input) {
        if (input == password) {
            DisplayWinScreen();
        }
        else {
            AskForPassword();
        }
    }

    void DisplayWinScreen() {
		currentScreen = Screen.Win;
        Terminal.ClearScreen();
        ShowLevelReward();
        Terminal.WriteLine(resetMessage);
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
                break;
            case 3:
                Terminal.WriteLine("YOU HAVE WON A ROCKET SHIP");
                Terminal.WriteLine(@"
                    __
  ,----------------(  \ 
 ( ) - ) -  ) - ) - )  ) 
  `----------------(__/ 
"
                );
                break;
        }
    }
}
