/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/RealityKit.framework/RealityKit
*/


@protocol ARInternalSessionObserver <ARSessionDelegate>
@optional
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
-(void)sessionShouldAttemptRelocalization:(id)arg1 completion:(/*^block*/id)arg2;
-(void)session:(id)arg1 requestedRunWithConfiguration:(id)arg2 options:(unsigned long long)arg3;
-(void)session:(id)arg1 willRunWithConfiguration:(id)arg2;
-(void)session:(id)arg1 didCaptureHighResolutionFrame:(id)arg2;

@end

