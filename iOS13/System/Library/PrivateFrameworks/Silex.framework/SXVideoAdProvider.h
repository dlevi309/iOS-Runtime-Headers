/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/ADBannerViewInternalDelegate.h>
#import <libobjc.A.dylib/SXVideoAdProviding.h>

@protocol SXVideoAdProviderDataSource, SXAnalyticsReporting, SVVideoMetadata, SXVideoAdViewControllerProviding, SVVisibilityMonitoring, SXVASTAnalyticsEventInfoFactory;
@class SXPrerollAdResponse, SVTimeline, SXVideoAdStateManager, NSString;

@interface SXVideoAdProvider : NSObject <ADBannerViewInternalDelegate, SXVideoAdProviding> {

	id<SXVideoAdProviderDataSource> _dataSource;
	id<SXAnalyticsReporting> _analyticsReporter;
	SXPrerollAdResponse* _response;
	id<SVVideoMetadata> _metadata;
	SVTimeline* _timeline;
	id<SXVideoAdViewControllerProviding> _fullscreenViewControllerProvider;
	SXVideoAdStateManager* _stateManager;
	id<SVVisibilityMonitoring> _videoVisibilityMonitor;
	id<SVVisibilityMonitoring> _videoPlayerVisibilityMonitor;
	id<SXVASTAnalyticsEventInfoFactory> _analyticsEventInfoFactory;

}

@property (nonatomic,retain) SXPrerollAdResponse * response;                                                       //@synthesize response=_response - In the implementation block
@property (assign,nonatomic,__weak) id<SVVideoMetadata> metadata;                                                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) SVTimeline * timeline;                                                              //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,readonly) id<SXVideoAdViewControllerProviding> fullscreenViewControllerProvider;              //@synthesize fullscreenViewControllerProvider=_fullscreenViewControllerProvider - In the implementation block
@property (nonatomic,readonly) SXVideoAdStateManager * stateManager;                                               //@synthesize stateManager=_stateManager - In the implementation block
@property (nonatomic,readonly) id<SVVisibilityMonitoring> videoVisibilityMonitor;                                  //@synthesize videoVisibilityMonitor=_videoVisibilityMonitor - In the implementation block
@property (nonatomic,readonly) id<SVVisibilityMonitoring> videoPlayerVisibilityMonitor;                            //@synthesize videoPlayerVisibilityMonitor=_videoPlayerVisibilityMonitor - In the implementation block
@property (nonatomic,readonly) id<SXVASTAnalyticsEventInfoFactory> analyticsEventInfoFactory;                      //@synthesize analyticsEventInfoFactory=_analyticsEventInfoFactory - In the implementation block
@property (assign,nonatomic,__weak) id<SXVideoAdProviderDataSource> dataSource;                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) id<SXAnalyticsReporting> analyticsReporter;                                           //@synthesize analyticsReporter=_analyticsReporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long skipThreshold; 
@property (nonatomic,readonly) BOOL hasAction; 
-(void)setMetadata:(id<SVVideoMetadata>)arg1 ;
-(id<SVVideoMetadata>)metadata;
-(double)threshold;
-(SXPrerollAdResponse *)response;
-(id<SXVideoAdProviderDataSource>)dataSource;
-(void)setDataSource:(id<SXVideoAdProviderDataSource>)arg1 ;
-(void)setResponse:(SXPrerollAdResponse *)arg1 ;
-(BOOL)hasAction;
-(id<SXAnalyticsReporting>)analyticsReporter;
-(void)setAnalyticsReporter:(id<SXAnalyticsReporting>)arg1 ;
-(/*^block*/id)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(SXVideoAdStateManager *)stateManager;
-(id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1 ;
-(unsigned long long)skipThreshold;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackFinished;
-(void)playbackFailedWithError:(id)arg1 ;
-(void)muteStateChanged:(BOOL)arg1 ;
-(SVTimeline *)timeline;
-(void)presentPrivacyStatement;
-(void)tappedToToggleControls;
-(void)skipped;
-(void)presentAction;
-(id<SVVisibilityMonitoring>)videoPlayerVisibilityMonitor;
-(id<SXVASTAnalyticsEventInfoFactory>)analyticsEventInfoFactory;
-(void)enteredFullscreen;
-(void)exitedFullscreen;
-(void)playbackInitiatedWithButtonTapped:(BOOL)arg1 ;
-(void)timeElapsed:(double)arg1 duration:(double)arg2 ;
-(id)initWithViewControllerProvider:(id)arg1 analyticsEventInfoFactory:(id)arg2 videoPlayerVisibilityMonitor:(id)arg3 videoVisibilityMonitor:(id)arg4 ;
-(void)configureTimelineForImpressionReporting;
-(void)reportEngagementEventWithType:(unsigned long long)arg1 ;
-(void)adVisibilityStateChanged;
-(id<SVVisibilityMonitoring>)videoVisibilityMonitor;
-(id<SXVideoAdViewControllerProviding>)fullscreenViewControllerProvider;
-(void)nextVideoStartPlaying;
@end

