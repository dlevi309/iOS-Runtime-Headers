/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSInputStream : NSStream {

	unsigned char _reserved[128];

}

@property (readonly) BOOL hasBytesAvailable; 
+(id)inputStreamWithFileAtPath:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)inputStreamWithData:(id)arg1 ;
+(id)inputStreamWithURL:(id)arg1 ;
-(SCD_Struct_NS11)_cfStreamError;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(unsigned long long)_cfTypeID;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)hasBytesAvailable;
-(id)initWithData:(id)arg1 ;
-(void)dealloc;
@end

