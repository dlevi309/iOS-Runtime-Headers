/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@interface DERLogContext : NSObject {

	CircularBuffer* circBuff;
	unsigned char circBuffStorage[6144];

}
-(id)init;
-(void)dumpLogs:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

