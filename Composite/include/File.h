#ifndef File_H
#define File_H
#include <IListable.h>
// #include "../include/IListable.h"

class File : public IListable
{
    private:
        std::string m_nodeName;

    public:
        File(std::string nodeName);
        virtual ~File();
        void list(int depth);//operation
};

#endif // File_H