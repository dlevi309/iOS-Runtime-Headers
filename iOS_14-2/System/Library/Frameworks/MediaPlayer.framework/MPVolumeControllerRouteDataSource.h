/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPVolumeControllerDataSource.h>

@protocol MPVolumeControllerDataSourceDelegate;
@class MPAVRoute, NSString;

@interface MPVolumeControllerRouteDataSource : NSObject <MPVolumeControllerDataSource> {

	float _pendingVolume;
	BOOL _hasPendingVolume;
	BOOL _hasVolumeInFlight;
	BOOL _volumeInitialized;
	BOOL _volumeCapabilitiesInitialized;
	BOOL _volumeControlAvailable;
	BOOL _muted;
	BOOL _volumeWarningEnabled;
	float _volume;
	float _EUVolumeLimit;
	id<MPVolumeControllerDataSourceDelegate> _delegate;
	long long _volumeWarningState;
	MPAVRoute* _groupRoute;
	MPAVRoute* _outputDeviceRoute;

}

@property (nonatomic,retain) MPAVRoute * groupRoute;                                                     //@synthesize groupRoute=_groupRoute - In the implementation block
@property (nonatomic,retain) MPAVRoute * outputDeviceRoute;                                              //@synthesize outputDeviceRoute=_outputDeviceRoute - In the implementation block
@property (assign,nonatomic,__weak) id<MPVolumeControllerDataSourceDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL applicationShouldOverrideHardwareVolumeBehavior; 
@property (nonatomic,copy,readonly) NSString * volumeControlLabel; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable;              //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,nonatomic) float volume;                                                               //@synthesize volume=_volume - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                                  //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) BOOL volumeWarningEnabled;                                                //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) long long volumeWarningState;                                             //@synthesize volumeWarningState=_volumeWarningState - In the implementation block
@property (nonatomic,readonly) float EUVolumeLimit;                                                      //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)volumeControlLabel;
-(void)setOutputDeviceRoute:(MPAVRoute *)arg1 ;
-(MPAVRoute *)groupRoute;
-(void)setGroupRoute:(MPAVRoute *)arg1 ;
-(MPAVRoute *)outputDeviceRoute;
-(void)setVolume:(float)arg1 ;
-(void)adjustVolumeValue:(float)arg1 ;
-(long long)volumeWarningState;
-(id<MPVolumeControllerDataSourceDelegate>)delegate;
-(void)_routeVolumeDidChangeNotification:(id)arg1 ;
-(void)_updateVolumeControlCapabilities:(unsigned)arg1 ;
-(float)EUVolumeLimit;
-(BOOL)isVolumeControlAvailable;
-(void)initializeVolume;
-(void)getVolumeValueWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<MPVolumeControllerDataSourceDelegate>)arg1 ;
-(NSString *)description;
-(id)initWithGroupRoute:(id)arg1 outputDeviceRoute:(id)arg2 ;
-(void)beginDecreasingRelativeVolume;
-(void)endIncreasingRelativeVolume;
-(void)reload;
-(void)setMuted:(BOOL)arg1 ;
-(void)_routeVolumeControlCapabilitiesDidChangeNotification:(id)arg1 ;
-(void)endDecreasingRelativeVolume;
-(void)_sendVolumeButtonEventWithUsagePage:(unsigned)arg1 usage:(unsigned)arg2 down:(BOOL)arg3 ;
-(void)_setPendingVolumeIfNeeded;
-(void)beginIncreasingRelativeVolume;
-(float)volume;
-(BOOL)isMuted;
-(BOOL)applicationShouldOverrideHardwareVolumeBehavior;
-(BOOL)volumeWarningEnabled;
-(void)dealloc;
@end

