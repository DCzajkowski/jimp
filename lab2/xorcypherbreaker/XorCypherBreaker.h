//
// Created by Dariusz Czajkowski on 13/03/17.
//

#ifndef JIMP_EXERCISES_XORCYPHERBREAKER_H
#define JIMP_EXERCISES_XORCYPHERBREAKER_H

#include <string>
#include <vector>

std::string XorCypherBreaker(
    const std::vector<char> &cryptogram,
    int key_length,
    const std::vector<std::string> &dictionary
);

#endif //JIMP_EXERCISES_XORCYPHERBREAKER_H
