# Basic C++ Library

![License](https://img.shields.io/badge/license-Apache%202.0-blue.svg)

"Basic" is a user-friendly C++ library designed to simplify console interactions. It provides functions for text printing, character-by-character typing, and a progress bar function, ideal for interactive console applications.

## Features

- Print text to the console with the `print` function.
- Type out text character by character with the `type_write` functions, allowing for animations and interactive effects.
- Display a progress bar with the `progress_bar` function to visualize task completion.
- Control typing speed and progress bar animation with customizable options.

## Installation

Clone the repository and include the necessary header files in your C++ project.

```cpp
#include "basic.h"
```

## Usage

Printing to the Console
```cpp
print("Hello, world!");
```

Typing Text with Default Delay
```cpp
type_write("Welcome to the Basic library!");
```

Typing Text with Custom Delay
```cpp
type_write("Custom speed typing...", 25);  // 25 ms delay between characters
```

Displaying a Progress Bar
```cpp
progress_bar(50, 100, 50);
```

# Example
```cpp
#include "basic.h" // Include the header file here

int main()
{
    // Set up your sentences and other variables here
    std::string sentence1 = "Hello, welcome to the presentation!\n";
    std::string sentence2 = "This is an example of typing text.\n";
    std::string sentence3 = "Let's display a progress bar.\n";

    // Print a sentence
    print(sentence1);

    // Type out a sentence with default speed
    type_write(sentence2);

    // Type out a sentence with custom speed
    type_write(sentence3, 30); // 30 milliseconds delay

    int progress = 0;

    while (run)
    {
        progress += 1;
        progress_bar(progress, 100, 30); // 30 characters wide progress bar
        Sleep(16); // Delay for visualization
        if (progress >= 100)
            break;
    }

    return 0;
}
```

## License
This project is licensed under the Apache License 2.0.

## Contributing
Contributions are welcome! If you find a bug or want to suggest an enhancement, please open an issue or submit a pull request.

## Contact
For questions or inquiries, feel free to contact tololoicristianstefan@gmail.com.
