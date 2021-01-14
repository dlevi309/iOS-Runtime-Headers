/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)volumeWarningState;
-(id<NACVolumeControllerDelegate>)delegate;
-(float)EUVolumeLimit;
-(BOOL)isVolumeControlAvailable;
-(void)setHapticIntensity:(float)arg1;
-(void)setDelegate:(id)arg1;
-(void)setVolumeValue:(float)arg1;
-(void)allowUserToExceedEUVolumeLimit;
-(void)setMuted:(BOOL)arg1;
-(float)hapticIntensity;
-(float)volumeValue;
-(BOOL)isMuted;
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

