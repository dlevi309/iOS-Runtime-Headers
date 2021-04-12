/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>
#import <libobjc.A.dylib/ADBannerViewInternalDelegate.h>
#import <libobjc.A.dylib/SVVideo.h>
#import <libobjc.A.dylib/SVVideoAdProviding.h>

@protocol NUAdContextProvider, NUVideoAdEventTracker, SVVideoMetadata, NUAdProvider, SVVisibilityMonitoring, SXVASTAnalyticsEventInfoFactory, NUVideoPlaybackCounter, SVModalPresentationViewControllerProviding;
@class NSString, NSArray, NUAdBannerView, NSURL, SVKeyValueObserver, SXVideoAdStateManager;

@interface NUVideoAdProvider : NSObject <NUAdContextProvider, ADBannerViewInternalDelegate, SVVideo, SVVideoAdProviding> {

	BOOL _appeared;
	NSString* _identifier;
	NSArray* _contextProviders;
	id<NUAdContextProvider> _contextProviderForVideoBefore;
	id<NUAdContextProvider> _contextProviderForVideoAfter;
	NUAdBannerView* _bannerView;
	unsigned long long _skipThreshold;
	NSURL* _URL;
	SVKeyValueObserver* _playbackStartedObserver;
	id<NUVideoAdEventTracker> _eventTracker;
	id<SVVideoMetadata> _metadata;
	SXVideoAdStateManager* _stateManager;
	id<NUAdProvider> _adProvider;
	id<SVVisibilityMonitoring> _videoPlayerVisibilityMonitor;
	id<SXVASTAnalyticsEventInfoFactory> _analyticsEventInfoFactory;
	id<NUVideoPlaybackCounter> _playbackCounter;
	id<SVModalPresentationViewControllerProviding> _modalPresentationViewControllerProvider;

}

@property (nonatomic,copy) NSArray * contextProviders;                                                                              //@synthesize contextProviders=_contextProviders - In the implementation block
@property (nonatomic,retain) id<NUAdContextProvider> contextProviderForVideoBefore;                                                 //@synthesize contextProviderForVideoBefore=_contextProviderForVideoBefore - In the implementation block
@property (nonatomic,retain) id<NUAdContextProvider> contextProviderForVideoAfter;                                                  //@synthesize contextProviderForVideoAfter=_contextProviderForVideoAfter - In the implementation block
@property (nonatomic,retain) NUAdBannerView * bannerView;                                                                           //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) unsigned long long skipThreshold;                                                                      //@synthesize skipThreshold=_skipThreshold - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                                                                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * playbackStartedObserver;                                                          //@synthesize playbackStartedObserver=_playbackStartedObserver - In the implementation block
@property (nonatomic,retain) id<NUVideoAdEventTracker> eventTracker;                                                                //@synthesize eventTracker=_eventTracker - In the implementation block
@property (nonatomic,retain) id<SVVideoMetadata> metadata;                                                                          //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) SXVideoAdStateManager * stateManager;                                                                //@synthesize stateManager=_stateManager - In the implementation block
@property (nonatomic,readonly) id<NUAdProvider> adProvider;                                                                         //@synthesize adProvider=_adProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<SVVisibilityMonitoring> videoPlayerVisibilityMonitor;                                      //@synthesize videoPlayerVisibilityMonitor=_videoPlayerVisibilityMonitor - In the implementation block
@property (nonatomic,readonly) id<SXVASTAnalyticsEventInfoFactory> analyticsEventInfoFactory;                                       //@synthesize analyticsEventInfoFactory=_analyticsEventInfoFactory - In the implementation block
@property (nonatomic,readonly) id<NUVideoPlaybackCounter> playbackCounter;                                                          //@synthesize playbackCounter=_playbackCounter - In the implementation block
@property (nonatomic,readonly) id<SVModalPresentationViewControllerProviding> modalPresentationViewControllerProvider;              //@synthesize modalPresentationViewControllerProvider=_modalPresentationViewControllerProvider - In the implementation block
@property (assign,nonatomic) BOOL appeared;                                                                                         //@synthesize appeared=_appeared - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                                                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long videoType; 
@property (nonatomic,readonly) BOOL allowsCallToActionBar; 
@property (nonatomic,readonly) double threshold; 
@property (nonatomic,readonly) BOOL hasAction; 
-(NSString *)identifier;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setMetadata:(id<SVVideoMetadata>)arg1 ;
-(id<SVVideoMetadata>)metadata;
-(double)threshold;
-(id<NUVideoAdEventTracker>)eventTracker;
-(BOOL)hasAction;
-(/*^block*/id)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(NUAdBannerView *)bannerView;
-(void)setBannerView:(NUAdBannerView *)arg1 ;
-(void)didAppear;
-(BOOL)appeared;
-(void)setAppeared:(BOOL)arg1 ;
-(SXVideoAdStateManager *)stateManager;
-(id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1 ;
-(unsigned long long)skipThreshold;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(unsigned long long)videoType;
-(void)setSkipThreshold:(unsigned long long)arg1 ;
-(void)playbackFinished;
-(void)didDisappear;
-(void)setEventTracker:(id<NUVideoAdEventTracker>)arg1 ;
-(void)playbackFailedWithError:(id)arg1 ;
-(void)muteStateChanged:(BOOL)arg1 ;
-(void)tappedAdvance;
-(id<SVModalPresentationViewControllerProviding>)modalPresentationViewControllerProvider;
-(BOOL)allowsCallToActionBar;
-(void)presentPrivacyStatement;
-(void)impressionQuartilePassed:(unsigned long long)arg1 ;
-(void)impressionThresholdPassed:(double)arg1 ;
-(void)tappedToToggleControls;
-(void)playbackInitiated;
-(void)skipped;
-(void)presentAction;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)contextProvidersForKeyPath:(id)arg1 ;
-(NSArray *)contextProviders;
-(id<NUAdProvider>)adProvider;
-(id<SVVisibilityMonitoring>)videoPlayerVisibilityMonitor;
-(id<SXVASTAnalyticsEventInfoFactory>)analyticsEventInfoFactory;
-(id<NUVideoPlaybackCounter>)playbackCounter;
-(id)initWithContextProviders:(id)arg1 adProvider:(id)arg2 contextProviderForVideoBefore:(id)arg3 contextProviderForVideoAfter:(id)arg4 eventTracker:(id)arg5 videoPlayerVisibilityMonitor:(id)arg6 analyticsEventInfoFactory:(id)arg7 playbackCounter:(id)arg8 modalPresentationViewControllerProvider:(id)arg9 ;
-(id)metadataForCurrentState;
-(id<NUAdContextProvider>)contextProviderForVideoBefore;
-(id<NUAdContextProvider>)contextProviderForVideoAfter;
-(void)setContextProviders:(NSArray *)arg1 ;
-(void)setContextProviderForVideoBefore:(id<NUAdContextProvider>)arg1 ;
-(void)setContextProviderForVideoAfter:(id<NUAdContextProvider>)arg1 ;
-(SVKeyValueObserver *)playbackStartedObserver;
-(void)setPlaybackStartedObserver:(SVKeyValueObserver *)arg1 ;
@end

