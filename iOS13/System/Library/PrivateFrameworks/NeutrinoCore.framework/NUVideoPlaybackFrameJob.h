/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderJob.h>

@interface NUVideoPlaybackFrameJob : NURenderJob
-(id)result;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsPrepareNodeCached;
-(BOOL)wantsRenderNodeCached;
-(id)scalePolicy;
-(id)newRenderPipelineStateForEvaluationMode:(long long)arg1 ;
-(BOOL)wantsOutputVideoFrame;
-(id)initWithVideoFrameRequest:(id)arg1 ;
-(id)frameRequest;
@end

