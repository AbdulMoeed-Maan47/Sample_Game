all: compile link

compile:
	g++ -IC:\SFML\include -c Sample_Game/*.cpp -g

link:
	g++ *.o -o Sample_Game -LC:\SFML\build\lib -Isfml-graphics -Isfml-audio -Isfml-window -Isfml-system -g
