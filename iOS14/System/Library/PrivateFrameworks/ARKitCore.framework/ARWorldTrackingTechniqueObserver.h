/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol ARWorldTrackingTechniqueObserver <NSObject>
@optional
-(void)technique:(id)arg1 didChangeState:(long long)arg2;
-(void)technique:(id)arg1 didOutputCollaborationData:(id)arg2;
-(void)technique:(id)arg1 didDetectPlane:(id)arg2 timestamp:(double)arg3;
-(void)technique:(id)arg1 didOutputSceneUnderstandingData:(id)arg2 timestamp:(double)arg3;

@end

