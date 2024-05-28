# 42-minitalk

## Description
The **42-minitalk** project is a small exercise in inter-process communication (IPC) using signals in C. It consists of two programs, a client and a server, which communicate with each other using the `kill` and `sigaction` system calls. This project is often assigned in the 42 curriculum to solidify students' understanding of signal handling and IPC concepts in Unix-like operating systems.

## Repository Structure
The repository contains the following key files and directories:

- **Makefile**: Script to compile the client and server programs.
- **server.c**: Source code for the server program.
- **client.c**: Source code for the client program.

## Functions Implemented
The project includes the following functionalities:

- **Signal handling**: Both client and server programs handle signals (`SIGUSR1` and `SIGUSR2`) to transmit messages between processes.
- **Message transmission**: The client converts messages into binary and sends them bit by bit to the server, which reconstructs and displays the message.
- **Basic error handling**: The programs include basic error handling to manage incorrect usage or failed signal transmission.

## How to Use
To compile and use the programs, follow these steps:

1. Clone the repository:
    ```sh
    git clone https://github.com/i4b2c/42-minitalk.git
    cd 42-minitalk
    ```

2. Compile the server and client programs using the Makefile:
    ```sh
    make
    ```

3. Launch the server in one terminal window:
    ```sh
    ./server
    ```

4. In another terminal window, launch the client with the server's process ID as an argument:
    ```sh
    ./client [server_pid]
    ```
   Replace `[server_pid]` with the process ID of the server obtained in step 3.

5. Enter the message you want to send from the client terminal and press `Enter` to transmit it to the server.

## Testing
While there isn't an automated test suite provided, you can manually test the functionality of the client-server communication by running the programs and sending messages between them.
