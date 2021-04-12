/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceNode.h>

@class BWInferenceResultRingBuffers;

@interface BWInferenceBufferingNode : BWInferenceNode {

	BWInferenceResultRingBuffers* _ringBuffers;

}

@property (nonatomic,retain,readonly) BWInferenceResultRingBuffers * ringBuffers;              //@synthesize ringBuffers=_ringBuffers - In the implementation block
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1 ;
-(BWInferenceResultRingBuffers *)ringBuffers;
-(id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned)arg3 ;
-(int)addInferenceOfType:(int)arg1 version:(SCD_Struct_BW57)arg2 configuration:(id)arg3 ringBufferCapacity:(int)arg4 ;
-(void)willEmitSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
@end

