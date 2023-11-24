#!/bin/bash

# Compile the program
gcc flush_test_new.c -o flush_test_new

# Run the program without adding '\n' characters
echo "Running the program without '\\n'..."
./flush_test_new > output_without_newline.txt 2>&1

# Run the program with added '\n' characters
echo "Running the program with '\\n'..."
./flush_test_new -n > output_with_newline.txt 2>&1

echo "Script execution completed."
