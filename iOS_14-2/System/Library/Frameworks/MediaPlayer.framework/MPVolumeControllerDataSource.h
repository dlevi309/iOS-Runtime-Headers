/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString;


@protocol MPVolumeControllerDataSource <NSObject>
@property (assign,nonatomic,__weak) id<MPVolumeControllerDataSourceDelegate> delegate; 
@property (nonatomic,readonly) BOOL applicationShouldOverrideHardwareVolumeBehavior; 
@property (nonatomic,copy,readonly) NSString * volumeControlLabel; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (assign,nonatomic) float volume; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (nonatomic,readonly) BOOL volumeWarningEnabled; 
@property (nonatomic,readonly) long long volumeWarningState; 
@property (nonatomic,readonly) float EUVolumeLimit; 
@optional
-(void)reloadWarning;
-(void)beginDecreasingRelativeVolume;
-(void)endIncreasingRelativeVolume;
-(void)endDecreasingRelativeVolume;
-(void)beginIncreasingRelativeVolume;

@required
-(NSString *)volumeControlLabel;
-(void)setVolume:(float)arg1;
-(void)adjustVolumeValue:(float)arg1;
-(long long)volumeWarningState;
-(id<MPVolumeControllerDataSourceDelegate>)delegate;
-(float)EUVolumeLimit;
-(BOOL)isVolumeControlAvailable;
-(void)initializeVolume;
-(void)getVolumeValueWithCompletion:(/*^block*/id)arg1;
-(void)setDelegate:(id)arg1;
-(void)reload;
-(void)setMuted:(BOOL)arg1;
-(float)volume;
-(BOOL)isMuted;
-(BOOL)applicationShouldOverrideHardwareVolumeBehavior;
-(BOOL)volumeWarningEnabled;

@end

