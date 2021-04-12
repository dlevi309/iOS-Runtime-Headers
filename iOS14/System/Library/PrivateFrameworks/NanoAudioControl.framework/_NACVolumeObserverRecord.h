/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/


@protocol NACVolumeController;
@class NACEventThrottler, MPVolumeController, MPAVRoutingController;

@interface _NACVolumeObserverRecord : NSObject {

	BOOL _volumeControlAvailable;
	BOOL _volumeWarningEnabled;
	BOOL _muted;
	float _EUVolumeLimit;
	long long _volumeWarningState;
	NACEventThrottler* _throttler;
	MPVolumeController* _volumeController;
	MPAVRoutingController* _routingController;
	id<NACVolumeController> _nacVolumeController;

}

@property (assign,getter=isVolumeControlAvailable,nonatomic) BOOL volumeControlAvailable;              //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,getter=isVolumeWarningEnabled,nonatomic) BOOL volumeWarningEnabled;                  //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (assign,nonatomic) long long volumeWarningState;                                             //@synthesize volumeWarningState=_volumeWarningState - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                                //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) float EUVolumeLimit;                                                      //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
@property (nonatomic,retain) NACEventThrottler * throttler;                                            //@synthesize throttler=_throttler - In the implementation block
@property (nonatomic,retain) MPVolumeController * volumeController;                                    //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) MPAVRoutingController * routingController;                                //@synthesize routingController=_routingController - In the implementation block
@property (nonatomic,retain) id<NACVolumeController> nacVolumeController;                              //@synthesize nacVolumeController=_nacVolumeController - In the implementation block
-(MPAVRoutingController *)routingController;
-(MPVolumeController *)volumeController;
-(long long)volumeWarningState;
-(void)setVolumeController:(MPVolumeController *)arg1 ;
-(float)EUVolumeLimit;
-(BOOL)isVolumeControlAvailable;
-(void)setRoutingController:(MPAVRoutingController *)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(NACEventThrottler *)throttler;
-(void)setEUVolumeLimit:(float)arg1 ;
-(BOOL)isMuted;
-(void)setVolumeWarningEnabled:(BOOL)arg1 ;
-(void)setVolumeWarningState:(long long)arg1 ;
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(BOOL)isVolumeWarningEnabled;
-(void)setThrottler:(NACEventThrottler *)arg1 ;
-(id<NACVolumeController>)nacVolumeController;
-(void)setNacVolumeController:(id<NACVolumeController>)arg1 ;
@end

