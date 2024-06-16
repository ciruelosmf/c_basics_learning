# c_basics_learning
 c basics learning along gpt4


Learning the C programming language is a great way to get a strong foundation in programming concepts. Here's a step-by-step guide to get you started with C programming using Visual Studio Code (VS Code) on Windows 10:

# Step 1: Install VS Code
If you haven't already installed Visual Studio Code, you can download and install it from the official website.

# Step 2: Install the C/C++ Extension for VS Code
Open VS Code.
Go to the Extensions view by clicking on the square icon in the sidebar or pressing Ctrl+Shift+X.
Search for C/C++ and install the extension provided by Microsoft.

# Step 3: Install a C Compiler
To compile and run C programs, you'll need a C compiler. The most commonly used one is GCC (GNU Compiler Collection). You can install it via the MSYS2 software distribution.

Download and install MSYS2 from the official website.
Open the MSYS2 MSYS terminal from the Start menu.
Update the package database and base packages:
 
pacman -Syu

Close the terminal and open it again to ensure the changes take effect.
Install the GCC compiler and other necessary tools:


pacman -S base-devel mingw-w64-x86_64-toolchain


Add MSYS2 to your system PATH by editing your environment variables:
Right-click on 'This PC' or 'My Computer' and select 'Properties'.
Click on 'Advanced system settings' and then 'Environment Variables'.
In the 'System variables' section, find the Path variable and click 'Edit'.
Add the following paths (adjust if your MSYS2 is installed in a different location):


C:\msys64\mingw64\bin
C:\msys64\usr\bin

