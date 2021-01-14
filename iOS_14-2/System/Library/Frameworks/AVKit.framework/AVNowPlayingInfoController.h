/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol OS_dispatch_queue;
@class AVObservationController, NSObject, NSString, AVPlayerController, NSTimer;

@interface AVNowPlayingInfoController : NSObject {

	id _playerControllerCurrentTimeJumpedObserver;
	BOOL _nowPlayingInfoNeedsUpdate;
	BOOL _enabled;
	void* _commandHandlerIdentifier;
	AVObservationController* _keyValueObservationController;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	BOOL _requiresLinearPlayback;
	NSString* _overrideParentApplicationDisplayIdentifier;
	AVPlayerController* _playerController;
	AVPlayerController* _playerControllerToActivateAfterDelay;
	NSTimer* _startNowPlayingUpdatesTimer;

}

@property (nonatomic,retain) AVPlayerController * playerController;                                         //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerController * playerControllerToActivateAfterDelay;              //@synthesize playerControllerToActivateAfterDelay=_playerControllerToActivateAfterDelay - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * startNowPlayingUpdatesTimer;                                  //@synthesize startNowPlayingUpdatesTimer=_startNowPlayingUpdatesTimer - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                                   //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
@property (nonatomic,copy) NSString * overrideParentApplicationDisplayIdentifier;                           //@synthesize overrideParentApplicationDisplayIdentifier=_overrideParentApplicationDisplayIdentifier - In the implementation block
+(id)_avMediaCharacteristics;
+(void*)_createMediaRemoteLanguageOptionWithAVMediaSelectionOption:(id)arg1 ;
+(void*)_createMediaRemoteLanguageOptionGroupWithAVMediaSelectionOptions:(id)arg1 ;
+(void)sharedNowPlayingInfoControllerWithCompletion:(/*^block*/id)arg1 ;
+(id)_mediaRemoteLanguageOptionCharacteristicsForAVMediaSelectionOption:(id)arg1 ;
+(id)_mediaRemoteLanguageOptionCharacteristicForAVMediaCharacteristic:(id)arg1 ;
-(BOOL)requiresLinearPlayback;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setOverrideParentApplicationDisplayIdentifier:(NSString *)arg1 ;
-(void)stopNowPlayingUpdatesForPlayerController:(id)arg1 ;
-(void)startNowPlayingUpdatesForPlayerController:(id)arg1 afterDelay:(double)arg2 ;
-(void)_setNowPlayingInfoNeedsUpdate;
-(void)_updateNowPlayingInfoIfNeeded;
-(void)_updateNowPlayingInfo:(id)arg1 commandsAndStates:(id)arg2 ;
-(id)_makeNowPlayingInfo;
-(id)_makeCommandsAndStatesDictionaryForPlayerController:(id)arg1 ;
-(void)_updateRegisteredRemoteCommandEnabledStatesWithCommandsAndStates:(id)arg1 ;
-(unsigned)_handleRemoteCommand:(unsigned)arg1 options:(id)arg2 ;
-(NSString *)overrideParentApplicationDisplayIdentifier;
-(AVPlayerController *)playerControllerToActivateAfterDelay;
-(void)setPlayerControllerToActivateAfterDelay:(AVPlayerController *)arg1 ;
-(NSTimer *)startNowPlayingUpdatesTimer;
-(void)setStartNowPlayingUpdatesTimer:(NSTimer *)arg1 ;
-(id)_availableLanguageOptions;
-(id)_currentLanguageOptions;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(BOOL)isEnabled;
-(void)dealloc;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
@end

