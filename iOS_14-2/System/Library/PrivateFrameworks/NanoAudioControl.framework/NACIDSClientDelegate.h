/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/


@protocol NACIDSClientDelegate <NSObject>
@required
-(void)client:(id)arg1 volumeValue:(float)arg2 didChangeForTarget:(id)arg3;
-(void)client:(id)arg1 volumeControlAvailable:(BOOL)arg2 didChangeForTarget:(id)arg3;
-(void)client:(id)arg1 mutedState:(BOOL)arg2 didChangeForTarget:(id)arg3;
-(void)client:(id)arg1 EULimit:(float)arg2 didChangeForTarget:(id)arg3;
-(void)client:(id)arg1 volumeWarningEnabled:(BOOL)arg2 volumeWarningState:(long long)arg3 didChangeForTarget:(id)arg4;
-(void)client:(id)arg1 volumeObservationCancelledForTarget:(id)arg2;
-(void)client:(id)arg1 availableListeningModes:(id)arg2 didChangeForTarget:(id)arg3;
-(void)client:(id)arg1 currentListeningMode:(id)arg2 didChangeForTarget:(id)arg3;
-(void)client:(id)arg1 didFailToSetCurrentListeningModeForTarget:(id)arg2 error:(id)arg3;
-(void)client:(id)arg1 audioRoutes:(id)arg2 didChangeForCategory:(id)arg3;
-(void)client:(id)arg1 routeObservationCancelledForCategory:(id)arg2;
-(void)client:(id)arg1 systemMutedStateDidChange:(BOOL)arg2;
-(void)client:(id)arg1 hapticStateDidChange:(long long)arg2;
-(void)client:(id)arg1 hapticIntensityDidChange:(float)arg2;
-(void)client:(id)arg1 prominentHapticStateDidChange:(BOOL)arg2;

@end

