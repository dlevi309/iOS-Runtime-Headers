/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/


@protocol RPClientProtocol <NSObject>
@required
-(oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;
-(oneway void)recordingTimerDidUpdate:(id)arg1;
-(oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;
-(oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2;
-(oneway void)recordingLockInterrupted:(id)arg1;
-(oneway void)recordingDidPause;
-(oneway void)shouldResumeSessionType:(id)arg1;
-(oneway void)updateScreenRecordingStateWithCurrentState:(id)arg1;
-(oneway void)updateBroadcastURL:(id)arg1;
-(oneway void)updateBroadcastServiceInfo:(id)arg1;

@end

