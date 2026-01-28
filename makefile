DEPS= Penneung
compile: main.cpp
	 g++ main.cpp -o $(DEPS)

run: $(DEPS)
	 ./$(DEPS)  $(var)

runtest: $(DEPS)
	 ./$(DEPS)  1 54 5 6 8 2 4 4 8 27 6 43 9 23 76 94 23

clean: $(DEPS)
	 rm $(DEPS)
