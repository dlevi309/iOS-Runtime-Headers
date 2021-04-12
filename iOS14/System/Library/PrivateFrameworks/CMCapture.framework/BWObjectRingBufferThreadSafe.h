/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWObjectRingBuffer.h>

@interface BWObjectRingBufferThreadSafe : BWObjectRingBuffer {

	OpaqueFigReentrantMutexRef _lock;

}
-(void)setCapacity:(int)arg1 ;
-(void)clear;
-(id)lastObject;
-(id)firstObject;
-(id)description;
-(SCD_Struct_BW8)firstTime;
-(void)reverseEnumerateObjectsStartingAt:(SCD_Struct_BW8)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)extractTimeRangeFrom:(SCD_Struct_BW8)arg1 until:(SCD_Struct_BW8)arg2 into:(id)arg3 times:(id)arg4 ;
-(void)appendObject:(id)arg1 forTime:(SCD_Struct_BW8)arg2 ;
-(void)flushEntriesEarlierThan:(SCD_Struct_BW8)arg1 ;
-(id)initWithCapacity:(int)arg1 ;
-(SCD_Struct_BW8)lastTime;
-(void)enumerateObjectsStartingAt:(SCD_Struct_BW8)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

