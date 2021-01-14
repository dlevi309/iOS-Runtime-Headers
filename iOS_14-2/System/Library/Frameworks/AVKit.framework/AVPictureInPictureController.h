/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPictureInPicturePlatformAdapterDelegate.h>
#import <AVKit/AVPictureInPictureControlsStyleAppearance.h>

@protocol AVPictureInPictureControllerDelegate, AVPictureInPictureContentSource, AVPictureInPicturePrerollDelegate;
@class AVPlayerLayer, AVPictureInPicturePlatformAdapter, AVObservationController, AVPlayerController, AVPictureInPictureControllerContentSource, AVPictureInPictureViewController, NSString;

@interface AVPictureInPictureController : NSObject <AVPictureInPicturePlatformAdapterDelegate, AVPictureInPictureControlsStyleAppearance> {

	BOOL _microphoneEnabled;
	BOOL _requiresLinearPlayback;
	BOOL _pictureInPicturePossible;
	BOOL _pictureInPictureActive;
	BOOL _pictureInPictureSuspended;
	BOOL _canStopPictureInPicture;
	BOOL _otherPictureInPictureActive;
	BOOL _wantsImmediateAssetInspection;
	BOOL _wasPlayingWhenPictureInPictureInterruptionBegan;
	BOOL _wantsResourceReduction;
	BOOL _retainsSourceDuringPictureInPicturePlayback;
	BOOL _allowsPictureInPicturePlayback;
	BOOL _allowsPictureInPictureFromInlineWhenEnteringBackground;
	BOOL _pictureInPictureWasStartedWhenEnteringBackground;
	BOOL _canStartAutomaticallyWhenEnteringBackground;
	long long _controlsStyle;
	AVPlayerLayer* _playerLayer;
	id<AVPictureInPictureControllerDelegate> _delegate;
	AVPictureInPicturePlatformAdapter* _platformAdapter;
	AVObservationController* _observationController;
	id<AVPictureInPictureContentSource> _sourceIfRetainedDuringPictureInPicturePlayback;
	id _playerControllerIsPlayingObservationToken;
	id<AVPictureInPictureContentSource> _source;
	AVPlayerController* _playerController;
	id<AVPictureInPicturePrerollDelegate> _prerollDelegate;
	AVPictureInPictureControllerContentSource* _contentSource;

}

@property (nonatomic,readonly) AVPictureInPicturePlatformAdapter * platformAdapter;                                           //@synthesize platformAdapter=_platformAdapter - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                               //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) id<AVPictureInPictureContentSource> sourceIfRetainedDuringPictureInPicturePlayback;              //@synthesize sourceIfRetainedDuringPictureInPicturePlayback=_sourceIfRetainedDuringPictureInPicturePlayback - In the implementation block
@property (nonatomic,retain) id playerControllerIsPlayingObservationToken;                                                    //@synthesize playerControllerIsPlayingObservationToken=_playerControllerIsPlayingObservationToken - In the implementation block
@property (assign,getter=isPictureInPicturePossible,nonatomic) BOOL pictureInPicturePossible;                                 //@synthesize pictureInPicturePossible=_pictureInPicturePossible - In the implementation block
@property (assign,getter=isPictureInPictureActive,nonatomic) BOOL pictureInPictureActive;                                     //@synthesize pictureInPictureActive=_pictureInPictureActive - In the implementation block
@property (assign,getter=isPictureInPictureSuspended,nonatomic) BOOL pictureInPictureSuspended;                               //@synthesize pictureInPictureSuspended=_pictureInPictureSuspended - In the implementation block
@property (assign,getter=isOtherPictureInPictureActive,nonatomic) BOOL otherPictureInPictureActive;                           //@synthesize otherPictureInPictureActive=_otherPictureInPictureActive - In the implementation block
@property (assign,setter=_setCanStopPictureInPicture:,nonatomic) BOOL canStopPictureInPicture;                                //@synthesize canStopPictureInPicture=_canStopPictureInPicture - In the implementation block
@property (assign,nonatomic) BOOL wantsImmediateAssetInspection;                                                              //@synthesize wantsImmediateAssetInspection=_wantsImmediateAssetInspection - In the implementation block
@property (assign,nonatomic) BOOL wasPlayingWhenPictureInPictureInterruptionBegan;                                            //@synthesize wasPlayingWhenPictureInPictureInterruptionBegan=_wasPlayingWhenPictureInPictureInterruptionBegan - In the implementation block
@property (nonatomic,__weak,readonly) id<AVPictureInPictureContentSource> source;                                             //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) AVPictureInPictureViewController * pictureInPictureViewController; 
@property (nonatomic,readonly) BOOL wantsResourceReduction;                                                                   //@synthesize wantsResourceReduction=_wantsResourceReduction - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                                           //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic) BOOL retainsSourceDuringPictureInPicturePlayback;                                                //@synthesize retainsSourceDuringPictureInPicturePlayback=_retainsSourceDuringPictureInPicturePlayback - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPicturePlayback;                                                             //@synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPictureFromInlineWhenEnteringBackground;                                     //@synthesize allowsPictureInPictureFromInlineWhenEnteringBackground=_allowsPictureInPictureFromInlineWhenEnteringBackground - In the implementation block
@property (assign,nonatomic) BOOL pictureInPictureWasStartedWhenEnteringBackground;                                           //@synthesize pictureInPictureWasStartedWhenEnteringBackground=_pictureInPictureWasStartedWhenEnteringBackground - In the implementation block
@property (assign,getter=isMicrophoneEnabled,nonatomic) BOOL microphoneEnabled;                                               //@synthesize microphoneEnabled=_microphoneEnabled - In the implementation block
@property (assign,nonatomic) BOOL canStartAutomaticallyWhenEnteringBackground;                                                //@synthesize canStartAutomaticallyWhenEnteringBackground=_canStartAutomaticallyWhenEnteringBackground - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPicturePrerollDelegate> prerollDelegate;                                    //@synthesize prerollDelegate=_prerollDelegate - In the implementation block
@property (nonatomic,retain) AVPictureInPictureControllerContentSource * contentSource;                                       //@synthesize contentSource=_contentSource - In the implementation block
@property (nonatomic,readonly) AVPlayerLayer * playerLayer;                                                                   //@synthesize playerLayer=_playerLayer - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPictureControllerDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                                                     //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
@property (assign,nonatomic) BOOL canStartPictureInPictureAutomaticallyFromInline; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long controlsStyle;                                                                         //@synthesize controlsStyle=_controlsStyle - In the implementation block
+(id)_imageNamed:(id)arg1 compatibileWithTraitCollection:(id)arg2 ;
+(id)pictureInPictureButtonStartImageCompatibleWithTraitCollection:(id)arg1 ;
+(id)pictureInPictureButtonStopImageCompatibleWithTraitCollection:(id)arg1 ;
+(id)pictureInPictureButtonStartImage;
+(id)pictureInPictureButtonStopImage;
+(BOOL)isPictureInPictureSupported;
-(id)initWithSource:(id)arg1 ;
-(BOOL)allowsPictureInPicturePlayback;
-(BOOL)canStartAutomaticallyWhenEnteringBackground;
-(BOOL)requiresLinearPlayback;
-(BOOL)isMicrophoneEnabled;
-(AVPictureInPictureViewController *)pictureInPictureViewController;
-(void)_commonInitWithSource:(id)arg1 ;
-(id)_sbdlPlayerController;
-(void)pictureInPicturePlatformAdapter:(id)arg1 failedToStartError:(id)arg2 ;
-(void)pictureInPicturePlatformAdapter:(id)arg1 prepareToStopForRestoringUserInterface:(/*^block*/id)arg2 ;
-(void)pictureInPicturePlatformAdapterPrepareToStopForDismissal:(id)arg1 ;
-(void)pictureInPicturePlatformAdapter:(id)arg1 handlePlaybackCommand:(long long)arg2 ;
-(void)pictureInPicturePlatformAdapter:(id)arg1 stopPictureInPictureAndRestoreUserInterface:(BOOL)arg2 ;
-(void)pictureInPicturePlatformAdapter:(id)arg1 statusDidChange:(long long)arg2 fromStatus:(long long)arg3 ;
-(void)pictureInPicturePlatformAdapterBeginReducingResourcesForEligibleOffScreenState;
-(id)initWithContentSource:(id)arg1 ;
-(void)pictureInPicturePlatformAdapterEndReducingResourcesForEligibleOffScreenState;
-(void)stopPictureInPictureEvenWhenInBackground;
-(void)contentSourceVideoRectInWindowChanged;
-(void)setAllowsPictureInPictureFromInlineWhenEnteringBackground:(BOOL)arg1 ;
-(id)sampleBufferDisplayLayer;
-(void)setOtherPictureInPictureActive:(BOOL)arg1 ;
-(void)setPictureInPicturePossible:(BOOL)arg1 ;
-(void)startObservingPlayerController:(id)arg1 ;
-(void)stopObservingPlayerController:(id)arg1 ;
-(void)reloadPrerollAttributes;
-(void)invalidatePlaybackState;
-(void)sampleBufferDisplayLayerRenderSizeDidChangeToSize:(CGSize)arg1 ;
-(AVPictureInPicturePlatformAdapter *)platformAdapter;
-(void)sampleBufferDisplayLayerDidAppear;
-(void)sampleBufferDisplayLayerDidDisappear;
-(id)_delegateIfRespondsToSelector:(SEL)arg1 ;
-(void)_stopPictureInPictureAndRestoreUserInterface:(BOOL)arg1 ;
-(void)_observePlayerLayer:(id)arg1 ;
-(void)setPictureInPictureSuspended:(BOOL)arg1 ;
-(BOOL)canStopPictureInPicture;
-(id<AVPictureInPicturePrerollDelegate>)prerollDelegate;
-(void)_setCanStopPictureInPicture:(BOOL)arg1 ;
-(id<AVPictureInPictureContentSource>)sourceIfRetainedDuringPictureInPicturePlayback;
-(void)setSourceIfRetainedDuringPictureInPicturePlayback:(id<AVPictureInPictureContentSource>)arg1 ;
-(id)playerControllerIsPlayingObservationToken;
-(void)setPlayerControllerIsPlayingObservationToken:(id)arg1 ;
-(BOOL)wantsResourceReduction;
-(BOOL)isOtherPictureInPictureActive;
-(BOOL)wantsImmediateAssetInspection;
-(void)setWantsImmediateAssetInspection:(BOOL)arg1 ;
-(BOOL)wasPlayingWhenPictureInPictureInterruptionBegan;
-(void)setWasPlayingWhenPictureInPictureInterruptionBegan:(BOOL)arg1 ;
-(BOOL)retainsSourceDuringPictureInPicturePlayback;
-(void)setRetainsSourceDuringPictureInPicturePlayback:(BOOL)arg1 ;
-(BOOL)allowsPictureInPictureFromInlineWhenEnteringBackground;
-(void)setPictureInPictureWasStartedWhenEnteringBackground:(BOOL)arg1 ;
-(void)setPrerollDelegate:(id<AVPictureInPicturePrerollDelegate>)arg1 ;
-(id)init;
-(id<AVPictureInPictureControllerDelegate>)delegate;
-(void)setContentSource:(AVPictureInPictureControllerContentSource *)arg1 ;
-(AVPlayerController *)playerController;
-(void)setDelegate:(id<AVPictureInPictureControllerDelegate>)arg1 ;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1 ;
-(BOOL)pictureInPictureWasStartedWhenEnteringBackground;
-(void)setCanStartPictureInPictureAutomaticallyFromInline:(BOOL)arg1 ;
-(void)startPictureInPicture;
-(void)invalidate;
-(BOOL)canStartPictureInPictureAutomaticallyFromInline;
-(void)stopPictureInPicture;
-(id)initWithPlayerLayer:(id)arg1 ;
-(BOOL)isPictureInPictureSuspended;
-(AVPictureInPictureControllerContentSource *)contentSource;
-(BOOL)isPictureInPictureActive;
-(void)setPictureInPictureActive:(BOOL)arg1 ;
-(long long)controlsStyle;
-(AVObservationController *)observationController;
-(BOOL)isPictureInPicturePossible;
-(void)setControlsStyle:(long long)arg1 ;
-(void)setMicrophoneEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(void)setCanStartAutomaticallyWhenEnteringBackground:(BOOL)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(id<AVPictureInPictureContentSource>)source;
@end

