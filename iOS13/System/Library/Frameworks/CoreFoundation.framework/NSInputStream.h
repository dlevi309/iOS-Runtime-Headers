/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSInputStream : NSStream {

	unsigned char _reserved[128];

}

@property (readonly) BOOL hasBytesAvailable; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)inputStreamWithData:(id)arg1 ;
+(id)inputStreamWithFileAtPath:(id)arg1 ;
+(id)inputStreamWithURL:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)_cfTypeID;
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)hasBytesAvailable;
-(SCD_Struct_NS17)_cfStreamError;
@end

