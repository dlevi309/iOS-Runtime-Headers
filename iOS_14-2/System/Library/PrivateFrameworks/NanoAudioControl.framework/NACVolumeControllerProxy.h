/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <libobjc.A.dylib/NACVolumeController.h>

@protocol OS_dispatch_source, NACVolumeControllerDelegate;
@class NSOrderedSet, NSString, NACProxyVolumeControlTarget, NACEventThrottler, NSObject, NACXPCClient, NSNumber;

@interface NACVolumeControllerProxy : NSObject <NACVolumeController> {

	NACProxyVolumeControlTarget* _target;
	NACEventThrottler* _volumeThrottler;
	NACEventThrottler* _hapticThrottler;
	NSObject*<OS_dispatch_source> _setVolumeTimer;
	NSObject*<OS_dispatch_source> _setHapticTimer;
	NSObject*<OS_dispatch_source> _setProminentHapticTimer;
	NSObject*<OS_dispatch_source> _setHapticStateTimer;
	NACXPCClient* _xpcClient;
	BOOL _observingVolume;
	float _lastRecievedHapticIntensity;
	BOOL _lastReceivedProminentHapticEnabled;
	long long _lastReceivedHapticState;
	NSNumber* _volumeValue;
	NSNumber* _hapticIntensity;
	NSOrderedSet* _availableListeningModes;
	NSString* _currentListeningMode;
	BOOL _observingListeningModes;
	BOOL _volumeControlAvailable;
	BOOL _volumeWarningEnabled;
	BOOL _muted;
	BOOL _systemMuted;
	BOOL _prominentHapticEnabled;
	float _EUVolumeLimit;
	id<NACVolumeControllerDelegate> _delegate;
	long long _volumeWarningState;
	long long _hapticState;

}

@property (assign,nonatomic,__weak) id<NACVolumeControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable;              //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (getter=isVolumeWarningEnabled,nonatomic,readonly) BOOL volumeWarningEnabled;                  //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) long long volumeWarningState;                                             //@synthesize volumeWarningState=_volumeWarningState - In the implementation block
@property (getter=isMuted,nonatomic,readonly) BOOL muted;                                                //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) float volumeValue; 
@property (nonatomic,readonly) float EUVolumeLimit;                                                      //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
@property (assign,getter=isSystemMuted,nonatomic) BOOL systemMuted;                                      //@synthesize systemMuted=_systemMuted - In the implementation block
@property (assign,nonatomic) long long hapticState;                                                      //@synthesize hapticState=_hapticState - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * availableListeningModes; 
@property (nonatomic,retain) NSString * currentListeningMode; 
@property (assign,nonatomic) float hapticIntensity; 
@property (assign,getter=isProminentHapticEnabled,nonatomic) BOOL prominentHapticEnabled;                //@synthesize prominentHapticEnabled=_prominentHapticEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)volumeWarningState;
-(id<NACVolumeControllerDelegate>)delegate;
-(float)EUVolumeLimit;
-(BOOL)isVolumeControlAvailable;
-(void)setHapticIntensity:(float)arg1 ;
-(void)setDelegate:(id<NACVolumeControllerDelegate>)arg1 ;
-(void)setVolumeValue:(float)arg1 ;
-(void)allowUserToExceedEUVolumeLimit;
-(void)setMuted:(BOOL)arg1 ;
-(float)hapticIntensity;
-(float)volumeValue;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(BOOL)isMuted;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)dealloc;
-(NSOrderedSet *)availableListeningModes;
-(id)initWithVolumeControlTarget:(id)arg1 ;
-(void)setProminentHapticEnabled:(BOOL)arg1 ;
-(void)setHapticState:(long long)arg1 ;
-(void)setSystemMuted:(BOOL)arg1 ;
-(BOOL)isVolumeWarningEnabled;
-(NSString *)currentListeningMode;
-(void)setCurrentListeningMode:(NSString *)arg1 ;
-(void)beginObservingListeningModes;
-(void)endObservingListeningModes;
-(void)_setVolumeValue:(id)arg1 ;
-(void)_setHapticIntensity:(id)arg1 ;
-(void)endObservingVolume;
-(void)_handleFailedToSetCurrentListeningModeNotification:(id)arg1 ;
-(void)_volumeControlAvailabilityDidChange;
-(void)_volumeValueDidChange;
-(void)_mutedStateDidChange;
-(void)_systemMutedStateDidChange;
-(void)_hapticStateDidChange;
-(void)_volumeWarningDidChange;
-(void)_EUVolumeLimitDidChange;
-(void)_availableListeningModesDidChange;
-(void)_currentListeningModeDidChange;
-(void)_prominentHapticStateDidChange;
-(void)_hapticIntensityDidChange;
-(void)_cancelSetVolumeTimer;
-(void)_volumeTimout;
-(id)_scheduleTimeoutWithBlock:(/*^block*/id)arg1 ;
-(void)_prominentHapticTimeout;
-(void)_notifyDelegateProminentHapticStateChanged;
-(void)_cancelSetProminentHapticTimer;
-(void)_hapticTimeout;
-(void)_notifyDelegateHapticChanged;
-(void)_cancelSetHapticTimer;
-(void)_hapticStateTimeout;
-(void)_notifyDelegateHapticStateChanged;
-(void)_cancelSetHapticStateTimer;
-(void)_notifyDelegateVolumeChanged;
-(void)_notifyDelegateSystemMutedStateChanged;
-(void)beginObservingVolume;
-(void)beginObservingHaptics;
-(void)endObservingHaptics;
-(BOOL)isSystemMuted;
-(long long)hapticState;
-(BOOL)isProminentHapticEnabled;
-(void)setVolumeValue:(float)arg1 muted:(BOOL)arg2 overrideEULimit:(BOOL)arg3 ;
@end

