//
//  ofxMD5.h
//
//  Created by enrico<naus3a>viola on 11/14/18
//  naus3a.ml
//  naus3a@gmail.com
//

#include "Poco/MD5Engine.h"
#include "Poco/DigestStream.h"
#include "Poco/StreamCopier.h"

class ofxMD5{
public:
    string calcHash(string _s){
        md5.update(_s);
        return Poco::DigestEngine::digestToHex(md5.digest());
    }
protected:
    Poco::MD5Engine md5;
};
