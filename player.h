#ifndef RICH_PLAYERS_H
#define RICH_PLAYERS_H

#include <cstdint>
#include <vector>

#include "map.h"


enum color_t { RED, GREEN, BLUE, YELLOW };

typedef struct player {
    char uid;
    std::string name;
    std::uint64_t n_money;
    std::uint64_t n_points;
    std::uint8_t n_pos;
    std::uint8_t n_empty_rounds;
    std::uint8_t n_god_buff;
    color_t e_color;
    std::vector<p_map_node_t> estate;
    std::uint8_t n_block;
    std::uint8_t n_boom;
    std::uint8_t n_robot;
    std::uint8_t b_sell_estate; // TODO set 0 in the beginning of every round
} player_t, *p_player_t;

void add_player(char uid);
p_player_t get_player_by_uid(char uid);
std::vector<player_t> *get_player_vec();

#endif // RICH_PLAYERS_H