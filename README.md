# Introduction
Building a light follower robot is a classic project when getting started into the world of electronics and robotics. Although this project is usually being build around cheap materials as a one-off project, we wanted to create a platform that is well designed, offering a pleasant experience while building the project, giving the capability of future tinkering, hacking and experimentation...



# Meet the ROBO light follower robot 🤖

![DSC_6525_ECP](https://user-images.githubusercontent.com/90136800/178928128-cd6f2645-390e-44e6-b454-9859a4cf7a6e.jpg)


The light follower robot is built around the Attiny85 microcontroller, which is the most supported and widely known Arduino IDE compatible Attiny MCU 🙂. The MCU comes pre-programmed to do the light following in order to ease you building your first robot from scratch! You can always download the code from our GitHub page. If you are not familiar working with the Attiny using the Arduino IDE you can check our relevant blog post 😊.

 

Since the ROBO Light Follower robot is built around the Attiny85 MCU, the circuit runs on 5V. An LM7805 IC voltage regulator is used to step down the battery voltage from ~9V to 5V. The robot has two MOSFETs (metal-oxide-semiconductor-field-effect-transistors) for controlling the two micro metal gearmotors. Two light sensors (photoresistors in series with a small potentiometer) are responsible for giving feedback to the microcontroller on which side has the most light at any moment. As always we love to give you the option to customize your robot, thus you can select the light sensitivity of each side by using the sensitivity calibration potentiometer, plus the overall robot speed using the speed calibration potentiometer. Even better, we designed a mini perfboard for you to hack and extend your Light Follower robot and reprogram it from the programming interface on top using an ISP programmer 🚀. The mini perfboard provides power (+5V), GND, and three data pins (be careful of the current usage of those pins, you might want to disconnect the photoresistors or the speed calibration pot), so happy hacking 😊.      

 

The PCB is carefully designed, marked with all basic components, their functionality and circuit blocks so that you can easily understand what's going on and how the robot is set up.
![LightFollowerRender2D_V1_P](https://user-images.githubusercontent.com/90136800/178928463-ed78d268-7333-4946-b0a5-62c80beddab9.png)
![LightFollowerRender2DBackside_V1_P](https://user-images.githubusercontent.com/90136800/178928468-a921e517-0e1a-470b-acb5-ca8462008864.png)


The back side of the PCB features the pinout table of the Attiny85 connections to the robot. LDR stands for "Light Dependent Resistor" which is basically the connection to the right or left light sensor.  

# What do you get:

A set of carefully selected parts to build your light follower robot and an Attiny85 MCU that comes pre-programmed to do the job.



In an essence, this is not just a light follower robot, but a mini cute robotic platform that can be customized to do lots of cool stuff ✨. 

# Assembly instructions:

The light follower robot was designed to be quite simple and straightforward to build. The only tools that you will need from your side, are a soldering iron and a Philips screwdriver for some M2 screws that hold the motors and the battery in place. You can use the following picture as an assembly reference:
![LightFollowerRender3D_V1](https://user-images.githubusercontent.com/90136800/178928695-be1d81c2-3d28-47cd-8de5-23a15ffd0186.png)


All ceramic capacitors and resistors have the same value, by design, so there is no issue in mixing and matching them 😊. You will need to watch for the polarity of the MOSFETs, LED, diode, and the Attiny85 MCU which is always marked on the board.

# Get it up and running:

Connect a 9V battery (be careful with the battery holder, sometimes it's a bit hard to fit and remove the battery from there), turn on the switch, and get a flashlight! That's it, your robot should start crawling and following your flashlight 🔦. If not, the calibration potentiometers might need a bit of adjusting in order to match your room's light intensity. Nevertheless, you can adjust them to match the exact behavior you like 😀

# Shop link:
https://robo.com.cy/collections/robo-originals/products/light-follower-robot
