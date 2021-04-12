/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol OS_dispatch_queue;
@class AVObservationController, NSObject, NSString, AVPlayerController;

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

}

@property (nonatomic,retain) AVPlayerController * playerController;                                         //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerController * playerControllerToActivateAfterDelay;              //@synthesize playerControllerToActivateAfterDelay=_playerControllerToActivateAfterDelay - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                                   //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
@property (nonatomic,copy) NSString * overrideParentApplicationDisplayIdentifier;                           //@synthesize overrideParentApplicationDisplayIdentifier=_overrideParentApplicationDisplayIdentifier - In the implementation block
+(void*)_createMediaRemoteLanguageOptionWithAVMediaSelectionOption:(id)arg1 ;
+(void*)_createMediaRemoteLanguageOptionGroupWithAVMediaSelectionOptions:(id)arg1 ;
+(void)sharedNowPlayingInfoControllerWithCompletion:(/*^block*/id)arg1 ;
+(id)_mediaRemoteLanguageOptionCharacteristicsForAVMediaSelectionOption:(id)arg1 ;
+(id)_avMediaCharacteristics;
+(id)_mediaRemoteLanguageOptionCharacteristicForAVMediaCharacteristic:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)setOverrideParentApplicationDisplayIdentifier:(NSString *)arg1 ;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(void)startNowPlayingUpdatesForPlayerController:(id)arg1 afterDelay:(double)arg2 ;
-(void)stopNowPlayingUpdatesForPlayerController:(id)arg1 ;
-(void)_setNowPlayingInfoNeedsUpdate;
-(void)_updateNowPlayingInfoIfNeeded;
-(void)_updateNowPlayingInfo:(id)arg1 commandsAndStates:(id)arg2 ;
-(id)_makeNowPlayingInfo;
-(id)_makeCommandsAndStatesDictionaryForPlayerController:(id)arg1 ;
-(void)_updateRegisteredRemoteCommandEnabledStatesWithCommandsAndStates:(id)arg1 ;
-(unsigned)_handleRemoteCommand:(unsigned)arg1 options:(id)arg2 ;
-(id)_availableLanguageOptions;
-(id)_currentLanguageOptions;
-(BOOL)requiresLinearPlayback;
-(NSString *)overrideParentApplicationDisplayIdentifier;
-(AVPlayerController *)playerControllerToActivateAfterDelay;
-(void)setPlayerControllerToActivateAfterDelay:(AVPlayerController *)arg1 ;
@end

