/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/


@protocol NACXPCInterface <NSObject>
@required
-(void)setHapticIntensity:(float)arg1;
-(void)beginObservingVolumeForTarget:(id)arg1;
-(void)beginObservingListeningModesForTarget:(id)arg1;
-(void)beginObservingAudioRoutesForCategory:(id)arg1;
-(void)endObservingVolumeForTarget:(id)arg1;
-(void)endObservingListeningModesForTarget:(id)arg1;
-(void)volumeValueForTarget:(id)arg1 result:(/*^block*/id)arg2;
-(void)volumeControlAvailabilityForTarget:(id)arg1 result:(/*^block*/id)arg2;
-(void)mutedStateForTarget:(id)arg1 result:(/*^block*/id)arg2;
-(void)hapticState:(/*^block*/id)arg1;
-(void)hapticIntensity:(/*^block*/id)arg1;
-(void)prominentHapticEnabled:(/*^block*/id)arg1;
-(void)systemMutedState:(/*^block*/id)arg1;
-(void)EULimitForTarget:(id)arg1 result:(/*^block*/id)arg2;
-(void)volumeWarningForTarget:(id)arg1 result:(/*^block*/id)arg2;
-(void)setVolumeValue:(float)arg1 forTarget:(id)arg2;
-(void)setMuted:(BOOL)arg1 forTarget:(id)arg2;
-(void)setProminentHapticEnabled:(BOOL)arg1;
-(void)setHapticState:(long long)arg1;
-(void)setSystemMuted:(BOOL)arg1;
-(void)availableListeningModesForTarget:(id)arg1 result:(/*^block*/id)arg2;
-(void)currentListeningModeForTarget:(id)arg1 result:(/*^block*/id)arg2;
-(void)setCurrentListeningMode:(id)arg1 forTarget:(id)arg2;
-(void)audioRoutesForCategory:(id)arg1 result:(/*^block*/id)arg2;
-(void)endObservingAudioRoutesForCategory:(id)arg1;
-(void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2;
-(void)playAudioAndHapticPreview;
-(void)playDefaultHapticPreview;
-(void)playProminentHapticPreview;

@end

