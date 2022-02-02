echo off
cls
color 0f
del /q TEST.exe
gcc GCHZ.c -o TEST.exe
".\TEST.exe"
color 0f
echo Press and key to continue...
pause>nul