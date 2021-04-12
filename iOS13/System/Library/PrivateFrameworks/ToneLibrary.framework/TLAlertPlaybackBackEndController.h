/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@protocol TLAlertPlaybackBackEndController <NSObject>
@optional
-(void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(BOOL)arg2;
-(void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;

@required
-(void)playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;

@end

