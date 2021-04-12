/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@interface PIVideoCrossfadeLoopNode : NURenderNode {

	SCD_Struct_PI7 _startTime;
	SCD_Struct_PI7 _crossfadeDuration;
	SCD_Struct_PI8 _loopTimeRange;

}

@property (nonatomic,readonly) SCD_Struct_PI7 startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PI8 loopTimeRange;                  //@synthesize loopTimeRange=_loopTimeRange - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PI7 crossfadeDuration;              //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
-(id)input;
-(SCD_Struct_PI7)crossfadeDuration;
-(SCD_Struct_PI8)loopTimeRange;
-(SCD_Struct_PI7)startTime;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)requiresAudioMix;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(id)_evaluateAudioMix:(out id*)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)initWithInput:(id)arg1 timeRange:(SCD_Struct_PI8)arg2 crossfadeDuration:(SCD_Struct_PI7)arg3 startTime:(SCD_Struct_PI7)arg4 ;
@end

