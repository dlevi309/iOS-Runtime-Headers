/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@interface DERLogContext : NSObject {

	CircularBuffer* circBuff;
	unsigned char circBuffStorage[6144];

}
-(id)init;
-(void)dealloc;
-(void)dumpLogs:(/*^block*/id)arg1 ;
@end

