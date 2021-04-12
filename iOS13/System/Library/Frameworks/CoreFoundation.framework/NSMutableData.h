/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSMutableData : NSData

@property (readonly) void* mutableBytes; 
@property (assign) unsigned long long length; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dataWithLength:(unsigned long long)arg1 ;
+(id)_newZeroingDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)dataWithCapacity:(unsigned long long)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)_isCompact;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1 ;
-(void)increaseLengthBy:(unsigned long long)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3 ;
-(Class)classForCoder;
-(id)initWithLength:(unsigned long long)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(void)appendData:(id)arg1 ;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(void)setData:(id)arg1 ;
-(BOOL)compressUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(BOOL)decompressUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
@end

