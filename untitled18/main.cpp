#include <iostream>

#define SPRING 1
#define SUMMER 2
#define AUTUMN 3
#define WINTER 4

#define SEASON_NAME(season) \
    (season == SPRING ? "SPRING" : \
     season == SUMMER ? "SUMMER" : \
     season == AUTUMN ? "AUTUMN" : \
     season == WINTER ? "WINTER" : "ERR")

int main() {
    int chosenSeason = AUTUMN; // Здесь выберите сезон

#if defined(SPRING)
    if (chosenSeason == SPRING)
        std::cout << SEASON_NAME(SPRING) << std::endl;
#endif

#if defined(SUMMER)
    if (chosenSeason == SUMMER)
        std::cout << SEASON_NAME(SUMMER) << std::endl;
#endif

#if defined(AUTUMN)
    if (chosenSeason == AUTUMN)
        std::cout << SEASON_NAME(AUTUMN) << std::endl;
#endif

#if defined(WINTER)
    if (chosenSeason == WINTER)
        std::cout << SEASON_NAME(WINTER) << std::endl;
#endif

}