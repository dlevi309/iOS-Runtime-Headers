/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/


@protocol NACVolumeControllerDelegate <NSObject>
@optional
-(void)volumeControllerDidUpdateVolumeValue:(id)arg1;
-(void)volumeControllerDidUpdateVolumeControlAvailibility:(id)arg1;
-(void)volumeControllerDidUpdateSystemMutedState:(id)arg1;
-(void)volumeControllerDidUpdateMutedState:(id)arg1;
-(void)volumeControllerDidUpdateEUVolumeLimit:(id)arg1;
-(void)volumeControllerDidUpdateVolumeWarningEnabled:(id)arg1;
-(void)volumeControllerDidUpdateVolumeWarningState:(id)arg1;
-(void)volumeControllerDidUpdateHapticState:(id)arg1;
-(void)volumeControllerDidUpdateProminentHapticState:(id)arg1;
-(void)volumeControllerDidUpdateHapticIntensity:(id)arg1;
-(void)volumeControllerDidUpdateAvailableListeningModes:(id)arg1;
-(void)volumeControllerDidUpdateCurrentListeningMode:(id)arg1;
-(void)volumeController:(id)arg1 didFailToSetCurrentListeningModeWithError:(id)arg2;

@end

