/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceNode.h>

@class BWInferenceResultRingBuffers;

@interface BWInferenceBufferingNode : BWInferenceNode {

	BWInferenceResultRingBuffers* _ringBuffers;

}

@property (nonatomic,retain,readonly) BWInferenceResultRingBuffers * ringBuffers;              //@synthesize ringBuffers=_ringBuffers - In the implementation block
-(void)dealloc;
-(id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned)arg3 ;
-(int)addInferenceOfType:(int)arg1 version:(SCD_Struct_BW94)arg2 configuration:(id)arg3 ringBufferCapacity:(int)arg4 ;
-(BWInferenceResultRingBuffers *)ringBuffers;
-(void)willEmitSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1 ;
@end

