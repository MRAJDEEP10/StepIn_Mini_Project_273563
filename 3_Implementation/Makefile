# Name of executable file
PROJECT_NAME = Tictactoe

# Output Directory
BUILD = build

$(BUILD):
	mkdir build

# All source files
 
SRC = src/checkwin.c\
src/board.c\
main.c

# All test source files
TEST_SRC = test/test_tictactoe_operations.c\
src/checkwin.c\
unity/unity.c\

# To Check OS is Windows or Linux

ifdef OS
	RM = del /q
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
		RM = rm -rf
		FixPath = $1
		EXEC = out
	endif
endif

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)

#Including all source files

INC = -Iinc\
-Iunity\

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).$(EXEC)

all: $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).$(EXEC)

#run command to run the executable file
run:all
	./$(PROJECT_OUTPUT).$(EXEC)

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT).$(EXEC)
	./$(TEST_OUTPUT).$(EXEC)
