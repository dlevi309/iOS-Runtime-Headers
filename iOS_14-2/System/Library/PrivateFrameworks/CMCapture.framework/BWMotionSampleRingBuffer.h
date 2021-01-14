/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class BWRingBuffer;

@interface BWMotionSampleRingBuffer : NSObject <NSFastEnumeration> {

	BWRingBuffer* _ringBuffer;
	double _maxDuration;
	int _maxCount;

}
-(void)addMotionDataToRingBuffer:(SCD_Struct_BW122*)arg1 withSampleCount:(int)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW116*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithMaxDuration:(double)arg1 ;
-(SCD_Struct_BW122*)lastSample;
-(unsigned long long)count;
-(double)duration;
-(void)dealloc;
@end

