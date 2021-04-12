/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@interface HashHelper : NSObject {

	CC_SHA256state_st ctx;

}
+(id)hashHelper;
-(id)init;
-(id)addObject:(id)arg1 ;
-(id)getHash;
-(id)addData:(id)arg1 ;
-(id)addDictionary:(id)arg1 ;
-(id)addData:(void*)arg1 withLength:(unsigned long long)arg2 ;
-(id)addNumber:(id)arg1 ;
-(id)addString:(id)arg1 ;
-(id)addArray:(id)arg1 ;
-(id)addDateComponents:(id)arg1 ;
@end

