#ifndef RPC2_REQUEST_CLASS
#define RPC2_REQUEST_CLASS value

#include "JSONHandler/RPC2Command.h"

namespace RPC2Communication
{  
    class RPC2Request : public RPC2Command
    {
    public:
        RPC2Request( );
        RPC2Request( int method );
        virtual ~RPC2Request();

        virtual void setID( const std::string & id );
        virtual void setID( int id );

        virtual std::string getIDString() const;
        virtual int getID() const;
        
    private:
        std::string mID;
    };

}

#endif