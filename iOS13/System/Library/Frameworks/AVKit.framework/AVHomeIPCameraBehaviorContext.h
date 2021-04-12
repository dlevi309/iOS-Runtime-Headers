/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPlayerViewControllerBehaviorContext.h>
#import <AVKit/AVBehaviorContextInternal.h>
#import <AVKit/AVBehaviorContext.h>
#import <AVKit/AVScrubbing.h>

@class AVPlayerViewController, AVHomeIPCameraBehavior, UIView, AVZoomingBehavior, AVHomeIPCameraPlayerController, AVPlayerController, AVObservationController, NSString;

@interface AVHomeIPCameraBehaviorContext : NSObject <AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, AVBehaviorContext, AVScrubbing> {

	BOOL _playbackControlsIncludeTransportControls;
	BOOL _playbackControlsIncludeDisplayModeControls;
	BOOL _playbackControlsIncludeVolumeControls;
	BOOL _zoomingEnabled;
	BOOL _microphoneEnabled;
	BOOL _livePreviewActive;
	BOOL _playbackControlsShowsLoadingIndicator;
	AVPlayerViewController* _playerViewController;
	AVHomeIPCameraBehavior* _behavior;
	UIView* _livePreviewContainerView;
	AVZoomingBehavior* _zoomingBehavior;
	AVHomeIPCameraPlayerController* _livePreviewPlayerController;
	AVPlayerController* _playerControllerToRestore;
	AVObservationController* _observationController;
	CGSize _livePreviewAspectRatio;

}

@property (assign,nonatomic,__weak) AVHomeIPCameraBehavior * behavior;                                         //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,retain) AVZoomingBehavior * zoomingBehavior;                                              //@synthesize zoomingBehavior=_zoomingBehavior - In the implementation block
@property (assign,nonatomic,__weak) AVHomeIPCameraPlayerController * livePreviewPlayerController;              //@synthesize livePreviewPlayerController=_livePreviewPlayerController - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerControllerToRestore;                                   //@synthesize playerControllerToRestore=_playerControllerToRestore - In the implementation block
@property (nonatomic,retain) AVObservationController * observationController;                                  //@synthesize observationController=_observationController - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsShowsLoadingIndicator;                                       //@synthesize playbackControlsShowsLoadingIndicator=_playbackControlsShowsLoadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsIncludeTransportControls;                                    //@synthesize playbackControlsIncludeTransportControls=_playbackControlsIncludeTransportControls - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsIncludeDisplayModeControls;                                  //@synthesize playbackControlsIncludeDisplayModeControls=_playbackControlsIncludeDisplayModeControls - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsIncludeVolumeControls;                                       //@synthesize playbackControlsIncludeVolumeControls=_playbackControlsIncludeVolumeControls - In the implementation block
@property (assign,getter=isZoomingEnabled,nonatomic) BOOL zoomingEnabled;                                      //@synthesize zoomingEnabled=_zoomingEnabled - In the implementation block
@property (assign,getter=isMicrophoneEnabled,nonatomic) BOOL microphoneEnabled;                                //@synthesize microphoneEnabled=_microphoneEnabled - In the implementation block
@property (nonatomic,readonly) UIView * livePreviewContainerView;                                              //@synthesize livePreviewContainerView=_livePreviewContainerView - In the implementation block
@property (assign,getter=isLivePreviewActive,nonatomic) BOOL livePreviewActive;                                //@synthesize livePreviewActive=_livePreviewActive - In the implementation block
@property (assign,nonatomic) CGSize livePreviewAspectRatio;                                                    //@synthesize livePreviewAspectRatio=_livePreviewAspectRatio - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) AVPlayerViewController * playerViewController;                           //@synthesize playerViewController=_playerViewController - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(AVHomeIPCameraBehavior *)behavior;
-(void)setBehavior:(AVHomeIPCameraBehavior *)arg1 ;
-(void)beginScrubbing;
-(void)endScrubbing;
-(AVPlayerViewController *)playerViewController;
-(AVObservationController *)observationController;
-(void)willStartPictureInPictureWithViewController:(id)arg1 ;
-(void)didStopPictureInPicture;
-(id)initWithAVKitOwner:(id)arg1 ;
-(void)willAddBehavior:(id)arg1 ;
-(void)didAddBehavior:(id)arg1 ;
-(void)willRemoveBehavior:(id)arg1 ;
-(void)didRemoveBehavior:(id)arg1 ;
-(BOOL)playbackControlsIncludeTransportControls;
-(void)setPlaybackControlsIncludeTransportControls:(BOOL)arg1 ;
-(BOOL)playbackControlsIncludeDisplayModeControls;
-(void)setPlaybackControlsIncludeDisplayModeControls:(BOOL)arg1 ;
-(void)setPlaybackControlsIncludeVolumeControls:(BOOL)arg1 ;
-(BOOL)playbackControlsIncludeVolumeControls;
-(AVZoomingBehavior *)zoomingBehavior;
-(void)setZoomingBehavior:(AVZoomingBehavior *)arg1 ;
-(void)setObservationController:(AVObservationController *)arg1 ;
-(void)scrubToTime:(double)arg1 resolution:(double)arg2 ;
-(void)setZoomingEnabled:(BOOL)arg1 ;
-(void)setLivePreviewActive:(BOOL)arg1 ;
-(void)setMicrophoneEnabled:(BOOL)arg1 ;
-(void)setLivePreviewAspectRatio:(CGSize)arg1 ;
-(void)setBackgroundColor:(id)arg1 forContainerOfControlItem:(id)arg2 ;
-(void)_updatePlaybackControlsControllerAndZoomingBehavior;
-(BOOL)isZoomingEnabled;
-(BOOL)isMicrophoneEnabled;
-(UIView *)livePreviewContainerView;
-(BOOL)isLivePreviewActive;
-(CGSize)livePreviewAspectRatio;
-(AVHomeIPCameraPlayerController *)livePreviewPlayerController;
-(void)setLivePreviewPlayerController:(AVHomeIPCameraPlayerController *)arg1 ;
-(AVPlayerController *)playerControllerToRestore;
-(void)setPlayerControllerToRestore:(AVPlayerController *)arg1 ;
-(BOOL)playbackControlsShowsLoadingIndicator;
-(void)setPlaybackControlsShowsLoadingIndicator:(BOOL)arg1 ;
@end

