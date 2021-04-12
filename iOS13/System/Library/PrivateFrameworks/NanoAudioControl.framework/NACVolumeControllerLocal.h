/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<NACVolumeControllerDelegate>)delegate;
-(void)setDelegate:(id<NACVolumeControllerDelegate>)arg1 ;
-(id)_init;
-(id)initWithRoute:(id)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(id)_volumeController;
-(void)setHapticIntensity:(float)arg1 ;
-(float)hapticIntensity;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)volumeController:(id)arg1 mutedStateDidChange:(BOOL)arg2 ;
-(void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2 ;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2 ;
-(void)allowUserToExceedEUVolumeLimit;
-(id)initWithAudioCategory:(id)arg1 ;
-(BOOL)isVolumeControlAvailable;
-(long long)volumeWarningState;
-(float)EUVolumeLimit;
-(float)volumeValue;
-(void)setVolumeValue:(float)arg1 ;
-(void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(BOOL)arg2 ;
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

