#ifndef Message_H
#define Message_H


#include <string>
//Eventualmente el mensaje deberia ser binario, pero por ahora usare strings

//Con este enum se sabe a que sistema debe dirigirse el mensaje
enum MessageSubsys {GameLoop, Console};

class Message{
private:
    MessageSubsys msgClass;
    std::string message;

public :
    Message(MessageSubsys type, std::string message);
    ~Message();
};

#endif