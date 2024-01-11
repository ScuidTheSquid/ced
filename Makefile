main: src/main.cpp
	g++ -o ced src/main.cpp
donut: src/donut.c
	gcc -o donut src/donut.c -lm