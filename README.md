# INA226_M5stack

This project demonstrates how to use the M5Stack Core to measure voltage, current, and power with the INA226 sensor.

## Libraries Used

- [M5Stack](https://github.com/m5stack/M5Stack)
- [INA226_asukiaaa](https://github.com/asukiaaa/INA226_asukiaaa) ← **Required!**

## How to Upload This Project to GitHub

1. **Create a new repository on GitHub**  
   Go to [https://github.com/new](https://github.com/new) and create a new repository.

2. **Open a terminal in your project folder**  
   Example for Windows:
   ```sh
   cd c:\Users\wei43\Documents\PlatformIO\Projects\INA226_M5stack
   ```

3. **Initialize git and push your code**
   ```sh
   git init
   git add .
   git commit -m "Initial commit"
   git branch -M main
   git remote add origin https://github.com/your-username/your-repo-name.git
   git push -u origin main
   ```
   Replace `your-username` and `your-repo-name` with your GitHub info.

4. **Done!**  
   Your project is now uploaded to GitHub.

## How to Use

1. **Install the required libraries**  
   - Install [INA226_asukiaaa](https://github.com/asukiaaa/INA226_asukiaaa) via PlatformIO Library Manager or Arduino Library Manager.
   - Install [M5Stack](https://github.com/m5stack/M5Stack) library.

2. **Connect the INA226 sensor to your M5Stack Core**  
   - Default I2C pins for M5Stack Core: SDA = 21, SCL = 22

3. **Build and upload the code to your M5Stack Core.**

4. **View the voltage, current, and power readings on the M5Stack LCD.**
