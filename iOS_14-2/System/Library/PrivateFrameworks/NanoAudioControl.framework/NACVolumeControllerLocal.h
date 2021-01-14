/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MediaControlsVolumeControllerObserver.h>
#import <libobjc.A.dylib/NACVolumeController.h>

@protocol OS_dispatch_queue, NACVolumeControllerDelegate;
@class NSString, MPAVRoute, MPVolumeController, MPAVRoutingController, NSCountedSet, NACEventThrottler, NSObject, MediaControlsVolumeController, NSOrderedSet;

@interface NACVolumeControllerLocal : NSObject <MPVolumeControllerDelegate, MPAVRoutingControllerDelegate, MediaControlsVolumeControllerObserver, NACVolumeController> {

	NSString* _audioCategory;
	MPAVRoute* _route;
	MPVolumeController* _volumeController;
	MPAVRoutingController* _routingController;
	NSCountedSet* _volumeSetHistory;
	NACEventThrottler* _volumeThrottler;
	NACEventThrottler* _hapticThrottler;
	BOOL _validCachedMutedValue;
	BOOL _muted;
	BOOL _shouldIgnoreHaptics;
	BOOL _monitoringHaptics;
	long long _cachedHapticState;
	NSObject*<OS_dispatch_queue> _serialQueue;
	MediaControlsVolumeController* _mediaControlsVolumeController;
	NSOrderedSet* _lastNotifiedAvailableListeningModes;
	NSString* _lastNotifiedCurrentListeningMode;
	BOOL _systemMuted;
	id<NACVolumeControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NACVolumeControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (getter=isVolumeWarningEnabled,nonatomic,readonly) BOOL volumeWarningEnabled; 
@property (nonatomic,readonly) long long volumeWarningState; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volumeValue; 
@property (nonatomic,readonly) float EUVolumeLimit; 
@property (assign,getter=isSystemMuted,nonatomic) BOOL systemMuted;                                      //@synthesize systemMuted=_systemMuted - In the implementation block
@property (assign,nonatomic) long long hapticState; 
@property (nonatomic,readonly) NSOrderedSet * availableListeningModes; 
@property (nonatomic,retain) NSString * currentListeningMode; 
@property (assign,nonatomic) float hapticIntensity; 
@property (assign,getter=isProminentHapticEnabled,nonatomic) BOOL prominentHapticEnabled; 
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(id)initWithAudioCategory:(id)arg1 ;
-(id)init;
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
-(void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(BOOL)arg2 ;
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2 ;
-(id)_init;
-(id)initWithRoute:(id)arg1 ;
-(BOOL)isMuted;
-(void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2 ;
-(id)_volumeController;
-(void)volumeController:(id)arg1 mutedStateDidChange:(BOOL)arg2 ;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2 ;
-(NSOrderedSet *)availableListeningModes;
-(void)setProminentHapticEnabled:(BOOL)arg1 ;
-(void)setHapticState:(long long)arg1 ;
-(void)setSystemMuted:(BOOL)arg1 ;
-(void)playDefaultHapticPreview;
-(void)playProminentHapticPreview;
-(void)beginObservingHapticState;
-(BOOL)isVolumeWarningEnabled;
-(NSString *)currentListeningMode;
-(void)setCurrentListeningMode:(NSString *)arg1 ;
-(void)beginObservingListeningModes;
-(void)endObservingListeningModes;
-(void)_setVolumeValue:(id)arg1 ;
-(void)_setHapticIntensity:(id)arg1 ;
-(void)endObservingVolume;
-(void)beginObservingVolume;
-(void)beginObservingHaptics;
-(void)endObservingHaptics;
-(BOOL)isSystemMuted;
-(long long)hapticState;
-(BOOL)isProminentHapticEnabled;
-(void)_ignoreHapticObservation;
-(void)setVolumeValue:(float)arg1 muted:(BOOL)arg2 overrideEULimit:(BOOL)arg3 ;
-(void)_updateMutedStateFromVolumeController:(id)arg1 ;
-(void)_updateVolumeState;
-(void)updateCachedHapticState;
-(void)endObservingHapticState;
-(id)_mediaControlsVolumeController;
-(void)playPreview;
@end

