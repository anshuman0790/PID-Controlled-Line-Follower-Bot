# PID-Controlled-Line-Follower-Bot
**INTRODUCTION:**

Line follower is a machine that can follow a path. The path can be
visible like a black line on a white surface. Sensing a line and
manoeuvring the robot to stay on course, while constantly
correcting wrong moves using feedback from the sensor forms a
simple yet effective system.

This project inspires to make connections
across several disciplines rather than learning topics in isolation as it
combines mechanical, electronic, electrical and programming skills.

• It gives visual grasp of math and science.

• It builds logical thinking.

• It brings out innovation and creativity.

• It enhances problem solving skills.

Line Follower is one of the most important aspects of robotics. A Line
Following Robot is an autonomous robot which is able to follow either
a black or white line that is drawn on the surface consisting of a
contrasting colour. It is designed to move automatically and follow the
plotted line.



**Improving the standard Line Follower**

• Instead of the conventional use of 2 IR sensors, we have used an
array of 5 sensors to improve accuracy of our bot.
The 5 sensors cover more area to distinguish between the black
line and the white part while taking sharp turns.

• In addition to this, a PID controller has been integrated in the code
to take the real life errors into consideration and thus minimising
them to make the bot practically ready.

• The line follower robot using Arduino is a self-operating system
that detects and follows track drawn on the floor. The track
consists of a black path drawn on white surface .

• The robot uses photodiode sensors to sense the line; an array of
four IR- LEDs (TX) and Photodiode sensors (Rx), facing the
ground used in this setup. An analogy signal is obtained in output,
depends on the amount of light reflected back, which is provided
to the comparator to produce 0s and 1s which are then fed to the
Arduino

• We can use any number of sensors. If we have low number, then
our robot movement is not smooth and it may face problems
during sharp turns. If higher number of sensors were, used robot
movement will become smooth and reliable for sharp turns; it
requires complex programming for micro-controller and requires
more hardware, which is its disadvantage. Thus, optimum number
of sensors required.

• The speed of the dc motor is control by feeding PWM from
Arduino to the enable pin of the L293D which change the voltage
across the motor. Due to which speed is also decreased. On the
command over the speed and the direction is also controlled.

• Sensing a line and maneuvering the robot to stay on course, while
constantly correcting wrong moves using feedback mechanism
forms a simple yet effective closed loop system.

**COMPONENTS USED:**

• Arduino Uno

• L298N motor driver

• Plastic gear motor

• Array of 5 IR sensor

• Li-ion battery 2000mah

• Jumper wires

• Switch

**PID Controller Theory :**

The basic structure of a system with PID control implemented is
illustrated below. The system• output (also called the process variable) with a sensor and
compared to the reading to the reference value (also called the set
point). Reference and the measured output are compared and the
result is an error value which is used in calculating proportional,
integral, and derivative responses. Summing the three responses to obtain the output of
the controller. The output of the controller is used as an input to
the system you wish to control, changing some aspect of the
system.
