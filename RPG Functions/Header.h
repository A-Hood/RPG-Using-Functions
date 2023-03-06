#pragma once

std::string JobSelection(bool selectionValid, int jobSelection, std::string username, std::string jobType, std::string job);

std::string ClothesSelection(std::string jobType, int clothesSelection, bool selectionValid, std::string armourType, std::string username);

std::string ColourSelection(std::string jobType, std::string username, std::string armourColour);

std::string WeaponSelection(std::string username, std::string jobType, int weaponSelection, bool selectionValid, std::string weaponSelect);
