# Auto-Hibernate
Simple script to automatically hibernate your Windows computer (without asking) at a specified time

# Why?

Since I sometimes stay on my computer way too late, I find it very helpful to force myself off of my computer at a certain time. Having my computer shut itself down automatically forces me to wrap up before the deadline. If I forget, it'll turn off right in my face.
It's also helpful for when I go off my computer but forget to shut it down. It's very nice to not have to worry about shutting it down.

# Requirents

- Windows
- GCC C++ Compiler (in PATH)

# Usage

1. Download [AutoHibernate.cpp](https://github.com/HorridModz/Auto-Hibernate/blob/main/AutoHibernate.cpp)
2. Open the file into a text editor, such as Notepad
3. Change hibernate hour and minute (military time)
4. Open a command line (such as cmd or Powershell) and cd to the directory you have downloaded the script to
5. Compile the script to an exe with this command:
```sh
g++ -o AutoHibernate.exe AutoHibernate.cpp -mwindows -lPowrprof
```
6. Navigate to the created exe file in your file explorer (it will be placed in the same directory as the C++ file)
7. Create a shortcut to this exe file, and place it in your startup folder (`C:\Users\%User%\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup`)

The script will automatically start itself next time you restart your computer.

**Disclaimer**: Your antivirus may scan the exe file. Allow it to scan, and feel free to put it into [Virustotal](https://www.virustotal.com).

# How to cancel it

If you need to stay on your computer late, you can cancel the script using this command:
```sh
taskkill /F /IM AutoHibernate.exe
```

However, be aware that this will keep it off until you either restart your computer or start it manually by double-clicking the exe file.
