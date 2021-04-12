/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSOutputStream : NSStream {

	unsigned char _reserved[128];

}

@property (readonly) BOOL hasSpaceAvailable; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)outputStreamToMemory;
+(id)outputStreamToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
+(id)outputStreamToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
+(id)outputStreamWithURL:(id)arg1 append:(BOOL)arg2 ;
-(void)dealloc;
-(unsigned long long)_cfTypeID;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToMemory;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasSpaceAvailable;
-(SCD_Struct_NS17)_cfStreamError;
@end

