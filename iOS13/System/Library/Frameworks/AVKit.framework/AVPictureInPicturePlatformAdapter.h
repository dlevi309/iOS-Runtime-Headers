/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPictureInPictureViewControllerDelegate.h>
#import <libobjc.A.dylib/PGPictureInPictureProxyDelegate.h>
#import <AVKit/AVPictureInPictureControlsStyleAppearance.h>

@protocol AVPictureInPicturePlatformAdapterDelegate, AVPictureInPictureContentSource;
@class AVPlayerController, AVPictureInPictureViewController, PGPictureInPictureProxy, NSTimer, AVSecondScreenConnection, UIWindow, AVObservationController, NSString;

@interface AVPictureInPicturePlatformAdapter : NSObject <AVPictureInPictureViewControllerDelegate, PGPictureInPictureProxyDelegate, AVPictureInPictureControlsStyleAppearance> {

	BOOL _allowsPictureInPicturePlayback;
	BOOL _alwaysStartsAutomaticallyWhenEnteringBackground;
	BOOL _anyPictureInPictureActive;
	id<AVPictureInPicturePlatformAdapterDelegate> _delegate;
	AVPlayerController* _playerController;
	long long _controlsStyle;
	AVPictureInPictureViewController* _pictureInPictureViewController;
	long long _status;
	PGPictureInPictureProxy* _pegasusProxy;
	NSTimer* _layoutCheckTimer;
	AVSecondScreenConnection* _secondScreenConnection;
	UIWindow* _sourceWindowWhenPictureInPictureStarted;
	id<AVPictureInPictureContentSource> _source;
	AVObservationController* _observationController;
	long long _statusStorage;
	CGRect _videoRectInScreen;

}

@property (assign,nonatomic) long long status; 
@property (nonatomic,readonly) PGPictureInPictureProxy * pegasusProxy;                                                   //@synthesize pegasusProxy=_pegasusProxy - In the implementation block
@property (assign,nonatomic) CGRect videoRectInScreen;                                                                   //@synthesize videoRectInScreen=_videoRectInScreen - In the implementation block
@property (nonatomic,readonly) NSTimer * layoutCheckTimer;                                                               //@synthesize layoutCheckTimer=_layoutCheckTimer - In the implementation block
@property (nonatomic,retain) AVSecondScreenConnection * secondScreenConnection;                                          //@synthesize secondScreenConnection=_secondScreenConnection - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * sourceWindowWhenPictureInPictureStarted;                                  //@synthesize sourceWindowWhenPictureInPictureStarted=_sourceWindowWhenPictureInPictureStarted - In the implementation block
@property (nonatomic,__weak,readonly) id<AVPictureInPictureContentSource> source;                                        //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                          //@synthesize observationController=_observationController - In the implementation block
@property (assign,nonatomic) long long statusStorage;                                                                    //@synthesize statusStorage=_statusStorage - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPicturePlatformAdapterDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                                      //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPicturePlayback;                                                        //@synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback - In the implementation block
@property (getter=isSystemPictureInPicturePossible,nonatomic,readonly) BOOL systemPictureInPicturePossible; 
@property (assign,nonatomic) BOOL alwaysStartsAutomaticallyWhenEnteringBackground;                                       //@synthesize alwaysStartsAutomaticallyWhenEnteringBackground=_alwaysStartsAutomaticallyWhenEnteringBackground - In the implementation block
@property (assign,nonatomic) long long controlsStyle;                                                                    //@synthesize controlsStyle=_controlsStyle - In the implementation block
@property (nonatomic,readonly) BOOL canAnimatePictureInPictureTransition; 
@property (nonatomic,readonly) AVPictureInPictureViewController * pictureInPictureViewController;                        //@synthesize pictureInPictureViewController=_pictureInPictureViewController - In the implementation block
@property (getter=isAnyPictureInPictureActive,nonatomic,readonly) BOOL anyPictureInPictureActive;                        //@synthesize anyPictureInPictureActive=_anyPictureInPictureActive - In the implementation block
@property (nonatomic,readonly) long long status;                                                                         //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPictureInPictureSupported;
+(id)startPictureInPictureButtonImageName;
+(id)stopPictureInPictureButtonImageName;
-(void)dealloc;
-(id<AVPictureInPicturePlatformAdapterDelegate>)delegate;
-(void)setDelegate:(id<AVPictureInPicturePlatformAdapterDelegate>)arg1 ;
-(id<AVPictureInPictureContentSource>)source;
-(long long)status;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)_updateStatus;
-(id)initWithSource:(id)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)startPictureInPicture;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1 ;
-(AVObservationController *)observationController;
-(long long)controlsStyle;
-(void)setControlsStyle:(long long)arg1 ;
-(long long)pictureInPictureProxyInterfaceOrientationForTransitionAnimation:(id)arg1 ;
-(CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1 ;
-(id)pictureInPictureProxyViewControllerWindowForTransitionAnimation:(id)arg1 ;
-(void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2 ;
-(void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2 ;
-(void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3 ;
-(void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3 ;
-(void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3 ;
-(void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1 ;
-(void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1 ;
-(void)pictureInPictureViewControllerViewDidAppear:(id)arg1 ;
-(void)pictureInPictureViewControllerViewWillDisappear:(id)arg1 ;
-(void)stopPictureInPictureAndRestoreUserInterface:(BOOL)arg1 ;
-(BOOL)canAnimatePictureInPictureTransition;
-(BOOL)isSystemPictureInPicturePossible;
-(void)setPlaybackProgress:(double)arg1 playbackRate:(float)arg2 loadedTimeRanges:(id)arg3 ;
-(void)setAlwaysStartsAutomaticallyWhenEnteringBackground:(BOOL)arg1 ;
-(void)updateLayoutDependentBehaviors;
-(void)_updatePegasusProxyControlsStyle;
-(void)_createProxyIfNeeded;
-(void)_startObservation;
-(void)_removeSecondScreenConnection;
-(long long)_sceneActivationState;
-(BOOL)allowsPictureInPicturePlayback;
-(BOOL)alwaysStartsAutomaticallyWhenEnteringBackground;
-(AVPictureInPictureViewController *)pictureInPictureViewController;
-(BOOL)isAnyPictureInPictureActive;
-(PGPictureInPictureProxy *)pegasusProxy;
-(CGRect)videoRectInScreen;
-(void)setVideoRectInScreen:(CGRect)arg1 ;
-(NSTimer *)layoutCheckTimer;
-(AVSecondScreenConnection *)secondScreenConnection;
-(void)setSecondScreenConnection:(AVSecondScreenConnection *)arg1 ;
-(UIWindow *)sourceWindowWhenPictureInPictureStarted;
-(void)setSourceWindowWhenPictureInPictureStarted:(UIWindow *)arg1 ;
-(long long)statusStorage;
-(void)setStatusStorage:(long long)arg1 ;
-(void)_updateStatusUsingProposedStatus:(long long)arg1 ;
@end

