# C Program Repository

This repository contains a collection of useful Linux scripts that helped me have a better understanding of Shell/Bash Scripting

## Scripts
### [Memory Inspector](Problem_1.c)
- This C program prints the memory addresses and contents of the input parameters of the main() function. It focuses on argv, the array of pointers, and command line arguments. The output includes addresses related to argv, individual argv entries, and the strings within each entry along with their respective memory addresses. The goal is to visualize the memory structure associated with the command line arguments.
### [C Parser](Problem_2.c)
- This C program is a basic command-line parser using getopt(). It processes options like '-c,' '-d,' '-u,' '-f,' and '-s,' printing messages accordingly. If an option requires a value, it prompts the user; for unknown options, it provides a message. The program concludes by printing any remaining non-option arguments.
### [Enviroment Variable Sorter](Problem_3.c)
- This C program prints and sorts environment variables alphabetically based on their names using a bubble sort algorithm. It takes advantage of the envp parameter in the main() function, displaying the original environment variables before sorting and the sorted ones afterward.
