compile: phase_1.cpp
	g++ phase_1.cpp -o ginger

run: ginger
	./ginger

clean:
	rm ginger
