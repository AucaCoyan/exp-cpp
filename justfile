default:
	just --list

compile FILE:
	zig c++ {{FILE}} -o main.exe

compile-c FILE:
	zig cc {{FILE}} -o main.exe

