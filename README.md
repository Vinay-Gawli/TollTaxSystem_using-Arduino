# TollTaxSystem_using-Arduino
Toll Tax System using Arduino: Ultrasonic Sensor with Servo Motor- Hey Readers! In this project we are making automated Toll tax system using Arduino Uno ,In very simple way, I have given step by step instructions along with detailed description about codes and circuit diagram.I have been working on intermediate and advanced level projects,You know the Ultrasonic sensor and Servo are quite popular and I know most of the beginners love to use these devices.From this project, you will learn the most basic things, how to detect a car using ultrasonic sensor and then how to use the Servo to open the barrier.

Before going into our project building phase let us know few things about toll tax system or few call as toll plaza halting system.

Do you remember when you first visited toll plaza? And the wonderful stopping mechanism they used to stop the vehicles passing by to collect funds? Yes we are making the exact same project here but in a mini scale.
In this project, we are making an exact replica found in toll plaza centers that is called as stopping system, The idea for this project was inspired from actual system, in actual toll they stop the vehicles using a stopper that is completely automated and it is activated when any vehicle passes in front the sensor, or some time it’s activated through a button.

In our case, we are using an HC-SR04 or called as ultrasonic distance sensor to detect an obstacle(vehicle) and later to lift the barrier we are using micro servo, that is the mechanism involved in this project, Now let us dive into the building stage

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

Coming to the connections we are using D9 pin on Arduino Uno board which is PWM pin elaborated as pulse width modulations meaning the signals for micro servo goes in the form of pulses from D9 pin.

As we have connected D9 pin with signal input pin of micro  servo we will be using the other 2 pins called as Gnd and Positive to + and – pin of Breadboard power rails.

These completes servo connections now we will see the basic functions and connections of ultrasonic sensor.

The  HC-SR04 or generally called by the name ultrasonic sensor or ultrasonic distance sensor has 4 pins.

These pins are called as Vcc, Trig, Echo and Gnd here as usual we will be connecting Vcc and Gnd pins with + and – rails of breadboard where as Trig and Echo are connected to D5 and D3 pins of Arduino Board.

Functions of Ultrasonic sensor:

The actual image of HC-SR04 sensor is as shown in image below from the visual we can see 2 circle shaped structures.

These circles are nothing but transmitter and receiver parts, here when it is supplied with power, one end transmits ultrasonic signals and this travels up to a accurate distance of 15cms in the travel path if it detects any obstacles the signals hit the object and travel back to the receiver end.

There are numerous applications of this small module and one of the application is in our project!

So coming to our project we are using vehicles as a obstacle, when this sensor picks up signals from obstacle it sends signals to micro servo to lift for a specific time(as given in the code) and come to default state.

If you observe carefully you can see letters T and R at the corners of sensors these are Transmitter and receiver part.
![parts-for-toll-tax-system-9-768x436](https://github.com/user-attachments/assets/9dcaeecf-6d72-49d2-ba79-34cd62e758f1)

Below is the visual after assembling ultrasonic sensor :

![image](https://github.com/user-attachments/assets/81e239f5-a58d-42da-a58a-a9251e71d886)

You can see that almost the wires are hidden from outer area. For the ultrasonic power input the wires are running behind the Arduino Uno. To attach Arduino Uno to breadboard I used pieces of double sided adhesives/tape.

Once you add micro servo to this circuit we will have this setup as in below visual.

Note, as we are not using power supply from USB we need a lithium ion battery which delivers 3.7v dc supply to our project.

I used a battery holder which already had 2 wires for connection, to make it easier I added ends of jumper wires so that we can attach and detach power supply to breadboard power rails.

Don’t supply power to your project unless you add some code to the board.

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

