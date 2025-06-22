# Bowling-Game
#  Bowling Game Score Calculator (C++ Console App)

This project is a C++ console application that calculates the score of a single player in a standard bowling game. The implementation strictly follows official bowling rules, including strike and spare bonuses and correct handling of the 10th frame.

---

##  Features

- Calculates total score for a 10-frame bowling game
- Handles strikes, spares, and open frames
- Frame-by-frame score breakdown
- Correct treatment of the 10th frame (no extra bonuses beyond allowed rolls)
- Clean and modular code — suitable for interviews and real-world use

---

##  Bowling Rules Implemented

- A game consists of 10 frames
- Each frame allows up to 2 rolls (except frame 10, which may allow a third if a strike or spare occurs)
- **Strike**: 10 pins on first roll → score = 10 + next 2 rolls
- **Spare**: 10 pins in two rolls → score = 10 + next roll
- 10th frame allows up to 3 rolls but no bonuses beyond that

---

##  Example Input

Rolls used in this example (from a known test case):

Frame  Rolls      FrameScore  Cumulative
----------------------------------------
1      4,5        9           9
2      4,5        9           18
3      5,5        16          34   (spare + next roll 6)
4      6,4        20          54   (spare + next roll 10)
5      10         29          83   (strike + next two rolls 10 and 9)
6      10         20          103  (strike + next two rolls 9 and 1)
7      9,1        17          120  (spare + next roll 7)
8      7,1        8           128
9      1,7        8           136
10     2,6        8           144
----------------------------------------
Total Score: 144
