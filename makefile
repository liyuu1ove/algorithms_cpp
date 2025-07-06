all:
	g++ sort.cpp -o sort
	./sort.exe
clean:
	del sort.exe