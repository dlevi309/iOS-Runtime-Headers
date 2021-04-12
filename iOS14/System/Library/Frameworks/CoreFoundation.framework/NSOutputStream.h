/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSOutputStream : NSStream {

	unsigned char _reserved[128];

}

@property (readonly) BOOL hasSpaceAvailable; 
+(id)outputStreamToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
+(id)outputStreamToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)outputStreamWithURL:(id)arg1 append:(BOOL)arg2 ;
+(id)outputStreamToMemory;
-(SCD_Struct_NS11)_cfStreamError;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(unsigned long long)_cfTypeID;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(id)initToMemory;
-(BOOL)hasSpaceAvailable;
-(void)dealloc;
@end

