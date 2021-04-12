/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
*/


@protocol SHSRingerControlDelegate;
@class AVSystemController;

@interface SHSRingerControl : NSObject {

	BOOL _appWantsVolumeChangeEvents;
	BOOL __volumeInitialized;
	BOOL __logFaultCalledForInactive;
	BOOL __logFaultCalledForBackground;
	float _volume;
	id<SHSRingerControlDelegate> _delegate;
	AVSystemController* __systemController;
	long long __volumeChangeCoalescingCount;

}

@property (nonatomic,retain) AVSystemController * _systemController;                    //@synthesize _systemController=__systemController - In the implementation block
@property (assign,nonatomic) long long _volumeChangeCoalescingCount;                    //@synthesize _volumeChangeCoalescingCount=__volumeChangeCoalescingCount - In the implementation block
@property (assign,nonatomic) BOOL _volumeInitialized;                                   //@synthesize _volumeInitialized=__volumeInitialized - In the implementation block
@property (assign,nonatomic) BOOL _logFaultCalledForInactive;                           //@synthesize _logFaultCalledForInactive=__logFaultCalledForInactive - In the implementation block
@property (assign,nonatomic) BOOL _logFaultCalledForBackground;                         //@synthesize _logFaultCalledForBackground=__logFaultCalledForBackground - In the implementation block
@property (assign,nonatomic,__weak) id<SHSRingerControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float volume;                                              //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) BOOL canChangeRingtoneWithButtons; 
@property (assign,nonatomic) BOOL appWantsVolumeChangeEvents;                           //@synthesize appWantsVolumeChangeEvents=_appWantsVolumeChangeEvents - In the implementation block
-(void)_setup;
-(void)setVolume:(float)arg1 ;
-(id)init;
-(id<SHSRingerControlDelegate>)delegate;
-(void)setDelegate:(id<SHSRingerControlDelegate>)arg1 ;
-(void)reload;
-(void)_handleServerConnectionDiedNotification:(id)arg1 ;
-(void)_tearDown;
-(BOOL)_volumeInitialized;
-(long long)_volumeChangeCoalescingCount;
-(float)volume;
-(void)dealloc;
-(AVSystemController *)_systemController;
-(BOOL)canChangeRingtoneWithButtons;
-(void)setAppWantsVolumeChangeEvents:(BOOL)arg1 ;
-(void)setCanChangeRingtoneWithButtons:(BOOL)arg1 ;
-(void)_handleEffectiveVolumeDidChangeNotification:(id)arg1 ;
-(void)set_volumeInitialized:(BOOL)arg1 ;
-(void)_updateVolume:(float)arg1 ;
-(BOOL)_logFaultCalledForInactive;
-(void)set_logFaultCalledForInactive:(BOOL)arg1 ;
-(BOOL)_logFaultCalledForBackground;
-(void)set_logFaultCalledForBackground:(BOOL)arg1 ;
-(void)set_volumeChangeCoalescingCount:(long long)arg1 ;
-(BOOL)appWantsVolumeChangeEvents;
-(void)set_systemController:(AVSystemController *)arg1 ;
@end

