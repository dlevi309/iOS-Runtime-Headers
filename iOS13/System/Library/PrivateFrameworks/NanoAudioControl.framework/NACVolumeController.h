/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

@class NSOrderedSet, NSString;


@protocol NACVolumeController <NSObject>
@property (assign,nonatomic,__weak) id<NACVolumeControllerDelegate> delegate; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (getter=isVolumeWarningEnabled,nonatomic,readonly) BOOL volumeWarningEnabled; 
@property (nonatomic,readonly) long long volumeWarningState; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volumeValue; 
@property (nonatomic,readonly) float EUVolumeLimit; 
@property (assign,getter=isSystemMuted,nonatomic) BOOL systemMuted; 
@property (assign,nonatomic) long long hapticState; 
@property (nonatomic,readonly) NSOrderedSet * availableListeningModes; 
@property (nonatomic,retain) NSString * currentListeningMode; 
@property (assign,nonatomic) float hapticIntensity; 
@property (assign,getter=isProminentHapticEnabled,nonatomic) BOOL prominentHapticEnabled; 
@optional
-(void)_ignoreHapticObservation;

@required
-(id<NACVolumeControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setMuted:(BOOL)arg1;
-(BOOL)isMuted;
-(void)setHapticIntensity:(float)arg1;
-(float)hapticIntensity;
-(void)allowUserToExceedEUVolumeLimit;
-(BOOL)isVolumeControlAvailable;
-(long long)volumeWarningState;
-(float)EUVolumeLimit;
-(float)volumeValue;
-(void)setVolumeValue:(float)arg1;
-(NSOrderedSet *)availableListeningModes;
-(void)setProminentHapticEnabled:(BOOL)arg1;
-(void)setHapticState:(long long)arg1;
-(void)setSystemMuted:(BOOL)arg1;
-(BOOL)isVolumeWarningEnabled;
-(NSString *)currentListeningMode;
-(void)setCurrentListeningMode:(id)arg1;
-(void)beginObservingListeningModes;
-(void)endObservingListeningModes;
-(void)endObservingVolume;
-(void)beginObservingVolume;
-(void)beginObservingHaptics;
-(void)endObservingHaptics;
-(BOOL)isSystemMuted;
-(long long)hapticState;
-(BOOL)isProminentHapticEnabled;

@end

