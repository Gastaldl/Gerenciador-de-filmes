#include <iostream>
#include "Movies.h"


Movies::Movies() {
}

Movies::~Movies() {
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for (const Movie &movie: movies) {
        if (name == movie.get_name()) {
            return false;
            std::cout << name << " already exist" << std::endl;
        }
    }
    Movie temp {name, rating, watched};
    movies.push_back(temp);
    std::cout << name << " was added" << std::endl;
    return true;
}

bool Movies::increment_watched(std::string name) {
    for (Movie &movie: movies) {
        if (name == movie.get_name()) {
            movie.increment_watched();
            return true;
        }
    }
    std::cout << name << " wasn't added" << std::endl;
    return false;
}

void Movies::display() const {
    if (movies.size() == 0) {
        std::cout << "No movies was added!" << std::endl;
    } else {
        std::cout << "======================================\n" << std::endl;
        for (const Movie &movie: movies) {
        movie.display();
        }
        std::cout << "======================================\n" << std::endl;
    }
}