## Overview

This repository contains a proof-of-concept (PoC) malware implemented in C, designed for Windows 10 systems. The malware establishes a shell connection, installs a keylogger, creates a backdoor for remote access, and provides functionality for directory navigation.

## Features

- **Shell Connection**: Uses C language to establish a shell-based connection to the target Windows 10 system.
- **Keylogger**: Implements a keylogger to capture and record keystrokes from the compromised machine.
- **Backdoor**: Sets up a backdoor for remote access and control of the infected system.
- **Directory Navigation**: Allows navigation through directories on the target machine, facilitating file exploration and manipulation.

## Usage

1. **Build**: Compile the `malware.c` source file using a suitable C compiler for Windows.
2. **Deploy**: Execute the compiled binary on the target Windows 10 system to deploy the malware.
3. **Access**: Monitor captured keystrokes and remote sessions using the provided command and control (C2) mechanisms.

## Disclaimer

**This repository is intended for educational and research purposes only. Unauthorized use of this malware for illegal activities, including unauthorized access and data theft, is strictly prohibited. Ensure you have explicit permission before conducting any security testing or penetration testing.**

## License

This repository does not include a license. Use of the code is at your own risk and responsibility.
