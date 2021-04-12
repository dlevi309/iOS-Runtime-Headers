/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

