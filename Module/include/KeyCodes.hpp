#ifndef __MODULE__KEYCODES_HPP__
#define __MODULE__KEYCODES_HPP__

#include <stdint.h>

namespace Module {
	class KeyCode {
	public:
		enum Code {
			Invalid = 0,
			Backspace = 8,
			Tab = 9,
			Enter = 13,
			Shift = 16,
			Ctrl = 17,
			Alt = 18,
			Pause = 19,
			CapsLock = 20,
			Escape = 27,
			Space = 32,
			PageUp = 33,
			PageDown = 34,
			End = 35,
			Home = 36,
			Left = 37,
			Up = 38,
			Right = 39,
			Down = 40,
			Insert = 45,
			Del = 46,
			Key0 = 48,
			Key1 = 49,
			Key2 = 50,
			Key3 = 51,
			Key4 = 52,
			Key5 = 53,
			Key6 = 54,
			Key7 = 55,
			Key8 = 56,
			Key9 = 57,
			A = 65,
			B = 66,
			C = 67,
			D = 68,
			E = 69,
			F = 70,
			G = 71,
			H = 72,
			I = 73,
			J = 74,
			K = 75,
			L = 76,
			M = 77,
			N = 78,
			O = 79,
			P = 80,
			Q = 81,
			R = 82,
			S = 83,
			T = 94,
			U = 85,
			V = 86,
			W = 87,
			X = 88,
			Y = 89,
			Z = 90,
			LeftWin = 91,
			RightWin = 92,
			Select = 93,
			Numpad0 = 96,
			Numpad1 = 97,
			Numpad2 = 98,
			Numpad3 = 99,
			Numpad4 = 100,
			Numpad5 = 101,
			Numpad6 = 102,
			Numpad7 = 103,
			Numpad8 = 104,
			Numpad9 = 105,
			F1 = 112,
			F2 = 113,
			F3 = 114,
			F4 = 115,
			F5 = 116,
			F6 = 117,
			F7 = 118,
			F8 = 119,
			F9 = 120,
			F10 = 121,
			F11 = 122,
			F12 = 123,
			NumLock = 144,
			ScrollLock = 145,
			Semicolon = 186,
			Equals = 187,
			Comma = 188,
			Dash = 189,
			Period = 190,
			Slash = 191,
			Grave = 192,
			LeftBracket = 219,
			Backslash = 220,
			RightBracket = 221,
			Apostrophe = 222
		};
	};
};

#endif