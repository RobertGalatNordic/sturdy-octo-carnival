add_library(exercise_2 STATIC exercise_2.c)
target_include_directories(exercise_2 PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)