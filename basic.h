#pragma once

#include <iostream>
#include <string>
#include <Windows.h>

bool run = true;
// Function to print a string to the console
void print(std::string print_sentence)
{
    std::cout << print_sentence;
}

// Function to type out a string character by character with a default delay
void type_write(std::string tw_sentence)
{
    // Loop through each character in the input string
    for (int i = 0; i < tw_sentence.length(); i++)
    {
        // Output the current character
        std::cout << tw_sentence[i];

        // Introduce a delay using the Sleep function from Windows.h
        Sleep(69);  // Delay of 69 milliseconds (approximately 15 characters per second)
    }
}

// Function to type out a string character by character with a custom delay
void type_write(std::string tw_sentence2, int speed)
{
    // Loop through each character in the input string
    for (int i = 0; i < tw_sentence2.length(); i++)
    {
        // Output the current character
        std::cout << tw_sentence2[i];

        // Introduce a delay using the Sleep function from Windows.h
        Sleep(speed);  // Custom delay specified by the caller in milliseconds
    }
}

void progress_bar(int progress, int steps, int bar_width)
{
    // Calculate the ratio of completed steps to total steps
    float ratio = static_cast<float>(progress) / steps;

    // Calculate the width of the completed portion of the progress bar
    int completedWidth = static_cast<int>(bar_width * ratio);

    // Create a string to represent the progress bar
    std::string bar;

    // Add '=' characters to represent completed steps
    for (int i = 0; i < completedWidth; ++i)
    {
        bar += '=';
    }

    // Add '-' characters to represent remaining steps
    for (int i = completedWidth; i < bar_width; ++i)
    {
        bar += '-';
    }

    // Clear the current line and display the progress bar and percentage
    std::cout << "\r[" << bar << "] " << static_cast<int>(ratio * 100) << "%";

    // Flush the output stream to ensure the content is immediately displayed
    std::cout.flush();
}