/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPVolumeControllerDataSource.h>

@protocol MPVolumeControllerDataSourceDelegate;
@class NSString, AVSystemController;

@interface MPVolumeControllerSystemDataSource : NSObject <MPVolumeControllerDataSource> {

	BOOL _debugVolumeWarning;
	BOOL _volumeInitialized;
	BOOL _volumeControlCapabilitiesInitialized;
	AVSystemController* _avSystemController;
	BOOL _volumeControlAvailable;
	BOOL _muted;
	BOOL _volumeWarningEnabled;
	float _volume;
	float _EUVolumeLimit;
	NSString* _volumeAudioCategory;
	id<MPVolumeControllerDataSourceDelegate> _delegate;
	NSString* _volumeControlLabel;
	long long _volumeWarningState;

}

@property (nonatomic,copy) NSString * volumeAudioCategory;                                               //@synthesize volumeAudioCategory=_volumeAudioCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MPVolumeControllerDataSourceDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL applicationShouldOverrideHardwareVolumeBehavior; 
@property (nonatomic,copy,readonly) NSString * volumeControlLabel;                                       //@synthesize volumeControlLabel=_volumeControlLabel - In the implementation block
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable;              //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,nonatomic) float volume;                                                               //@synthesize volume=_volume - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                                  //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) BOOL volumeWarningEnabled;                                                //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) long long volumeWarningState;                                             //@synthesize volumeWarningState=_volumeWarningState - In the implementation block
@property (nonatomic,readonly) float EUVolumeLimit;                                                      //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<MPVolumeControllerDataSourceDelegate>)delegate;
-(void)setDelegate:(id<MPVolumeControllerDataSourceDelegate>)arg1 ;
-(void)reload;
-(void)_tearDown;
-(void)_setup;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)_volumeDidChangeNotification:(id)arg1 ;
-(NSString *)volumeAudioCategory;
-(NSString *)volumeControlLabel;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(void)reloadWarning;
-(void)adjustVolumeValue:(float)arg1 ;
-(void)initializeVolume;
-(void)getVolumeValueWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)applicationShouldOverrideHardwareVolumeBehavior;
-(BOOL)isVolumeControlAvailable;
-(BOOL)volumeWarningEnabled;
-(long long)volumeWarningState;
-(float)EUVolumeLimit;
-(void)setVolumeAudioCategory:(NSString *)arg1 ;
-(void)updateVolume:(float)arg1 ;
-(void)updateVolumeControlCapabilities:(unsigned)arg1 ;
-(id)_mediaPlaybackVolumeAudioCategory;
-(id)_reloadQueue;
-(void)_EUVolumeLimitDidChange:(id)arg1 ;
-(void)_EUVolumeLimitEnforcedDidChange:(id)arg1 ;
-(void)_routeDidChangeNotification:(id)arg1 ;
-(void)_updateRouteLabelForRoute:(id)arg1 ;
-(void)_volumeControlCapabilitiesDidChangeNotification:(id)arg1 ;
-(void)_systemVolumeDidChange:(id)arg1 ;
-(void)_systemMuteDidChange:(id)arg1 ;
-(void)_reloadEUVolumeLimits;
-(float)_volumeApplyingEUVolumePolicyToVolume:(float)arg1 ;
@end

