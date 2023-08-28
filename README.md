# Basic C++ Library

![License](https://img.shields.io/badge/license-Apache%202.0-blue.svg)

"Basic" is a user-friendly C++ library designed to simplify console interactions. It provides functions for text printing and character-by-character typing, ideal for interactive console applications.

## Features

- Print text to the console with the `print` function.
- Type out text character by character with the `type_write` functions, allowing for animations and interactive effects.
- Control typing speed with customizable delay options.

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

## License
This project is licensed under the Apache License 2.0.

## Contributing
Contributions are welcome! If you find a bug or want to suggest an enhancement, please open an issue or submit a pull request.

## Contact
For questions or inquiries, feel free to contact tololoicristianstefan@gmail.com.
