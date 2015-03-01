#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED

class room {

    public:     vector<string> keyword;
                vector<string> description;

    private:    string parseInput(string);
                void respondToUser();
                void leaveRoom(string);
};

#endif // ROOM_H_INCLUDED
