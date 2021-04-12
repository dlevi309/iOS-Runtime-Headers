/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class BWRingBuffer;

@interface BWMotionSampleRingBuffer : NSObject <NSFastEnumeration> {

	BWRingBuffer* _ringBuffer;
	double _maxDuration;
	int _maxCount;

}
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW50*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(double)duration;
-(id)initWithMaxDuration:(double)arg1 ;
-(void)addMotionDataToRingBuffer:(SCD_Struct_BW74*)arg1 withSampleCount:(int)arg2 ;
-(SCD_Struct_BW74*)lastSample;
@end

