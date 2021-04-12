/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@class NURenderNode;

@interface PIAutoLoopVideoNode : NURenderNode {

	int _loopStart;
	int _loopPeriod;
	int _fadeLength;
	SCD_Struct_PI8 _frameDuration;

}

@property (nonatomic,readonly) NURenderNode * input; 
@property (nonatomic,readonly) int loopStart;                             //@synthesize loopStart=_loopStart - In the implementation block
@property (nonatomic,readonly) int loopPeriod;                            //@synthesize loopPeriod=_loopPeriod - In the implementation block
@property (nonatomic,readonly) int fadeLength;                            //@synthesize fadeLength=_fadeLength - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PI8 frameDuration;              //@synthesize frameDuration=_frameDuration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PI8 startTime; 
@property (nonatomic,readonly) SCD_Struct_PI8 loopDuration; 
@property (nonatomic,readonly) SCD_Struct_PI8 fadeDuration; 
@property (nonatomic,readonly) SCD_Struct_PI8 fadeStartTime; 
+(id)loopParamsForTrimRange:(SCD_Struct_PI23)arg1 frameDuration:(SCD_Struct_PI8)arg2 ;
+(int)loopStartForTrimRange:(SCD_Struct_PI23)arg1 frameDuration:(SCD_Struct_PI8)arg2 ;
+(int)loopPeriodForTrimRange:(SCD_Struct_PI23)arg1 frameDuration:(SCD_Struct_PI8)arg2 ;
+(int)fadeLengthForTrimRange:(SCD_Struct_PI23)arg1 frameDuration:(SCD_Struct_PI8)arg2 ;
-(NURenderNode *)input;
-(SCD_Struct_PI8)startTime;
-(SCD_Struct_PI8)fadeDuration;
-(SCD_Struct_PI8)frameDuration;
-(int)loopPeriod;
-(int)loopStart;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)requiresAudioMix;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(id)_evaluateAudioMix:(out id*)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)initWithInput:(id)arg1 frameDuration:(SCD_Struct_PI8)arg2 trimRange:(SCD_Struct_PI23)arg3 settings:(id)arg4 ;
-(SCD_Struct_PI8)loopDuration;
-(SCD_Struct_PI8)fadeStartTime;
-(int)fadeLength;
@end

