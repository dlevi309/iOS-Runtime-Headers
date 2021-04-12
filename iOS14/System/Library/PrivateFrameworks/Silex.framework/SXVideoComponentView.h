/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMediaComponentView.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXMediaPlaybackDelegate.h>
#import <libobjc.A.dylib/SXVideoPlayerViewControllerDelegate.h>
#import <libobjc.A.dylib/SXVideoPlayerViewControllerDataSource.h>
#import <libobjc.A.dylib/SWReachabilityObserver.h>
#import <libobjc.A.dylib/SXFullscreenVideoPlaybackCandidate.h>

@protocol SXResourceDataSource, SWReachabilityProvider, SXAppStateMonitor, SXSceneStateMonitor, SXScrollObserverManager, SXBookmarkManager, SXVideoAdProviderFactory;
@class SXVideoPlayerViewController, SXPosterFrameView, SXVideoAnalyticsRouter, SXVideoComponentAnalyticsReporting, SXVolumeProvider, SXVideoPlayerViewControllerManager, NSString;

@interface SXVideoComponentView : SXMediaComponentView <SXViewportChangeListener, SXMediaPlaybackDelegate, SXVideoPlayerViewControllerDelegate, SXVideoPlayerViewControllerDataSource, SWReachabilityObserver, SXFullscreenVideoPlaybackCandidate> {

	BOOL _isReceivingViewportDynamicBoundsChanges;
	SXVideoPlayerViewController* _videoPlayerViewController;
	id<SXResourceDataSource> _resourceDataSource;
	id<SWReachabilityProvider> _reachabilityProvider;
	id<SXAppStateMonitor> _appStateMonitor;
	id<SXSceneStateMonitor> _sceneStateMonitor;
	SXPosterFrameView* _posterFrame;
	/*^block*/id _thumbnailRequestCancelHandler;
	SXVideoAnalyticsRouter* _analyticsRouter;
	SXVideoComponentAnalyticsReporting* _videoComponentAnalyticsReporter;
	id<SXScrollObserverManager> _scrollObserverManager;
	SXVolumeProvider* _volumeProvider;
	SXVideoPlayerViewControllerManager* _videoPlayerViewControllerManager;
	id<SXBookmarkManager> _bookmarkManager;
	/*^block*/id _presentationBlock;
	id<SXVideoAdProviderFactory> _prerollAdFactory;

}

@property (nonatomic,readonly) id<SXResourceDataSource> resourceDataSource;                                        //@synthesize resourceDataSource=_resourceDataSource - In the implementation block
@property (nonatomic,readonly) id<SWReachabilityProvider> reachabilityProvider;                                    //@synthesize reachabilityProvider=_reachabilityProvider - In the implementation block
@property (nonatomic,readonly) id<SXAppStateMonitor> appStateMonitor;                                              //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
@property (nonatomic,readonly) id<SXSceneStateMonitor> sceneStateMonitor;                                          //@synthesize sceneStateMonitor=_sceneStateMonitor - In the implementation block
@property (assign,nonatomic) BOOL isReceivingViewportDynamicBoundsChanges;                                         //@synthesize isReceivingViewportDynamicBoundsChanges=_isReceivingViewportDynamicBoundsChanges - In the implementation block
@property (nonatomic,retain) SXPosterFrameView * posterFrame;                                                      //@synthesize posterFrame=_posterFrame - In the implementation block
@property (nonatomic,retain) SXVideoPlayerViewController * videoPlayerViewController;                              //@synthesize videoPlayerViewController=_videoPlayerViewController - In the implementation block
@property (nonatomic,copy) id thumbnailRequestCancelHandler;                                                       //@synthesize thumbnailRequestCancelHandler=_thumbnailRequestCancelHandler - In the implementation block
@property (nonatomic,retain) SXVideoAnalyticsRouter * analyticsRouter;                                             //@synthesize analyticsRouter=_analyticsRouter - In the implementation block
@property (nonatomic,retain) SXVideoComponentAnalyticsReporting * videoComponentAnalyticsReporter;                 //@synthesize videoComponentAnalyticsReporter=_videoComponentAnalyticsReporter - In the implementation block
@property (nonatomic,readonly) id<SXScrollObserverManager> scrollObserverManager;                                  //@synthesize scrollObserverManager=_scrollObserverManager - In the implementation block
@property (nonatomic,readonly) SXVolumeProvider * volumeProvider;                                                  //@synthesize volumeProvider=_volumeProvider - In the implementation block
@property (nonatomic,readonly) SXVideoPlayerViewControllerManager * videoPlayerViewControllerManager;              //@synthesize videoPlayerViewControllerManager=_videoPlayerViewControllerManager - In the implementation block
@property (nonatomic,readonly) id<SXBookmarkManager> bookmarkManager;                                              //@synthesize bookmarkManager=_bookmarkManager - In the implementation block
@property (nonatomic,copy) id presentationBlock;                                                                   //@synthesize presentationBlock=_presentationBlock - In the implementation block
@property (nonatomic,readonly) id<SXVideoAdProviderFactory> prerollAdFactory;                                      //@synthesize prerollAdFactory=_prerollAdFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(SXPosterFrameView *)posterFrame;
-(void)setPosterFrame:(SXPosterFrameView *)arg1 ;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(id<SXAppStateMonitor>)appStateMonitor;
-(void)reachabilityChanged:(BOOL)arg1 ;
-(void)discardContents;
-(SXVideoPlayerViewControllerManager *)videoPlayerViewControllerManager;
-(void)setPresentationBlock:(id)arg1 ;
-(id)presentationBlock;
-(SXVolumeProvider *)volumeProvider;
-(id<SXResourceDataSource>)resourceDataSource;
-(void)renderContents;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)visibilityStateDidChangeFromState:(long long)arg1 ;
-(BOOL)canEnterFullscreen;
-(void)enterFullscreen;
-(SXVideoPlayerViewController *)videoPlayerViewController;
-(void)viewport:(id)arg1 interfaceOrientationChangedFromOrientation:(long long)arg2 ;
-(id<SWReachabilityProvider>)reachabilityProvider;
-(id<SXScrollObserverManager>)scrollObserverManager;
-(BOOL)allowHierarchyRemoval;
-(unsigned long long)analyticsMediaType;
-(void)loadComponent:(id)arg1 ;
-(id)transitionContentView;
-(CGRect)transitionContentFrame;
-(void)prepareForTransitionType:(unsigned long long)arg1 ;
-(BOOL)usesThumbnailWithImageIdentifier:(id)arg1 ;
-(unsigned long long)analyticsVideoType;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 sceneStateMonitor:(id)arg7 resourceDataSource:(id)arg8 reachabilityProvider:(id)arg9 scrollObserverManager:(id)arg10 volumeProvider:(id)arg11 videoPlayerViewControllerManager:(id)arg12 bookmarkManager:(id)arg13 prerollAdFactory:(id)arg14 ;
-(void)pauseMediaPlayback;
-(void)setupVideoPlayerViewController:(id)arg1 ;
-(id<SXBookmarkManager>)bookmarkManager;
-(void)unloadVideoPlayerIfShowingAd;
-(void)setVideoComponentAnalyticsReporter:(SXVideoComponentAnalyticsReporting *)arg1 ;
-(SXVideoAnalyticsRouter *)analyticsRouter;
-(void)setAnalyticsRouter:(SXVideoAnalyticsRouter *)arg1 ;
-(SXVideoComponentAnalyticsReporting *)videoComponentAnalyticsReporter;
-(void)showPosterFrame;
-(void)loadPosterFrameImage;
-(id)thumbnailRequestCancelHandler;
-(void)setThumbnailRequestCancelHandler:(id)arg1 ;
-(void)setVideoPlayerViewController:(SXVideoPlayerViewController *)arg1 ;
-(void)playButtonTapped;
-(void)registerAsMediaPlaybackDelegate;
-(id<SXVideoAdProviderFactory>)prerollAdFactory;
-(void)pausePrerollIfNeeded;
-(BOOL)videoPlayerIsMoreThan50PercentVisible;
-(BOOL)isReceivingViewportDynamicBoundsChanges;
-(void)setIsReceivingViewportDynamicBoundsChanges:(BOOL)arg1 ;
-(void)videoPlayerViewControllerFinishedVideoPlayback:(id)arg1 ;
-(void)videoPlayerViewController:(id)arg1 startedPlaybackOfVideo:(id)arg2 ;
-(void)videoPlayerViewController:(id)arg1 resumedPlaybackOfVideo:(id)arg2 ;
-(BOOL)videoPlayerViewControllerShouldStartPlayback:(id)arg1 ;
-(void)videoPlayerViewControllerWillEnterFullscreen:(id)arg1 ;
-(void)videoPlayerViewControllerWillExitFullscreen:(id)arg1 ;
-(id)videoForVideoPlayerViewController:(id)arg1 ;
-(id)videoAdForVideoPlayerViewController:(id)arg1 ;
-(void)registerForViewportDynamicBoundsChanges;
-(void)unregisterForViewportDynamicBoundsChanges;
-(id<SXSceneStateMonitor>)sceneStateMonitor;
@end

