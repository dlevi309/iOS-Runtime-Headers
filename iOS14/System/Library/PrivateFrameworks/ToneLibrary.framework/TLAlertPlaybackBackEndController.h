/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@protocol TLAlertPlaybackBackEndController <NSObject>
@optional
-(void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(BOOL)arg2;
-(void)preheatForAlert:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;

@required
-(void)playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;

@end

