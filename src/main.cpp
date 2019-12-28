#include <Game.hpp>
#include <sol.hpp>
#include <string>
#include <vector>
int main() {
  sol::state script;
  script.script_file("scripts/metadata.lua");
  sol::table meta = script["metaData"];
  std::string title = meta["title"];
  int width = meta["width"];
  int height = meta["height"];
  int limit = meta["fpsLimit"];
  Skeleton::Game(width, height, title, limit);
  return 0;
}