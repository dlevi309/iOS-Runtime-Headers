/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMediaComponentView.h>
#import <libobjc.A.dylib/SXMediaPlaybackDelegate.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate_AppStoreOnly.h>

@protocol SXResourceDataSource, SXHost;
@class SXAudioComponentOverlayView, AVPlayerViewController, SXAVPlayer, NSString;

@interface SXAudioComponentView : SXMediaComponentView <SXMediaPlaybackDelegate, AVPlayerViewControllerDelegate_AppStoreOnly> {

	BOOL _audioHasPlayed;
	BOOL _startPlaybackWhenReady;
	id<SXResourceDataSource> _resourceDataSource;
	id<SXHost> _host;
	SXAudioComponentOverlayView* _overlayView;
	AVPlayerViewController* _playerViewController;
	SXAVPlayer* _player;
	/*^block*/id _cancelHandler;

}

@property (nonatomic,readonly) id<SXResourceDataSource> resourceDataSource;              //@synthesize resourceDataSource=_resourceDataSource - In the implementation block
@property (nonatomic,readonly) id<SXHost> host;                                          //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) SXAudioComponentOverlayView * overlayView;                //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) SXAVPlayer * player;                                        //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL audioHasPlayed;                                        //@synthesize audioHasPlayed=_audioHasPlayed - In the implementation block
@property (assign,nonatomic) BOOL startPlaybackWhenReady;                                //@synthesize startPlaybackWhenReady=_startPlaybackWhenReady - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                             //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXAVPlayer *)player;
-(void)loadImage;
-(void)setPlayer:(SXAVPlayer *)arg1 ;
-(id<SXHost>)host;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(SXAudioComponentOverlayView *)overlayView;
-(id)cancelHandler;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(AVPlayerViewController *)playerViewController;
-(void)discardContents;
-(void)setCancelHandler:(id)arg1 ;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)playerViewController:(id)arg1 metricsCollectionEventOccured:(long long)arg2 ;
-(void)layoutViews;
-(id<SXResourceDataSource>)resourceDataSource;
-(void)renderContents;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackFinished;
-(BOOL)allowHierarchyRemoval;
-(unsigned long long)analyticsMediaType;
-(void)pauseMediaPlayback;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 resourceDataSource:(id)arg7 host:(id)arg8 ;
-(void)playButtonTapped:(id)arg1 ;
-(void)loadAudio;
-(void)setupPlayerViewControllerWithPlayer:(id)arg1 ;
-(void)setStartPlaybackWhenReady:(BOOL)arg1 ;
-(void)submitMediaEngageEventForUserAction:(unsigned long long)arg1 ;
-(BOOL)shouldAutoStartPlayback;
-(BOOL)startPlaybackWhenReady;
-(BOOL)audioHasPlayed;
-(void)submitMediaEngageCompleteEvent;
-(void)setAudioHasPlayed:(BOOL)arg1 ;
-(void)hidePlaybackControls;
-(void)showPlaybackControls;
@end

