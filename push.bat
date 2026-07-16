@echo off

echo ===============================
echo Uploading to GitHub...
echo ===============================

git status

git add .

set /p msg=Enter Commit Message:

git commit -m "%msg%"

git push origin main

echo.
echo Press any key to exit...
pause