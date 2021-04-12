/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/


@protocol RPClientProtocol <NSObject>
@required
-(oneway void)recordingTimerDidUpdate:(id)arg1;
-(oneway void)recordingLockInterrupted:(id)arg1;
-(oneway void)updateScreenRecordingStateWithCurrentState:(id)arg1;
-(oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;
-(oneway void)recordingDidPause;
-(oneway void)recordingShouldResume;
-(oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;
-(oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2;
-(oneway void)updateBroadcastURL:(id)arg1;
-(oneway void)updateBroadcastServiceInfo:(id)arg1;

@end

