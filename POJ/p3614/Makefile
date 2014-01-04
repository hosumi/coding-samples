# directory name == problem id
PROGRAM=$(shell basename `pwd`)
SRCS=$(PROGRAM).cpp
OBJS=$(PROGRAM).o

INPUT=$(PROGRAM).in
OUTPUT=$(PROGRAM).out
ANSWER=$(PROGRAM).ans

CXX=g++
CXXFLAGS=-Wall

.SUFFIXES:.cpp .o
.PHONY: all run clean judge

all: run

run: $(SRCS) $(INPUT) $(ANSWER)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(PROGRAM)
	$(RM) $(OUTPUT)
	cat $(INPUT) | ./$(PROGRAM) | tee $(OUTPUT)
	diff -sc $(OUTPUT) $(ANSWER)

judge: $(SRCS) $(INPUT) $(ANSWER)
	$(CXX) $(CXXFLAGS) -DONLINE_JUDGE $(SRCS) -o $(PROGRAM)
	$(RM) $(OUTPUT)
	cat $(INPUT) | ./$(PROGRAM) | tee $(OUTPUT)
	diff -sc $(OUTPUT) $(ANSWER)

clean:
	$(RM) *~ $(PROGRAM) $(OBJS) $(OUTPUT)
