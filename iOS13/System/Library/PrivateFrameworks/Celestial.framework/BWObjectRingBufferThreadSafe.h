/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWObjectRingBuffer.h>

@interface BWObjectRingBufferThreadSafe : BWObjectRingBuffer {

	OpaqueFigReentrantMutexRef _lock;

}
-(void)dealloc;
-(id)description;
-(id)initWithCapacity:(int)arg1 ;
-(void)clear;
-(id)firstObject;
-(id)lastObject;
-(void)setCapacity:(int)arg1 ;
-(SCD_Struct_BW2)lastTime;
-(void)enumerateObjectsStartingAt:(SCD_Struct_BW2)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)appendObject:(id)arg1 forTime:(SCD_Struct_BW2)arg2 ;
-(SCD_Struct_BW2)firstTime;
-(void)reverseEnumerateObjectsStartingAt:(SCD_Struct_BW2)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)extractTimeRangeFrom:(SCD_Struct_BW2)arg1 until:(SCD_Struct_BW2)arg2 into:(id)arg3 times:(id)arg4 ;
-(void)flushEntriesEarlierThan:(SCD_Struct_BW2)arg1 ;
@end

