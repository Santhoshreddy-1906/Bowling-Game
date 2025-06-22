#include <iostream>
#include <vector>

class BowlingGame {
public:
    void roll(int pins) {
        rolls.push_back(pins);
    }

    int score() {
        int totalScore = 0;
        int rollIndex = 0;

        for (int frame = 0; frame < 10; ++frame) {
            if (isStrike(rollIndex)) {
                totalScore += 10 + rolls[rollIndex + 1] + rolls[rollIndex + 2];
                rollIndex += 1;
            } else if (isSpare(rollIndex)) {
                totalScore += 10 + rolls[rollIndex + 2];
                rollIndex += 2;
            } else {
                totalScore += rolls[rollIndex] + rolls[rollIndex + 1];
                rollIndex += 2;
            }
        }

        return totalScore;
    }

private:
    std::vector<int> rolls;

    bool isStrike(int index) {
        return rolls[index] == 10;
    }

    bool isSpare(int index) {
        return rolls[index] + rolls[index + 1] == 10;
    }
};

int main() {
    BowlingGame game;

    // Rolls exactly as per the image (no bonus in 10th frame)
    int inputRolls[] = {5, 4, 4, 5, 5, 5, 6, 4, 10, 10, 9, 1, 7, 1, 1, 7, 2, 6};

    for (int pins : inputRolls) {
        game.roll(pins);
    }

    std::cout << "Total Score: " << game.score() << std::endl; 

    return 0;
}
