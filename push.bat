@echo off

echo ===============================
echo Uploading to GitHub...
echo ===============================

git add .

set /p msg=Enter Commit Message: 

git commit -m "%msg%"

git push origin main

echo.
echo ===============================
echo Upload Complete!
echo ===============================

pause