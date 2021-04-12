/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol ARWorldTrackingTechniqueObserver <NSObject>
@optional
-(void)technique:(id)arg1 didChangeState:(long long)arg2;
-(void)technique:(id)arg1 didOutputCollaborationData:(id)arg2;
-(void)technique:(id)arg1 didDetectPlane:(id)arg2 timestamp:(double)arg3;
-(void)technique:(id)arg1 didOutputSceneUnderstandingData:(id)arg2 timestamp:(double)arg3;

@end

