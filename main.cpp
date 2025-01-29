#include <iostream>
#include "Movies.h"

// Function prototypes
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << " watch incremented" <<  std::endl;
    } else {
        std::cout << name << " not found" <<  std::endl;
    }
}

void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name,rating,watched)) {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" <<  std::endl;
    }
}

int main() {
    
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Shutter Island", "R", 2);       
    add_movie(my_movies, "Fight Club", "R", 5);            
    add_movie(my_movies, "The Batman", "PG-13", 7);                          
     
    my_movies.display();   
    
    add_movie(my_movies, "Top Gun: Maverick", "PG-13", 3); 
    add_movie(my_movies, "Hacksaw Ridge", "R", 5);             
 
    my_movies.display();    
    
    increment_watched(my_movies,"Hacksaw Ridge");                    
    increment_watched(my_movies,"Shutter Island");              
    
    my_movies.display();    
    
    increment_watched(my_movies,"The Big Short");         

	return 0;
}