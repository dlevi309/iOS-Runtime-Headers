/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUISiriSessionLocalDelegate <AFUISiriSessionListener>
@optional
-(BOOL)shouldNonLocalDelegateHandlePunchouts;
-(void)handlePunchoutCommand:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)siriSessionAudioRecordingDidChangePowerLevel:(float)arg1;
-(void)siriSession:(id)arg1 didChangeToState:(long long)arg2;
-(void)siriSessionAudioOutputDidChangePowerLevel:(float)arg1;
-(void)siriSessionImmersiveExperienceRequested;
-(void)siriSessionDidReceiveDelayedActionCancelCommand:(id)arg1 completion:(/*^block*/id)arg2;
-(void)siriSessionDidReceiveDelayedActionCommand:(id)arg1 completion:(/*^block*/id)arg2;
-(void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
-(void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
-(void)siriSession:(id)arg1 willProcessAppLaunchWithBundleIdentifier:(id)arg2;
-(void)siriSession:(id)arg1 failedToLaunchAppWithBundleIdentifier:(id)arg2;
-(void)siriSessionRecordingPreparationHasFinished:(id)arg1;
-(void)siriSession:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2;
-(void)siriSessionDidResetContext:(id)arg1;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;
-(void)siriSessionWillEnd:(id)arg1;
-(void)siriSessionDidEnd:(id)arg1;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(/*^block*/id)arg2;

@end

