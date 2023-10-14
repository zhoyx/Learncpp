#include <bits/stdc++.h>

enum class MonsterType {
    ogre,
    dragon,
    orc,
    giantSpider,
    slime
};

struct Monster {
    std::string_view name{};
    int health{};
    MonsterType type{};
};

constexpr std::string getMonsterType(MonsterType type) {
    switch (type) {
        case MonsterType::ogre:
            return "Ogre";

        case MonsterType::dragon:
            return "Dragon";

        case MonsterType::orc:
            return "Orc";

        case MonsterType::giantSpider:
            return "Giant Spider";

        case MonsterType::slime:
            return "Slime";

        default:
            return "error";
    }
}

void printMonster(Monster& monster) {
    std::cout << "This " << getMonsterType(monster.type) << "is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main() {
    Monster Trog{ "Trog", 145, MonsterType::ogre };
    Monster Slime{ "Blurp", 23, MonsterType::slime };

    printMonster(Trog);
    printMonster(Slime);

    return 0;
}
