/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAutoLoopVideoNode.h>

@interface PIAutoLoopMirrorVideoNode : PIAutoLoopVideoNode
+(int)fadeLengthForTrimRange:(SCD_Struct_PI8)arg1 frameDuration:(SCD_Struct_PI7)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)requiresAudioMix;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(id)_evaluateAudioMix:(out id*)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(SCD_Struct_PI7)_conformTime:(SCD_Struct_PI7)arg1 ;
@end

