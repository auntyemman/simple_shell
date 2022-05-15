# Unix shell - Definition
A Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts.[2]

Users typically interact with a Unix shell using a terminal emulator; however, direct operation via serial hardware connections or Secure Shell are common for server systems. All Unix shells provide filename wildcarding, piping, here documents, command substitution, variables and control structures for condition-testing and iteration.

#Concept
The most generic sense of the term shell means any program that users employ to type commands. A shell hides the details of the underlying operating system and manages the technical details of the operating system's application programming interface, which is the level of the operating system that programs running on that operating system use.

In Unix-like operating systems, users typically have many choices of command-line interpreters for interactive sessions. When a user logs into the system interactively, a shell program is automatically executed for the duration of the session. The type of shell, which may be customized for each user, is typically stored in the user's profile, for example in the local passwd file or in a distributed configuration system such as NIS or LDAP; however, the user may execute any other available shell interactively.

#Hsh
A simple UNIX command interpreter written as part of the low-level programming and algorithm track at Holberton School.
Hsh is a simple UNIX command language interpreter that reads commands from either a file or standard input and executes them.

#Invocation
Usage: Hsh

To invoke Hsh, compile all .c files in the repository and run the resulting executable:

```gcc *.c -o Hsh```
```./Hsh```

