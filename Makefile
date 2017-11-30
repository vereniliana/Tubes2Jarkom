all: distanceVector
distanceVector: ./src/distanceVector.cpp
	g++ -o distanceVector ./src/distanceVector.cpp
run:
	./distanceVector < ./data/in.txt
clean:
	rm -f distanceVector.o 
