/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/NewsTransparencyViewControllerDelegate.h>
#import <libobjc.A.dylib/ADWebViewActionViewControllerDelegate.h>
#import <libobjc.A.dylib/ADCreativeControllerDelegate.h>

@protocol ADAdRecipient;
@class NSString, NSURL, ADSInternalSize, ADContext, ADAdImpressionPublicAttributes, ADAdActionPublicAttributes, ADMRAIDAction, ADCreativeController, ADWebViewActionViewController, UIViewController, NSArray, NewsTransparencyViewController, ADAdSpaceConfiguration;

@interface ADAdSpace : NSObject <NewsTransparencyViewControllerDelegate, ADWebViewActionViewControllerDelegate, ADCreativeControllerDelegate> {

	BOOL _requiresFastVisibiltyTestOnly;
	BOOL _firedAdStatusEvent;
	BOOL _didInstallCreativeView;
	BOOL _hasImpressed;
	BOOL _adLibManagedVideo;
	BOOL _prerollVideo;
	BOOL _visibilityCheckScheduled;
	BOOL _adRequestMade;
	BOOL _shouldMonitorVisibility;
	BOOL _serviceAdSpaceRequestInProgress;
	BOOL _shouldPresentActionViewControllerWhenReady;
	BOOL _actionViewControllerReadyForPresentation;
	BOOL _actionViewControllerWantsDismissal;
	BOOL _fastVisibilityContextIsFeed;
	BOOL _shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;
	BOOL _privacyRequestInProgress;
	BOOL _actionInProgress;
	float _lastPlayTime;
	float _lastVolume;
	float _totalDuration;
	float _visibilityPercentage;
	int _videoPlayCount;
	id<ADAdRecipient> _recipient;
	NSString* _identifier;
	NSURL* _serverURL;
	NSString* _advertisingSection;
	ADSInternalSize* _containerSize;
	ADSInternalSize* _reorientedContainerSize;
	NSString* _authenticationUserName;
	ADContext* _context;
	ADAdImpressionPublicAttributes* _currentAdImpressionPublicAttributes;
	ADAdActionPublicAttributes* _currentActionPublicAttributes;
	unsigned long long _reUseCount;
	ADMRAIDAction* _mraidAction;
	long long _visibility;
	long long _requestOrientation;
	double _lastSlowCheck;
	ADCreativeController* _creativeController;
	ADWebViewActionViewController* _webViewActionViewController;
	UIViewController* _customActionViewController;
	long long _progressMileStoneMet;
	NSArray* _prerollVideoAssets;
	NewsTransparencyViewController* _newsViewController;
	CGRect _selectedAdFrame;

}

@property (assign,nonatomic,__weak) id<ADAdRecipient> recipient;                                                          //@synthesize recipient=_recipient - In the implementation block
@property (assign,nonatomic) long long visibility;                                                                        //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) BOOL visibilityCheckScheduled;                                                               //@synthesize visibilityCheckScheduled=_visibilityCheckScheduled - In the implementation block
@property (assign,nonatomic) BOOL adRequestMade;                                                                          //@synthesize adRequestMade=_adRequestMade - In the implementation block
@property (assign,nonatomic) long long requestOrientation;                                                                //@synthesize requestOrientation=_requestOrientation - In the implementation block
@property (assign,nonatomic) BOOL shouldMonitorVisibility;                                                                //@synthesize shouldMonitorVisibility=_shouldMonitorVisibility - In the implementation block
@property (assign,nonatomic) double lastSlowCheck;                                                                        //@synthesize lastSlowCheck=_lastSlowCheck - In the implementation block
@property (nonatomic,retain) ADCreativeController * creativeController;                                                   //@synthesize creativeController=_creativeController - In the implementation block
@property (assign,nonatomic) BOOL serviceAdSpaceRequestInProgress;                                                        //@synthesize serviceAdSpaceRequestInProgress=_serviceAdSpaceRequestInProgress - In the implementation block
@property (nonatomic,retain) ADAdImpressionPublicAttributes * currentAdImpressionPublicAttributes;                        //@synthesize currentAdImpressionPublicAttributes=_currentAdImpressionPublicAttributes - In the implementation block
@property (nonatomic,retain) ADAdActionPublicAttributes * currentActionPublicAttributes;                                  //@synthesize currentActionPublicAttributes=_currentActionPublicAttributes - In the implementation block
@property (nonatomic,retain) ADWebViewActionViewController * webViewActionViewController;                                 //@synthesize webViewActionViewController=_webViewActionViewController - In the implementation block
@property (nonatomic,retain) UIViewController * customActionViewController;                                               //@synthesize customActionViewController=_customActionViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentActionViewControllerWhenReady;                                             //@synthesize shouldPresentActionViewControllerWhenReady=_shouldPresentActionViewControllerWhenReady - In the implementation block
@property (assign,nonatomic) BOOL actionViewControllerReadyForPresentation;                                               //@synthesize actionViewControllerReadyForPresentation=_actionViewControllerReadyForPresentation - In the implementation block
@property (assign,nonatomic) BOOL actionViewControllerWantsDismissal;                                                     //@synthesize actionViewControllerWantsDismissal=_actionViewControllerWantsDismissal - In the implementation block
@property (nonatomic,readonly) NSString * connectionAssertionIdentifier; 
@property (assign,nonatomic) BOOL fastVisibilityContextIsFeed;                                                            //@synthesize fastVisibilityContextIsFeed=_fastVisibilityContextIsFeed - In the implementation block
@property (assign,nonatomic) BOOL shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;              //@synthesize shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController=_shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController - In the implementation block
@property (assign,nonatomic) BOOL didInstallCreativeView;                                                                 //@synthesize didInstallCreativeView=_didInstallCreativeView - In the implementation block
@property (assign,nonatomic) float visibilityPercentage;                                                                  //@synthesize visibilityPercentage=_visibilityPercentage - In the implementation block
@property (assign,nonatomic) int videoPlayCount;                                                                          //@synthesize videoPlayCount=_videoPlayCount - In the implementation block
@property (assign,nonatomic) long long progressMileStoneMet;                                                              //@synthesize progressMileStoneMet=_progressMileStoneMet - In the implementation block
@property (nonatomic,retain) NSArray * prerollVideoAssets;                                                                //@synthesize prerollVideoAssets=_prerollVideoAssets - In the implementation block
@property (nonatomic,retain) NewsTransparencyViewController * newsViewController;                                         //@synthesize newsViewController=_newsViewController - In the implementation block
@property (assign,nonatomic) BOOL privacyRequestInProgress;                                                               //@synthesize privacyRequestInProgress=_privacyRequestInProgress - In the implementation block
@property (assign,nonatomic) BOOL actionInProgress;                                                                       //@synthesize actionInProgress=_actionInProgress - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                                                                             //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,copy) NSString * advertisingSection;                                                                 //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (nonatomic,retain) ADSInternalSize * containerSize;                                                             //@synthesize containerSize=_containerSize - In the implementation block
@property (nonatomic,retain) ADSInternalSize * reorientedContainerSize;                                                   //@synthesize reorientedContainerSize=_reorientedContainerSize - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;                                                             //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) ADContext * context;                                                                           //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) ADAdSpaceConfiguration * configuration; 
@property (assign,nonatomic) BOOL requiresFastVisibiltyTestOnly;                                                          //@synthesize requiresFastVisibiltyTestOnly=_requiresFastVisibiltyTestOnly - In the implementation block
@property (assign,nonatomic) BOOL firedAdStatusEvent;                                                                     //@synthesize firedAdStatusEvent=_firedAdStatusEvent - In the implementation block
@property (assign,nonatomic) CGRect selectedAdFrame;                                                                      //@synthesize selectedAdFrame=_selectedAdFrame - In the implementation block
@property (assign,nonatomic) BOOL hasImpressed;                                                                           //@synthesize hasImpressed=_hasImpressed - In the implementation block
@property (assign,nonatomic) unsigned long long reUseCount;                                                               //@synthesize reUseCount=_reUseCount - In the implementation block
@property (nonatomic,retain) ADMRAIDAction * mraidAction;                                                                 //@synthesize mraidAction=_mraidAction - In the implementation block
@property (assign,nonatomic) float lastPlayTime;                                                                          //@synthesize lastPlayTime=_lastPlayTime - In the implementation block
@property (assign,nonatomic) float lastVolume;                                                                            //@synthesize lastVolume=_lastVolume - In the implementation block
@property (assign,nonatomic) float totalDuration;                                                                         //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) BOOL adLibManagedVideo;                                                                      //@synthesize adLibManagedVideo=_adLibManagedVideo - In the implementation block
@property (assign,nonatomic) BOOL prerollVideo;                                                                           //@synthesize prerollVideo=_prerollVideo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ADIdentifierNameForCreativeType:(int)arg1 ;
-(float)totalDuration;
-(void)setContainerSize:(ADSInternalSize *)arg1 ;
-(void)startVisibilityMonitoring;
-(void)cancelBannerViewAction;
-(void)setRecipient:(id<ADAdRecipient>)arg1 ;
-(BOOL)adRequestMade;
-(void)setPrerollVideo:(BOOL)arg1 ;
-(void)setLastPlayTime:(float)arg1 ;
-(void)proceedWithClosing:(BOOL)arg1 ;
-(BOOL)shouldPresentActionViewControllerWhenReady;
-(BOOL)isInternalDeepLinkURL:(id)arg1 ;
-(void)_presentPrivacyViewController;
-(void)creativeControllerVideoTapped:(float)arg1 volume:(float)arg2 ;
-(void)setRequiresFastVisibiltyTestOnly:(BOOL)arg1 ;
-(void)setServerURL:(NSURL *)arg1 ;
-(BOOL)privacyRequestInProgress;
-(void)newsTransparencyViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(long long)visibility;
-(void)creativeControllerVideoVolumeChanged:(float)arg1 playTime:(float)arg2 ;
-(void)setVisibilityPercentage:(float)arg1 ;
-(void)setShouldPresentActionViewControllerWhenReady:(BOOL)arg1 ;
-(BOOL)hasImpressed;
-(void)setVideoPlayCount:(int)arg1 ;
-(void)creativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvoked;
-(float)lastVolume;
-(float)visibilityPercentage;
-(void)_closeConnectionIfNecessary;
-(void)captureEvent:(id)arg1 forAd:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)requiresFastVisibiltyTestOnly;
-(void)_handleMRAIDActionPresentation;
-(void)_remote_dismissViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRequestOrientation:(long long)arg1 ;
-(double)lastSlowCheck;
-(void)setCreativeController:(ADCreativeController *)arg1 ;
-(BOOL)didInstallCreativeView;
-(ADMRAIDAction *)mraidAction;
-(BOOL)actionViewControllerWantsDismissal;
-(void)close;
-(long long)progressMileStoneMet;
-(void)creativeControllerViewDidRequestCreateCalendarEvent:(id)arg1 withTapLocation:(CGPoint)arg2 ;
-(void)creativeControllerVideoMuted:(float)arg1 ;
-(void)setActionInProgress:(BOOL)arg1 ;
-(void)creativeControllerVideoMoreInfoTapped:(float)arg1 volume:(float)arg2 ;
-(void)uninstallCreativeView;
-(void)_remote_actionViewControllerReadyForPresentation;
-(BOOL)actionInProgress;
-(float)lastPlayTime;
-(long long)modalPresentationStyle;
-(CGRect)selectedAdFrame;
-(void)setVisibility:(long long)arg1 ;
-(void)setAdLibManagedVideo:(BOOL)arg1 ;
-(void)determineActionForTapAtLocation:(CGPoint)arg1 inFrame:(CGRect)arg2 withMRAIDAction:(id)arg3 completeHandler:(/*^block*/id)arg4 ;
-(void)setShouldMonitorVisibility:(BOOL)arg1 ;
-(ADAdActionPublicAttributes *)currentActionPublicAttributes;
-(CGSize)currentAdSizeForContainerSize:(CGSize)arg1 ;
-(void)creativeControllerViewDidRequestExpandURL:(id)arg1 withMaximumSize:(CGSize)arg2 withTapLocation:(CGPoint)arg3 ;
-(void)creativeControllerViewDidRequestOpenURL:(id)arg1 withTapLocation:(CGPoint)arg2 ;
-(ADSInternalSize *)reorientedContainerSize;
-(ADContext *)context;
-(UIViewController *)customActionViewController;
-(void)setTotalDuration:(float)arg1 ;
-(void)_clientApplicationDidBecomeActive;
-(BOOL)shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;
-(void)setLastVolume:(float)arg1 ;
-(void)_remote_creativeDidFailWithError:(id)arg1 ;
-(NSString *)connectionAssertionIdentifier;
-(ADSInternalSize *)containerSize;
-(void)creativeControllerVideoPaused:(float)arg1 volume:(float)arg2 ;
-(NSURL *)serverURL;
-(NSArray *)prerollVideoAssets;
-(void)creativeControllerVideoProgressed:(float)arg1 volume:(float)arg2 ;
-(void)setPrerollVideoAssets:(NSArray *)arg1 ;
-(void)setAdRequestMade:(BOOL)arg1 ;
-(void)executeBannerViewActionFrom:(CGRect)arg1 withTapLocation:(CGPoint)arg2 ;
-(void)dismissWebViewActionViewControlller:(id)arg1 ;
-(void)_tearDownCustomActionViewController;
-(ADAdImpressionPublicAttributes *)currentAdImpressionPublicAttributes;
-(void)setCurrentAdImpressionPublicAttributes:(ADAdImpressionPublicAttributes *)arg1 ;
-(void)_remote_resumeBannerMedia;
-(NSString *)description;
-(void)setProgressMileStoneMet:(long long)arg1 ;
-(void)captureUnloadEventForAd:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldMonitorVisibility;
-(ADAdSpaceConfiguration *)configuration;
-(void)setHasImpressed:(BOOL)arg1 ;
-(void)_considerPresentingWebViewActionViewControllerWithURL:(id)arg1 ;
-(void)newsTransparencyViewControllerDidLinkOut:(id)arg1 ;
-(id)_videoAssetsForVideoURL:(id)arg1 ;
-(void)setCurrentActionPublicAttributes:(ADAdActionPublicAttributes *)arg1 ;
-(void)_tearDownWebActionViewController;
-(BOOL)canReuseForContext:(id)arg1 ;
-(void)installCreativeView;
-(void)setVisibilityCheckScheduled:(BOOL)arg1 ;
-(void)creativeControllerVideoCreativeViewLoaded;
-(void)captureEvent:(id)arg1 forAd:(id)arg2 forVideoState:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)openURL:(id)arg1 fromFrame:(id)arg2 tapLocation:(id)arg3 ;
-(BOOL)adLibManagedVideo;
-(void)setReorientedContainerSize:(ADSInternalSize *)arg1 ;
-(void)beginActionFromFrame:(id)arg1 tapLocation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)internalAdTypeDidChange;
-(void)_clientApplicationDidEnterBackground;
-(void)dismissCustomActionViewController;
-(void)setActionViewControllerWantsDismissal:(BOOL)arg1 ;
-(NSString *)advertisingSection;
-(void)setServiceAdSpaceRequestInProgress:(BOOL)arg1 ;
-(NSString *)authenticationUserName;
-(void)creativeControllerVideoCompletedWithVolume:(float)arg1 ;
-(void)setPrivacyRequestInProgress:(BOOL)arg1 ;
-(void)_tearDownCreativeController;
-(void)creativeControllerVideoUnmuted:(float)arg1 volume:(float)arg2 ;
-(long long)requestOrientation;
-(BOOL)actionViewControllerReadyForPresentation;
-(id)_updateIdentifier;
-(void)setWebViewActionViewController:(ADWebViewActionViewController *)arg1 ;
-(void)creativeControllerVideoResumedPlaying:(float)arg1 volume:(float)arg2 ;
-(void)useSafariViewControllerToOpenURL:(id)arg1 ;
-(void)webViewActionViewControllerHomeButtonWasTapped:(id)arg1 ;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(void)refuseBannerViewAction;
-(id<ADAdRecipient>)recipient;
-(void)stopVisibilityMonitoring;
-(id)initForRecipient:(id)arg1 ;
-(void)updateCreativeControllerVisibility;
-(void)openURL:(id)arg1 ;
-(void)_notifiyCreativeControllerOfActionViewControllerPresentation;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)creativeControllerVideoSkipAdTapped:(float)arg1 volume:(float)arg2 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)serviceAdSpaceRequestInProgress;
-(void)updateVisibility;
-(void)newsTransparencyViewControllerDidDismiss:(id)arg1 ;
-(void)setFiredAdStatusEvent:(BOOL)arg1 ;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(void)_remote_pauseBannerMedia;
-(void)setSelectedAdFrame:(CGRect)arg1 ;
-(void)presentActionViewController:(id)arg1 ;
-(void)setCustomActionViewController:(UIViewController *)arg1 ;
-(BOOL)fastVisibilityContextIsFeed;
-(void)creativeControllerNavigationAttemptBlockedDueToAccidentalTap;
-(void)creativeControllerVideoExitFullScreenTapped:(float)arg1 volume:(float)arg2 ;
-(void)impressionPublicAttributesDidLoad:(id)arg1 ;
-(unsigned long long)reUseCount;
-(void)creativeControllerVideoViewabilityChanged:(BOOL)arg1 playTime:(float)arg2 volume:(float)arg3 ;
-(void)_openURLInBrowser:(id)arg1 ;
-(void)setFastVisibilityContextIsFeed:(BOOL)arg1 ;
-(BOOL)visibilityCheckScheduled;
-(BOOL)firedAdStatusEvent;
-(void)reportNativeClickEvent;
-(void)creativeControllerViewDidRequestCloseWithTapLocation:(CGPoint)arg1 ;
-(void)newsTransparencyViewControllerDidLoad:(id)arg1 ;
-(int)videoPlayCount;
-(void)setMraidAction:(ADMRAIDAction *)arg1 ;
-(BOOL)prerollVideo;
-(void)newsTransparencyViewControllerDidRenderView:(id)arg1 ;
-(void)setDidInstallCreativeView:(BOOL)arg1 ;
-(ADWebViewActionViewController *)webViewActionViewController;
-(void)setShouldTearDownCreativeControllerAfterDismissingRemoteActionViewController:(BOOL)arg1 ;
-(void)creativeControllerVideoStartedPlaying:(float)arg1 volume:(float)arg2 ;
-(void)setNewsViewController:(NewsTransparencyViewController *)arg1 ;
-(void)_remote_openURL:(id)arg1 ;
-(void)_remote_close;
-(void)showAdTransparency;
-(void)setReUseCount:(unsigned long long)arg1 ;
-(void)_considerPresentingActionViewController;
-(void)creativeControllerVideoFullScreenTapped:(float)arg1 volume:(float)arg2 ;
-(NewsTransparencyViewController *)newsViewController;
-(void)setActionViewControllerReadyForPresentation:(BOOL)arg1 ;
-(void)actionCompletedWithSystemEvent:(int)arg1 ;
-(void)dealloc;
-(void)_requestAdFromAdServingDaemon;
-(ADCreativeController *)creativeController;
-(void)setLastSlowCheck:(double)arg1 ;
-(void)setContext:(ADContext *)arg1 ;
@end

