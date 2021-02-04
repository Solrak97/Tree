#ifndef Message_H
#define Message_H


#include <string>
//Eventualmente el mensaje deberia ser binario, pero por ahora usare strings

//Con este enum se sabe a que sistema debe dirigirse el mensaje
enum MessageSubsys {GameLoop, Console};

struct Message {
    MessageSubsys type;
    std::string message;

    Message( MessageSubsys type, std::string message) {
        this->type = type;
        this-> message = message;
    }
};

#endif