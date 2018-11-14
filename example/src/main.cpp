#include "ofMain.h"
#include "ofxMD5.h"

//========================================================================
int main( ){
    ofxMD5 md5;
    string s = "hello world";
    cout<<s<<" =[MD5 hash]=> "<<md5.calcHash(s)<<endl;
}
