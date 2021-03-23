PROJECT_NAME = Calculator
SRC =  calculator.c\
test_calculator.c

INC_TEST = unity

UNIT = unity/unity.c

$(PROJECT_NAME).exe : $(SRC) $(UNIT)
	gcc header.h -I $(INC_TEST) $(SRC) $(UNIT) -o $(PROJECT_NAME).exe

run :
	$(PROJECT_NAME).exe