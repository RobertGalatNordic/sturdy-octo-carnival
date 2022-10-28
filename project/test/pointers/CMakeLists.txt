add_executable(test_exercise_2 test_exercise_2.c)
target_link_libraries(test_exercise_2
    exercise_2
    Unity
)
add_test(NAME test_exercise_2 COMMAND test_exercise_2)