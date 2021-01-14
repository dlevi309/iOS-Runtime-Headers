/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/ADBannerViewInternalDelegate.h>
#import <libobjc.A.dylib/SXVideoAdProviding.h>

@protocol SXAnalyticsReporting, SXVideoMetadata, SXVideoAdViewControllerProviding, SXVisibilityMonitoring, SXVASTAnalyticsEventInfoFactory;
@class UIView, UIButton, SXPrerollAdResponse, SXVideoAdStateManager, SXAdController, SXVideoComponent, NSString;

@interface SXVideoAdProvider : NSObject <ADBannerViewInternalDelegate, SXVideoAdProviding> {

	id<SXAnalyticsReporting> _analyticsReporter;
	SXPrerollAdResponse* _response;
	id<SXVideoMetadata> _metadata;
	id<SXVideoAdViewControllerProviding> _fullscreenViewControllerProvider;
	SXVideoAdStateManager* _stateManager;
	id<SXVisibilityMonitoring> _videoVisibilityMonitor;
	id<SXVisibilityMonitoring> _videoPlayerVisibilityMonitor;
	id<SXVASTAnalyticsEventInfoFactory> _analyticsEventInfoFactory;
	SXAdController* _adController;
	SXVideoComponent* _component;

}

@property (nonatomic,retain) SXPrerollAdResponse * response;                                                       //@synthesize response=_response - In the implementation block
@property (assign,nonatomic,__weak) id<SXVideoMetadata> metadata;                                                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) id<SXVideoAdViewControllerProviding> fullscreenViewControllerProvider;              //@synthesize fullscreenViewControllerProvider=_fullscreenViewControllerProvider - In the implementation block
@property (nonatomic,readonly) SXVideoAdStateManager * stateManager;                                               //@synthesize stateManager=_stateManager - In the implementation block
@property (nonatomic,readonly) id<SXVisibilityMonitoring> videoVisibilityMonitor;                                  //@synthesize videoVisibilityMonitor=_videoVisibilityMonitor - In the implementation block
@property (nonatomic,readonly) id<SXVisibilityMonitoring> videoPlayerVisibilityMonitor;                            //@synthesize videoPlayerVisibilityMonitor=_videoPlayerVisibilityMonitor - In the implementation block
@property (nonatomic,readonly) id<SXVASTAnalyticsEventInfoFactory> analyticsEventInfoFactory;                      //@synthesize analyticsEventInfoFactory=_analyticsEventInfoFactory - In the implementation block
@property (nonatomic,readonly) SXAdController * adController;                                                      //@synthesize adController=_adController - In the implementation block
@property (nonatomic,readonly) SXVideoComponent * component;                                                       //@synthesize component=_component - In the implementation block
@property (nonatomic,retain) id<SXAnalyticsReporting> analyticsReporter;                                           //@synthesize analyticsReporter=_analyticsReporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long skipThreshold; 
@property (nonatomic,readonly) BOOL hasAction; 
@property (nonatomic,readonly) UIView * metricsView; 
@property (nonatomic,readonly) UIButton * privacyMarker; 
@property (nonatomic,readonly) double impressionThreshold; 
-(double)threshold;
-(SXAdController *)adController;
-(void)setMetadata:(id<SXVideoMetadata>)arg1 ;
-(SXPrerollAdResponse *)response;
-(void)setAnalyticsReporter:(id<SXAnalyticsReporting>)arg1 ;
-(void)skipped;
-(void)setResponse:(SXPrerollAdResponse *)arg1 ;
-(BOOL)hasAction;
-(SXVideoComponent *)component;
-(/*^block*/id)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(UIButton *)privacyMarker;
-(SXVideoAdStateManager *)stateManager;
-(id<SXVideoMetadata>)metadata;
-(id<SXAnalyticsReporting>)analyticsReporter;
-(unsigned long long)skipThreshold;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackFinished;
-(void)playbackFailedWithError:(id)arg1 ;
-(void)enteredFullscreen;
-(void)exitedFullscreen;
-(void)muteStateChanged:(BOOL)arg1 ;
-(void)playbackPassedQuartile:(unsigned long long)arg1 ;
-(void)tappedToToggleControlVisibility:(BOOL)arg1 ;
-(void)nextVideoStartedPlaying;
-(void)playbackInitiatedWithButtonTapped:(BOOL)arg1 ;
-(double)impressionThreshold;
-(void)playbackPassedImpressionThreshold;
-(UIView *)metricsView;
-(void)presentAction;
-(id)initWithViewControllerProvider:(id)arg1 analyticsEventInfoFactory:(id)arg2 videoPlayerVisibilityMonitor:(id)arg3 videoVisibilityMonitor:(id)arg4 adController:(id)arg5 component:(id)arg6 ;
-(id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1 ;
-(id<SXVASTAnalyticsEventInfoFactory>)analyticsEventInfoFactory;
-(void)reportEngagementEventWithType:(unsigned long long)arg1 ;
-(void)adVisibilityStateChanged;
-(void)presentPrivacyStatement;
-(id<SXVisibilityMonitoring>)videoPlayerVisibilityMonitor;
-(id<SXVisibilityMonitoring>)videoVisibilityMonitor;
-(id<SXVideoAdViewControllerProviding>)fullscreenViewControllerProvider;
@end

