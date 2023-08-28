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

## License
This project is licensed under the Apache License 2.0.

## Contributing
Contributions are welcome! If you find a bug or want to suggest an enhancement, please open an issue or submit a pull request.

## Contact
For questions or inquiries, feel free to contact tololoicristianstefan@gmail.com.
