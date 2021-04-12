/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAutoLoopVideoNode.h>

@interface PIAutoLoopMirrorVideoNode : PIAutoLoopVideoNode
+(int)fadeLengthForTrimRange:(SCD_Struct_PI23)arg1 frameDuration:(SCD_Struct_PI8)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)requiresAudioMix;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(id)_evaluateAudioMix:(out id*)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(SCD_Struct_PI8)_conformTime:(SCD_Struct_PI8)arg1 ;
@end

