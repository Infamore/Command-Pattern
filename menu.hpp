#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include <vector>
#include "command.hpp"
#include "tostrings.hpp"

using namespace std;

class Menu {
    private:
        int history_index;
        std::vector<Command*> history;

    public:
        Menu() {

                        history_index = 0; //might have to be -1
        }

        int getsize() {
  return history.size();
        }

        std::string execute() {

                return tostring(history[history_index - 1]->execute());
        }

        std::string stringify() {

          return history[history_index - 1]->stringify();
        }

        bool initialized() {

                if (!history.empty())
              return true;
                else
              return false;
        }

        void add_command(Command* cmd) {
  history.push_back(cmd);
          history_index++;
        }

        Command* get_command() {

          return history[history_index - 1];
        }

        void undo() {

          history_index--;
        }

        void redo() {

                history_index++;
        }
};
