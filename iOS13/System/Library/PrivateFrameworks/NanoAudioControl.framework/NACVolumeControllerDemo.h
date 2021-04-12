/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <libobjc.A.dylib/NACVolumeController.h>

@protocol NACVolumeControllerDelegate;
@class NSString, NACEventThrottler, NSNumber, NSOrderedSet;

@interface NACVolumeControllerDemo : NSObject <NACVolumeController> {

	NSString* _audioCategory;
	NACEventThrottler* _defaultsThrottler;
	NSNumber* _volumeValue;
	BOOL _allowUserToExceedEUVolumeLimit;
	NSString* _currentListeningMode;
	BOOL _observingListeningModes;
	BOOL _systemMuted;
	BOOL _prominentHapticEnabled;
	float _hapticIntensity;
	id<NACVolumeControllerDelegate> _delegate;
	long long _hapticState;

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
@property (assign,nonatomic) long long hapticState;                                                      //@synthesize hapticState=_hapticState - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * availableListeningModes; 
@property (nonatomic,retain) NSString * currentListeningMode; 
@property (assign,nonatomic) float hapticIntensity;                                                      //@synthesize hapticIntensity=_hapticIntensity - In the implementation block
@property (assign,getter=isProminentHapticEnabled,nonatomic) BOOL prominentHapticEnabled;                //@synthesize prominentHapticEnabled=_prominentHapticEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(id<NACVolumeControllerDelegate>)delegate;
-(void)setDelegate:(id<NACVolumeControllerDelegate>)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)setHapticIntensity:(float)arg1 ;
-(float)hapticIntensity;
-(void)allowUserToExceedEUVolumeLimit;
-(id)initWithAudioCategory:(id)arg1 ;
-(BOOL)isVolumeControlAvailable;
-(long long)volumeWarningState;
-(float)EUVolumeLimit;
-(float)volumeValue;
-(void)setVolumeValue:(float)arg1 ;
-(NSOrderedSet *)availableListeningModes;
-(void)setProminentHapticEnabled:(BOOL)arg1 ;
-(void)setHapticState:(long long)arg1 ;
-(void)setSystemMuted:(BOOL)arg1 ;
-(BOOL)isVolumeWarningEnabled;
-(NSString *)currentListeningMode;
-(void)setCurrentListeningMode:(NSString *)arg1 ;
-(void)beginObservingListeningModes;
-(void)endObservingListeningModes;
-(void)endObservingVolume;
-(void)beginObservingVolume;
-(BOOL)isSystemMuted;
-(long long)hapticState;
-(BOOL)isProminentHapticEnabled;
-(void)setVolumeValue:(float)arg1 muted:(BOOL)arg2 overrideEULimit:(BOOL)arg3 ;
-(void)_persistVolumeValue:(id)arg1 ;
-(void)_setNeedsVolumeReload;
-(id)_volumeDictionary;
@end

