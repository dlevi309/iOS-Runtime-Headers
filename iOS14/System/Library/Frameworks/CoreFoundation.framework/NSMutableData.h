/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSMutableData : NSData

@property (readonly) void* mutableBytes; 
@property (assign) unsigned long long length; 
+(id)dataWithCapacity:(unsigned long long)arg1 ;
+(id)dataWithLength:(unsigned long long)arg1 ;
+(id)_newZeroingDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3 ;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(void)increaseLengthBy:(unsigned long long)arg1 ;
-(BOOL)decompressUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(BOOL)compressUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(void)setData:(id)arg1 ;
-(Class)classForCoder;
-(BOOL)_isCompact;
-(id)initWithLength:(unsigned long long)arg1 ;
-(void)appendData:(id)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
@end

