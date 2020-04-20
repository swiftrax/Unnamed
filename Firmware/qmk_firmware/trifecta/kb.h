#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003,       K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015,             \
	K100, K101, K102, K103,       K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115,             \
	K200, K201, K202, K203,       K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215,             \
	K300, K301, K302, K303,       K305, K306, K307, K308, K309, K310, K311, K312, K313, K314,                   \
	K400, K401, K402,             K405,             K408,       K410, K411, K412, K413, K414, K415,             \
	                                                                                                            \
) { \
	{ K000,  K001,  K002,  K003,  KC_NO, K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  KC_NO, KC_NO }, \
	{ K100,  K101,  K102,  K103,  KC_NO, K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  KC_NO, KC_NO }, \
	{ K200,  K201,  K202,  K203,  KC_NO, K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215,  KC_NO, KC_NO }, \
	{ K300,  K301,  K302,  K303,  KC_NO, K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314,  KC_NO, KC_NO, KC_NO }, \
	{ K400,  K401,  K402,  KC_NO, KC_NO, K405,  KC_NO, KC_NO, K408,  KC_NO, K410,  K411,  K412,  K413,  K414,  K415,  KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}

#endif