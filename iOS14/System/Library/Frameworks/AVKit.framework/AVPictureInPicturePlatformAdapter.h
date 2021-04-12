/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPictureInPictureViewControllerDelegate.h>
#import <libobjc.A.dylib/PGPictureInPictureProxyDelegate.h>
#import <AVKit/AVPictureInPictureControlsStyleAppearance.h>

@protocol AVPictureInPicturePlatformAdapterDelegate, AVPictureInPictureContentSource;
@class AVPlayerController, AVPictureInPicturePrerollAttributes, AVPictureInPictureViewController, PGPictureInPictureProxy, NSTimer, AVSecondScreenConnection, UIWindow, AVObservationController, NSString;

@interface AVPictureInPicturePlatformAdapter : NSObject <AVPictureInPictureViewControllerDelegate, PGPictureInPictureProxyDelegate, AVPictureInPictureControlsStyleAppearance> {

	BOOL _allowsPictureInPicturePlayback;
	BOOL _alwaysStartsAutomaticallyWhenEnteringBackground;
	BOOL _canStartAutomaticallyWhenEnteringBackground;
	BOOL _requiresLinearPlayback;
	BOOL _microphoneEnabled;
	BOOL _managesWiredSecondScreenPlayback;
	BOOL _anyPictureInPictureActive;
	BOOL _scrubbingOrSeeking;
	BOOL _scrubbing;
	BOOL _seeking;
	BOOL _interruptedForAudioSession;
	BOOL _wasPlayingWhenSuspended;
	BOOL _routingVideoToHostedWindow;
	id<AVPictureInPicturePlatformAdapterDelegate> _delegate;
	AVPlayerController* _playerController;
	long long _controlsStyle;
	AVPictureInPicturePrerollAttributes* _prerollAttributes;
	AVPictureInPictureViewController* _pictureInPictureViewController;
	long long _status;
	PGPictureInPictureProxy* _pegasusProxy;
	NSTimer* _layoutCheckTimer;
	AVSecondScreenConnection* _secondScreenConnection;
	UIWindow* _sourceWindowWhenPictureInPictureStarted;
	id<AVPictureInPictureContentSource> _contentSourceAwaitingInvalidation;
	id<AVPictureInPictureContentSource> _contentSourceAwaitingSetup;
	long long _observedTimeControlStatus;
	double _rateWhenScrubbingOrSeekingBegan;
	id<AVPictureInPictureContentSource> _source;
	AVObservationController* _observationController;
	CGRect _videoRectInScreen;

}

@property (nonatomic,readonly) PGPictureInPictureProxy * pegasusProxy;                                                   //@synthesize pegasusProxy=_pegasusProxy - In the implementation block
@property (assign,nonatomic) CGRect videoRectInScreen;                                                                   //@synthesize videoRectInScreen=_videoRectInScreen - In the implementation block
@property (nonatomic,readonly) NSTimer * layoutCheckTimer;                                                               //@synthesize layoutCheckTimer=_layoutCheckTimer - In the implementation block
@property (nonatomic,retain) AVSecondScreenConnection * secondScreenConnection;                                          //@synthesize secondScreenConnection=_secondScreenConnection - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * sourceWindowWhenPictureInPictureStarted;                                  //@synthesize sourceWindowWhenPictureInPictureStarted=_sourceWindowWhenPictureInPictureStarted - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPictureContentSource> contentSourceAwaitingInvalidation;               //@synthesize contentSourceAwaitingInvalidation=_contentSourceAwaitingInvalidation - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPictureContentSource> contentSourceAwaitingSetup;                      //@synthesize contentSourceAwaitingSetup=_contentSourceAwaitingSetup - In the implementation block
@property (assign,nonatomic) long long observedTimeControlStatus;                                                        //@synthesize observedTimeControlStatus=_observedTimeControlStatus - In the implementation block
@property (assign,getter=isScrubbingOrSeeking,nonatomic) BOOL scrubbingOrSeeking;                                        //@synthesize scrubbingOrSeeking=_scrubbingOrSeeking - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                                                          //@synthesize scrubbing=_scrubbing - In the implementation block
@property (assign,getter=isSeeking,nonatomic) BOOL seeking;                                                              //@synthesize seeking=_seeking - In the implementation block
@property (assign,nonatomic) double rateWhenScrubbingOrSeekingBegan;                                                     //@synthesize rateWhenScrubbingOrSeekingBegan=_rateWhenScrubbingOrSeekingBegan - In the implementation block
@property (assign,getter=isInterruptedForAudioSession,nonatomic) BOOL interruptedForAudioSession;                        //@synthesize interruptedForAudioSession=_interruptedForAudioSession - In the implementation block
@property (assign,nonatomic) BOOL wasPlayingWhenSuspended;                                                               //@synthesize wasPlayingWhenSuspended=_wasPlayingWhenSuspended - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPictureContentSource> source;                                          //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                          //@synthesize observationController=_observationController - In the implementation block
@property (assign,nonatomic) long long status;                                                                           //@synthesize status=_status - In the implementation block
@property (assign,getter=isRoutingVideoToHostedWindow,nonatomic) BOOL routingVideoToHostedWindow;                        //@synthesize routingVideoToHostedWindow=_routingVideoToHostedWindow - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPicturePlatformAdapterDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                                      //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPicturePlayback;                                                        //@synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback - In the implementation block
@property (getter=isSystemPictureInPicturePossible,nonatomic,readonly) BOOL systemPictureInPicturePossible; 
@property (assign,nonatomic) BOOL alwaysStartsAutomaticallyWhenEnteringBackground;                                       //@synthesize alwaysStartsAutomaticallyWhenEnteringBackground=_alwaysStartsAutomaticallyWhenEnteringBackground - In the implementation block
@property (assign,nonatomic) BOOL canStartAutomaticallyWhenEnteringBackground;                                           //@synthesize canStartAutomaticallyWhenEnteringBackground=_canStartAutomaticallyWhenEnteringBackground - In the implementation block
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                                                //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
@property (assign,nonatomic) long long controlsStyle;                                                                    //@synthesize controlsStyle=_controlsStyle - In the implementation block
@property (assign,getter=isMicrophoneEnabled,nonatomic) BOOL microphoneEnabled;                                          //@synthesize microphoneEnabled=_microphoneEnabled - In the implementation block
@property (nonatomic,retain) AVPictureInPicturePrerollAttributes * prerollAttributes;                                    //@synthesize prerollAttributes=_prerollAttributes - In the implementation block
@property (assign,nonatomic) BOOL managesWiredSecondScreenPlayback;                                                      //@synthesize managesWiredSecondScreenPlayback=_managesWiredSecondScreenPlayback - In the implementation block
@property (nonatomic,readonly) BOOL canAnimatePictureInPictureTransition; 
@property (nonatomic,readonly) AVPictureInPictureViewController * pictureInPictureViewController;                        //@synthesize pictureInPictureViewController=_pictureInPictureViewController - In the implementation block
@property (getter=isAnyPictureInPictureActive,nonatomic,readonly) BOOL anyPictureInPictureActive;                        //@synthesize anyPictureInPictureActive=_anyPictureInPictureActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startPictureInPictureButtonImageName;
+(id)stopPictureInPictureButtonImageName;
+(id)imageSymbolConfiguration;
+(BOOL)isPictureInPictureSupported;
-(id)initWithSource:(id)arg1 ;
-(void)setObservedTimeControlStatus:(long long)arg1 ;
-(void)setRoutingVideoToHostedWindow:(BOOL)arg1 ;
-(void)_removeSecondScreenConnection;
-(long long)_sceneActivationState;
-(BOOL)allowsPictureInPicturePlayback;
-(BOOL)alwaysStartsAutomaticallyWhenEnteringBackground;
-(BOOL)canStartAutomaticallyWhenEnteringBackground;
-(BOOL)requiresLinearPlayback;
-(BOOL)isMicrophoneEnabled;
-(AVPictureInPicturePrerollAttributes *)prerollAttributes;
-(BOOL)managesWiredSecondScreenPlayback;
-(void)setManagesWiredSecondScreenPlayback:(BOOL)arg1 ;
-(AVPictureInPictureViewController *)pictureInPictureViewController;
-(BOOL)isAnyPictureInPictureActive;
-(CGRect)videoRectInScreen;
-(void)setVideoRectInScreen:(CGRect)arg1 ;
-(NSTimer *)layoutCheckTimer;
-(AVSecondScreenConnection *)secondScreenConnection;
-(void)setSecondScreenConnection:(AVSecondScreenConnection *)arg1 ;
-(UIWindow *)sourceWindowWhenPictureInPictureStarted;
-(void)setSourceWindowWhenPictureInPictureStarted:(UIWindow *)arg1 ;
-(id<AVPictureInPictureContentSource>)contentSourceAwaitingInvalidation;
-(void)setContentSourceAwaitingInvalidation:(id<AVPictureInPictureContentSource>)arg1 ;
-(id<AVPictureInPictureContentSource>)contentSourceAwaitingSetup;
-(void)setContentSourceAwaitingSetup:(id<AVPictureInPictureContentSource>)arg1 ;
-(long long)observedTimeControlStatus;
-(BOOL)isScrubbingOrSeeking;
-(double)rateWhenScrubbingOrSeekingBegan;
-(void)setRateWhenScrubbingOrSeekingBegan:(double)arg1 ;
-(BOOL)isInterruptedForAudioSession;
-(BOOL)wasPlayingWhenSuspended;
-(BOOL)isRoutingVideoToHostedWindow;
-(id<AVPictureInPicturePlatformAdapterDelegate>)delegate;
-(void)_setStatusAndNotifyDelegateIfNeeded:(long long)arg1 ;
-(void)_setRoutingVideoToHostedWindow:(BOOL)arg1 pictureInPictureViewController:(id)arg2 source:(id)arg3 ;
-(void)_updateStatusUsingProposedStatus:(long long)arg1 ;
-(void)setSource:(id<AVPictureInPictureContentSource>)arg1 ;
-(AVPlayerController *)playerController;
-(void)setDelegate:(id<AVPictureInPicturePlatformAdapterDelegate>)arg1 ;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1 ;
-(void)startPictureInPicture;
-(void)setStatus:(long long)arg1 ;
-(void)_updateStatus;
-(long long)controlsStyle;
-(void)setSeeking:(BOOL)arg1 ;
-(AVObservationController *)observationController;
-(BOOL)isSeeking;
-(PGPictureInPictureProxy *)pegasusProxy;
-(void)setControlsStyle:(long long)arg1 ;
-(BOOL)canAnimatePictureInPictureTransition;
-(long long)pictureInPictureProxyInterfaceOrientationForTransitionAnimation:(id)arg1 ;
-(CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1 ;
-(id)pictureInPictureProxyViewControllerWindowForTransitionAnimation:(id)arg1 ;
-(void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2 ;
-(void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2 ;
-(void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3 ;
-(BOOL)isSystemPictureInPicturePossible;
-(void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3 ;
-(void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3 ;
-(void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1 ;
-(void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1 ;
-(void)pictureInPictureProxy:(id)arg1 didReceivePlaybackCommand:(id)arg2 ;
-(void)setMicrophoneEnabled:(BOOL)arg1 ;
-(BOOL)isScrubbing;
-(long long)status;
-(void)dealloc;
-(void)pictureInPictureProxy:(id)arg1 didUpdateResourcesUsageReductionReasons:(unsigned long long)arg2 oldReasons:(unsigned long long)arg3 ;
-(void)pictureInPictureViewControllerViewDidAppear:(id)arg1 ;
-(void)pictureInPictureViewControllerViewWillDisappear:(id)arg1 ;
-(void)setPrerollAttributes:(AVPictureInPicturePrerollAttributes *)arg1 ;
-(void)stopPictureInPictureAndRestoreUserInterface:(BOOL)arg1 ;
-(void)setInterruptedForAudioSession:(BOOL)arg1 ;
-(void)setWasPlayingWhenSuspended:(BOOL)arg1 ;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(void)setAlwaysStartsAutomaticallyWhenEnteringBackground:(BOOL)arg1 ;
-(void)setCanStartAutomaticallyWhenEnteringBackground:(BOOL)arg1 ;
-(id<AVPictureInPictureContentSource>)source;
-(void)updateLayoutDependentBehaviors;
-(void)_updatePictureInPictureShouldStartWhenEnteringBackground;
-(void)_updateProxyPlaybackState;
-(void)_createProxyIfNeeded;
-(void)_startObservation;
-(void)_startObservingForPlaybackStateUpdates;
-(void)setScrubbingOrSeeking:(BOOL)arg1 ;
-(void)setScrubbing:(BOOL)arg1 ;
@end

