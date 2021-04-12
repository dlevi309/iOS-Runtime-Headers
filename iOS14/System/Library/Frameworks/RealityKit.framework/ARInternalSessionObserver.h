/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/RealityKit.framework/RealityKit
*/


@protocol ARInternalSessionObserver <ARSessionDelegate>
@optional
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
-(void)session:(id)arg1 willRunWithConfiguration:(id)arg2;
-(void)session:(id)arg1 requestedRunWithConfiguration:(id)arg2 options:(unsigned long long)arg3;
-(void)sessionShouldAttemptRelocalization:(id)arg1 completion:(/*^block*/id)arg2;

@end

