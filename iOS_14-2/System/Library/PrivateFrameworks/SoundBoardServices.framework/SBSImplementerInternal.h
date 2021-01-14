/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSImplementerInternal <NSObject>
@required
-(void)setAppleCareIsEnabledInternal:(BOOL)arg1 withOptions:(id)arg2;
-(void)siriUtteranceFileToBePlayedInternal:(id)arg1 duckMusic:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)getAllDebugInfoInternal:(/*^block*/id)arg1;
-(void)getAllSyncedAlarmsAndTimersInternal:(/*^block*/id)arg1;
-(BOOL)isMediaAlarmInternal:(id)arg1;
-(void)getTuningInfoInternal:(/*^block*/id)arg1;
-(void)setTuningInfoOnBoxInternal:(id)arg1 at:(id)arg2 withValue:(float)arg3;
-(void)playToneInternal:(unsigned)arg1;
-(void)stopToneInternal:(unsigned)arg1;
-(void)getUserDefaultsInternal:(/*^block*/id)arg1;
-(void)setUserDefaultsInternal:(id)arg1 withValue:(id)arg2;
-(void)resetAllUserDefaultsInternal;
-(void)resetUserDefaultInternal:(id)arg1;
-(void)sendLEDCommandInternal:(id)arg1;
-(void)triggerWiFiCoreCaptureInternal:(id)arg1;
-(void)sendButtonCommandInternal:(id)arg1;
-(void)injectSWUpdateToHomeInternal:(id)arg1;
-(void)setBootSpinnerInternal:(BOOL)arg1;
-(void)getFeatureFlagsInternal:(/*^block*/id)arg1;
-(void)setFeatureFlagsInternal:(id)arg1;
-(void)setLEDContentsInternal:(id)arg1;
-(void)homeKitSettingForKeyPathChangedInternal:(id)arg1 updatedValue:(id)arg2 completion:(/*^block*/id)arg3;
-(void)deviceAttributeChangedInternal:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setDeviceAsStereoLeaderInternal:(BOOL)arg1 withOptions:(id)arg2;
-(void)sysdiagnoseHasStartedInternal:(BOOL)arg1;
-(void)rebootInternal:(id)arg1;
-(void)requestDeferredRebootInternal;
-(void)obliterateInternal:(id)arg1;
-(void)identifyWithOptionsInternal:(id)arg1;

@end

