COMPANY : CODTECH IT SOLUTIONS

NAME : ANKUSH KUMAR

INTERN ID : CT04DF1328

DOMAIN : C PROGRAMMING

DURATION : 4 WEEKS

MENTOR NAME : NEELA SANTHOSH KUMAR

File Handling – A Detailed Description

File handling is an essential concept in programming that allows us to store, retrieve, and manipulate data in files on a computer. Without file handling, any data entered during the execution of a program would be lost once the program ends. File handling provides a way to save data permanently for later use.

What is File Handling?
File handling refers to the process of performing operations on a file, such as creating, opening, reading, writing, and closing files. These operations allow programs to interact with files stored on a storage device like a hard disk or memory card.

In C, and many other programming languages, files can be of two main types:

Text Files – These store data in readable characters (like .txt files).
Binary Files – These store data in binary form (like images, audio, or .exe files), which is not human-readable.
Why is File Handling Important?
Data Storage: Files allow the storage of large amounts of data permanently.
Data Retrieval: Data can be read from a file whenever required, even after the program ends.
Efficiency: Working with files makes applications more powerful and interactive.
Real-World Usage: Used in banking software, student management systems, document editing, and more.
Basic File Operations
Most programming languages support the following basic file operations:

Create a File – Make a new file on disk.
Open a File – Access a file for reading or writing.
Read from File – Get data from the file into the program.
Write to File – Save data from the program to the file.
Close the File – Disconnect the program from the file after use.
File Handling in C (Example)
In C language, file operations are done using the FILE pointer and functions from the stdio.h library.

Opening a File
c FILE *fp; fp = fopen("data.txt", "r"); // Open for reading

Modes:

"r" – Read
"w" – Write (overwrites if file exists)
"a" – Append
"rb", "wb", "ab" – Binary versions of above
Writing to a File
c FILE *fp = fopen("data.txt", "w"); fprintf(fp, "Hello, World!"); fclose(fp);

Reading from a File
c FILE *fp = fopen("data.txt", "r"); char ch; while ((ch = fgetc(fp)) != EOF) { printf("%c", ch); } fclose(fp);

Closing a File
Always use fclose(file_pointer); to release resources after file use.

Common Functions Used
fopen() – Opens a file.
fclose() – Closes the file.
fgetc() / fputc() – Reads or writes one character.
fgets() / fputs() – Reads or writes a string.
fread() / fwrite() – Used for binary file read/write.
fprintf() / fscanf() – Works like printf and scanf, but with files.
Errors in File Handling
Some common issues include:

File not found (fopen() returns NULL)
Incorrect file path or permissions
Forgetting to close the file (fclose())
Always check if the file was opened successfully:

c if (fp == NULL) { printf("Error opening file!\n"); }

Real-Life Applications of File Handling
Saving user data in games
Creating reports or logs
Managing student or employee records
Reading configuration settings
Backup and restore operations
Conclusion
File handling is a crucial concept that allows data to be stored and retrieved effectively. Whether you’re making a simple text editor or a complex data management system, file handling enables your programs to be more useful and dynamic. Mastering file handling lays a strong foundation for learning databases, data structures, and software development in general.

#OUTPUT
![Screenshot 2025-06-30 013952](https://github.com/user-attachments/assets/e2f5d5e1-c3ef-4695-9e55-55a811929ada)
