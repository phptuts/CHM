# Leds and Buttons

## Big Ideas

- What is an LED?
- What is a button?

## What is an LED?

A light-emitting diode. It's an electrical component that emits light and allows electricity to flow only one way.  An LED has a short side and a long side.  The long side the positive side and the short side is the negative side.

<img width="2370" height="1525" alt="led" src="https://github.com/user-attachments/assets/5fbb14a8-165a-4170-ac57-9d42475ad2e9" />

## What is a push button?

A button that, when pushed down, allows electricity to flow from one side of the button to the other side of the button.

<img width="1267" height="713" alt="push_button" src="https://github.com/user-attachments/assets/98df24ea-aa0f-40f9-b7ff-47287561be9d" />

## Wire Leds

1\. Connect a jumper wire from one of the Arduino's GND to the - side of the breadboard.

<img width="3120" height="1293" alt="step1" src="https://github.com/user-attachments/assets/1f8a09f8-6777-416a-8017-599c59a87a9f" />

2\. Connect the short side of your blue LED into hole (5, e) and the long side into (7, e).

<img width="1037" height="902" alt="step2" src="https://github.com/user-attachments/assets/20e23290-2ef2-4e34-89fd-6635646d5288" />

3\. Connect one of the ends of your resistor into the hole (5, a) and the other end into the a - hole in the breadboard.

<img width="959" height="634" alt="step3" src="https://github.com/user-attachments/assets/439f3b37-dc4f-464e-bbbc-8673222aa1d6" />

4\. Connect a jumper wire from (7, a) to pin 10 of the Arduino.

<img width="1151" height="709" alt="Screenshot 2026-01-18 at 6 13 46 PM" src="https://github.com/user-attachments/assets/b5b7d87d-2522-4aee-9cbe-7a382118751e" />

5\. Let's test this out with code and upload it.  Follow the video instructions here.  Ignore the other LEDs for now.

https://github.com/user-attachments/assets/9cdfe54c-2077-49f6-94bc-e2f079ef72af

### Challenge: Do what you did in steps 1 to 5 with a green LED and pin 9.  Adjust the code to light up the green led.

https://github.com/user-attachments/assets/ffe4fc81-727e-492e-a0e8-241e95f98e3f

### Challenge: Do what you did in steps 1 to 5 with a red LED and pin 8.  Adjust the code to light up the red led.

https://github.com/user-attachments/assets/cc6dcfc5-a806-4aaf-a216-a7ba4ab6ba3c

## Wire in the button

1\. Put the button in the middle of the breadboard next to the red LED. Use holes (21, e) and (23, 3).

<img width="1460" height="901" alt="button_step_1" src="https://github.com/user-attachments/assets/4fa9afd9-18a2-4651-b0ed-f4954d2985af" />

2\. Connect a jumper wire from (21, a) to the negative side of the breadboard.

<img width="1673" height="911" alt="button_step_2" src="https://github.com/user-attachments/assets/df643016-88c0-4656-a540-6c5226e13249" />

3\. Connect a jumper wire from (23, a) to pin 7 of the Arduino.

<img width="2350" height="1628" alt="button_step_3" src="https://github.com/user-attachments/assets/3cb33037-2629-4bdf-bc3a-d4de8d29da0a" />

4\. Let's code something that makes the blue led light up when the button is pushed.

https://github.com/user-attachments/assets/f31d1a58-e63b-46ad-a89c-ef718d3076bb

### Challenge: Make all the LEDs light up when the button is pressed.

https://github.com/user-attachments/assets/631e6489-7fae-492f-b111-736e581c63c9

### Challenge: Use the wait-for-block to make the LEDs light up one at a time.

<img width="402" height="351" alt="Screenshot 2026-01-18 at 5 49 35 PM" src="https://github.com/user-attachments/assets/1aace2b7-484b-442d-98a2-36b4acd4a497" />

https://github.com/user-attachments/assets/a5bbdf9f-1356-44ef-82dd-9d6da02ba9b9




