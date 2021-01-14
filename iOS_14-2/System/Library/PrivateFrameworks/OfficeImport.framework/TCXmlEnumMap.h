/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface TCXmlEnumMap : NSObject {

	CFDictionaryRef mNameToValueMap;

}
-(void)dealloc;
-(BOOL)readFromNode:(xmlNode*)arg1 ns:(const char*)arg2 name:(const char*)arg3 value:(long long*)arg4 ;
-(id)initWithDescriptions:(const TCXmlEnumDescription*)arg1 ;
-(long long)readFromNode:(xmlNode*)arg1 ns:(const char*)arg2 name:(const char*)arg3 ;
-(long long)readFromNode:(xmlNode*)arg1 ns:(const char*)arg2 name:(const char*)arg3 def:(long long)arg4 ;
@end

