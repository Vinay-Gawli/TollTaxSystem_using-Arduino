# TollTaxSystem_using-Arduino
Toll Tax System using Arduino: Ultrasonic Sensor with Servo Motor

Hey there! In this project, I’ll show you how I built an automated toll tax system using an Arduino Uno. It’s a pretty simple system, and I’ve broken everything down into step-by-step instructions, complete with a detailed explanation of the code and the circuit diagram.

I’ve been working on both intermediate and advanced-level projects for some time now, and one thing I've noticed is that ultrasonic sensors and servo motors are super popular. Many beginners love to work with these components, and I can totally see why. In this project, you’ll learn the basics, like how to detect a vehicle using an ultrasonic sensor, and how to control a servo motor to open a barrier when a vehicle is detected.

Before we jump into the build, let's talk about the toll tax system for a moment—or what some people refer to as a "toll plaza halting system."

Do you remember the first time you drove through a toll plaza? That impressive stopping mechanism they use to halt vehicles as they pass by to collect the toll? Well, I decided to make a mini version of that exact system for this project. The idea is inspired by real-world toll plazas, where vehicles are stopped using an automated barrier that’s triggered when a vehicle is detected by a sensor. Sometimes, the barrier can also be activated manually by pressing a button.

For our version, we’re using the HC-SR04 ultrasonic distance sensor to detect vehicles, and a micro servo motor to lift the barrier when a vehicle is detected. That’s the basic mechanism behind this project.

Now, let’s dive right into the building stage!



Materials required to build automated toll system:
    Arduino Uno with atmega328P
    Ultrasonic sensor HC-SR04
    Plastic geared Micro servo
    Single strand wire instead of jumper wires
    Mini Breadboard
    Lithium ion battery with case
    Few drops of superglue
    Arduino programming cable
    Arduino IDE
    A Piece of popsicle stick

![Arduino-toll-system-building-phase](https://github.com/user-attachments/assets/4c48c0db-f641-4c28-bd26-75b7bf9df70b)


Circuit Diagram of toll system:

![Arduino-toll-system-circuit-diagram-using-ultrasonic-sensor-and-servo](https://github.com/user-attachments/assets/731b65b2-d39c-4fa1-b1ed-2d4b682d1dfe)

Micro servo connections:

![parts-for-toll-tax-system-6-768x443](https://github.com/user-attachments/assets/6cc58ae8-a3d5-41a8-b677-db9a26cd2103)

Those who are new here have a look at the plastic geared micro servo as shown in the visual above, it has plastic gears and the servo horns carry a holder/barrier made from Popsicle stick.

Coming to the connections we are using D9For those of you who are new to this, let me show you the plastic-geared micro servo as seen in the visual above. It has plastic gears, and the servo horns carry a holder/barrier that I made using a Popsicle stick.

Now, let's talk about the connections. I’m using D9 pin on the Arduino Uno board, which is a PWM pin (Pulse Width Modulation). This means that the signal for the micro servo comes in the form of pulses from pin D9.

Since I’ve connected the D9 pin to the signal input pin of the micro servo, the other two pins, GND and Positive, are connected to the + and – power rails of the breadboard.

That’s the servo connection sorted! Now let’s move on to the ultrasonic sensor.

The HC-SR04 (also known as the ultrasonic distance sensor) has 4 pins:

Vcc (Power),
Trig (Trigger),
Echo (Receive),
Gnd (Ground).
As usual, I connect the Vcc and Gnd pins to the + and – power rails on the breadboard, and the Trig and Echo pins go to D5 and D3 on the Arduino board. pin on Arduino Uno board which is PWM pin elaborated as pulse width modulations meaning the signals for micro servo goes in the form of pulses from D9 pin.

As we have connected D9 pin with signal input pin of micro  servo we will be using the other 2 pins called as Gnd and Positive to + and – pin of Breadboard power rails.

These completes servo connections now we will see the basic functions and connections of ultrasonic sensor.

The  HC-SR04 or generally called by the name ultrasonic sensor or ultrasonic distance sensor has 4 pins.

These pins are called as Vcc, Trig, Echo and Gnd here as usual we will be connecting Vcc and Gnd pins with + and – rails of breadboard where as Trig and Echo are connected to D5 and D3 pins of Arduino Board.

Functions of Ultrasonic sensor:

Here’s an actual image of the HC-SR04 ultrasonic sensor as shown below. If you take a closer look, you’ll see two circular-shaped structures on the sensor.

These circles are actually the transmitter and receiver parts of the sensor. When I supply power to the sensor, the transmitter sends out ultrasonic signals. These signals travel up to an accurate distance of 15 cm along their path. If the signals hit any obstacles, they bounce back and are received by the receiver.

This small module has a ton of applications, and one of its applications is right here in our project!

For our project, we’re using vehicles as the obstacles. When the sensor detects signals from an obstacle, it sends a signal to the micro servo, instructing it to lift the barrier for a specific time (as defined in the code) and then return to its default position.

If you observe carefully you can see letters T and R at the corners of sensors these are Transmitter and receiver part.
![parts-for-toll-tax-system-9-768x436](https://github.com/user-attachments/assets/9dcaeecf-6d72-49d2-ba79-34cd62e758f1)

Below is the visual after assembling ultrasonic sensor :

![image](https://github.com/user-attachments/assets/81e239f5-a58d-42da-a58a-a9251e71d886)

If you take a closer look, you’ll see that most of the wires are neatly hidden from view. The power wires for the ultrasonic sensor are routed behind the Arduino Uno to keep things tidy. To attach the Arduino Uno to the breadboard, I used pieces of double-sided adhesive tape.

Once I add the micro servo to this setup, it’ll look like the visual below.

A quick note: Since we’re not using power from the USB, we need to use a lithium-ion battery that delivers 3.7V DC to power the project.

For this, I used a battery holder that already had two wires for connection. To make things easier, I attached jumper wires to the ends of the battery wires, allowing us to easily connect and disconnect the power supply to the breadboard’s power rails.

Important! Don’t supply power to the project until you’ve uploaded the code to the Arduino board.

Code for Arduino automatic barrier for toll:

![code](https://github.com/user-attachments/assets/0c884a32-c547-4005-ad7d-2f2c8bc510ca)


Some basics about codes used in our project.

To make it easier for beginner to understand and customize this code(if needed) I have split the codes into 3 parts.

These 3 parts helps you to understand what these contribute to final working:
1)first part also called as declaration or defining, here we are assigning pin numbers to send/receive signals from modules.
Also at the beginning we are calling out specific modules from the library in our case(Servo)

2)You can see we are assigning pins to echo and Trig terminals and calling the time duration and distance parameters that will be used in upcoming lines which is shown in this second part.In this part, we are giving output pin declaration in our case as we are using micro servo we are assigning pin number 9(D9) and giving command as which are the Input pins and what are the output pins for ultrasonic sensor.

3)In the final part, we are setting up servo horn lifting angle and the response time, if you want any changes in the angle of rotation or delay at which the servo should work you can modify myservo.write or delay values, if you have the requirement as In this project I recommend not to make any changes


Steps to upload code into Arduino Uno:

    Connect Uno board with programming cable and connect USB side to  computer.
    Open Arduino IDE and Copy paste the above code.
    Before clicking on upload check if proper board is selected.
    You can click on tools then Board option later select Arduino Uno.
    Now cross check for port number and you can select this from tools and port.
    Once you are done with this you can hit on that upload button.
    Once you have finished uploading successfully disconnect USB cable.
    Now you can power Arduino Uno using external battery.
    As I’ am using 3.7v battery I did not use any resistor, if you are using higher volt battery you may need resistor as per the voltage values.
    At the very end, we have our fully working circuit ready that can be used, but using this without any additional body is not much appealing so I used a piece of cardboard and color papers to look like a road.
    
![image](https://github.com/user-attachments/assets/cf8f41d5-15fe-456e-b8d2-3f24372d93a0)

