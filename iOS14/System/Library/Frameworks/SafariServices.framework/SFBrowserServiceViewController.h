/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFBrowserContentViewController.h>
#import <libobjc.A.dylib/_SFActivityDelegate.h>
#import <libobjc.A.dylib/_SFLinkPreviewHeaderDelegate.h>
#import <libobjc.A.dylib/SFServiceViewControllerProtocol.h>

@class _SFWebViewUsageMonitor, NSDate, WKProcessPool, SFBrowserPersonaAnalyticsHelper, NSTimer, SFSystemAlert, NSString;

@interface SFBrowserServiceViewController : _SFBrowserContentViewController <_SFActivityDelegate, _SFLinkPreviewHeaderDelegate, SFServiceViewControllerProtocol> {

	/*^block*/id _activityViewControllerInfoFetchCompletionHandler;
	_SFWebViewUsageMonitor* _usageMonitor;
	NSDate* _lastHostApplicationSuspendDate;
	WKProcessPool* _processPool;
	BOOL _usingSharedProcessPool;
	BOOL _canNotifyHostApplicationOfRedirects;
	BOOL _touchEventsShouldStopRedirectNotifications;
	BOOL _isExpectingClientRedirect;
	BOOL _hasBegunFirstNavigation;
	BOOL _hasConnectedToHostApplication;
	SFBrowserPersonaAnalyticsHelper* _cachedAnalyticsHelper;
	NSTimer* _redirectNotificationTimer;
	BOOL _hostApplicationIsForeground;
	BOOL _isUsedForAuthentication;
	SFSystemAlert* _webAuthenticationDataSharingConfirmation;
	NSString* _hostApplicationCallbackURLScheme;

}

@property (nonatomic,retain) SFSystemAlert * webAuthenticationDataSharingConfirmation;              //@synthesize webAuthenticationDataSharingConfirmation=_webAuthenticationDataSharingConfirmation - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationCallbackURLScheme;                             //@synthesize hostApplicationCallbackURLScheme=_hostApplicationCallbackURLScheme - In the implementation block
@property (assign,nonatomic) BOOL _isUsedForAuthentication;                                         //@synthesize isUsedForAuthentication=_isUsedForAuthentication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)startResolveRedirectionForURL:(id)arg1 ;
-(void)setPreferredBarTintColor:(id)arg1 controlTintColor:(id)arg2 ;
-(void)repostNotificationInViewService:(id)arg1 ;
-(void)didFetchCustomActivities:(id)arg1 excludedActivityTypes:(id)arg2 ;
-(void)setIsRunningTransitionAnimation:(BOOL)arg1 ;
-(void)didRequestShowLinkPreviews:(BOOL)arg1 ;
-(void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(BOOL)arg2 ;
-(void)_closeDatabasesOnBackgroundingOrDismissal;
-(id)_analyticsHelper;
-(void)_updateRemoteSwipeGestureState;
-(void)didDetectRemoteViewControllerViewIsHidden;
-(void)didDetectUserInteractionFromHostApp;
-(void)openCurrentURLInSafariFromPreviewAction;
-(void)updateScrollViewIndicatorVerticalInsets:(UIEdgeInsets)arg1 horizontalInsets:(UIEdgeInsets)arg2 ;
-(void)_willAppearInRemoteViewController;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(id)processPool;
-(void)_dismiss;
-(id)processPoolConfiguration;
-(id)_websiteDataStoreURLForHSTSStorage:(BOOL)arg1 ;
-(void)set_isUsedForAuthentication:(BOOL)arg1 ;
-(void)setHostApplicationCallbackURLScheme:(NSString *)arg1 ;
-(void)setWebAuthenticationDataSharingConfirmation:(SFSystemAlert *)arg1 ;
-(void)_openCurrentURLInSafari;
-(id)_webDataStoreRootURLForHSTSStorage:(BOOL)arg1 ;
-(BOOL)_ensureWebsiteDataStoreURL:(id)arg1 cookieStoreURL:(id)arg2 ;
-(BOOL)_isUsedForAuthentication;
-(BOOL)_redirectToHostAppWithExpectedCallbackSchemeIfPossible:(id)arg1 ;
-(id)_applicationPayloadForOpeningInSafari;
-(void)webViewController:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2 ;
-(void)webViewControllerDidCancelClientRedirect:(id)arg1 ;
-(void)webViewController:(id)arg1 willPerformClientRedirectToURL:(id)arg2 withDelay:(double)arg3 ;
-(void)webViewController:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webViewController:(id)arg1 didFinishDocumentLoadForNavigation:(id)arg2 ;
-(void)webViewController:(id)arg1 didChangeFullScreen:(BOOL)arg2 ;
-(void)webViewControllerWebProcessDidCrash:(id)arg1 ;
-(void)safariActivity:(id)arg1 didFinish:(BOOL)arg2 ;
-(void)_didResolveDestinationURL:(id)arg1 pendingAppLinkCheck:(BOOL)arg2 ;
-(void)_getSafariDataSharingModeWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_notifyInitialLoadDidFinish:(BOOL)arg1 ;
-(BOOL)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2 ;
-(void)_didLoadWebView;
-(void)_recordHostAppIdAndURLForTapToRadar:(id)arg1 ;
-(id)bundleIdentifierForProfileInstallation;
-(id)_hostAppBundleId;
-(BOOL)_shouldReloadImmediatelyAfterPageLoadError;
-(unsigned long long)_persona;
-(void)setDismissButtonStyle:(long long)arg1 ;
-(id)websiteDataStoreConfiguration;
-(void)decideCookieSharingForURL:(id)arg1 callbackURLScheme:(id)arg2 ;
-(SFSystemAlert *)webAuthenticationDataSharingConfirmation;
-(NSString *)hostApplicationCallbackURLScheme;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDisplayMode:(long long)arg1 ;
-(void)browserViewDidReceiveTouchEvent:(id)arg1 ;
-(void)loadURL:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

