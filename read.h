#ifndef READ_H_INCLUDED
#define READ_H_INCLUDED

#include <map>
#include <string>
#include <map>

#include "deck.h"

class Cards;
class Decks;
class Deck;

void load_custom_decks(Decks& decks, Cards& cards, const char * filename);
DeckList parse_deck_list(std::string list_string, const Decks& decks);
void parse_card_spec(const Cards& cards, std::string& card_spec, unsigned& card_id, unsigned& card_num, char& num_sign, char& mark);
const std::pair<std::vector<unsigned>, std::map<signed, char>> string_to_ids(const Cards& all_cards, const std::string& deck_string, const std::string & description);
unsigned read_custom_decks(Decks& decks, Cards& cards, std::string filename);
void read_owned_cards(Cards& cards, std::map<unsigned, unsigned>& owned_cards, std::string filename);
unsigned read_card_abbrs(Cards& cards, const std::string& filename);

#endif
