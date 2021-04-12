/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@protocol AVTFaceTrackerDelegate <NSObject>
@optional
-(void)faceTracker:(id)arg1 sessionWasInterrupted:(id)arg2;
-(void)faceTracker:(id)arg1 sessionInterruptionEnded:(id)arg2;
-(void)faceTracker:(id)arg1 session:(id)arg2 didOutputAudioSampleBuffer:(opaqueCMSampleBufferRef)arg3;
-(void)faceTracker:(id)arg1 session:(id)arg2 didFailWithError:(id)arg3;
-(void)faceTrackerDidLostTrackingWhileRecording:(id)arg1;

@required
-(void)faceTrackerDidUpdate:(id)arg1 trackingInfo:(id)arg2;

@end

