/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _canNotifyHostApplicationOfRedirects;
	BOOL _touchEventsShouldStopRedirectNotifications;
	BOOL _isExpectingClientRedirect;
	BOOL _hasBegunFirstNavigation;
	BOOL _hasConnectedToHostApplication;
	SFBrowserPersonaAnalyticsHelper* _cachedAnalyticsHelper;
	NSTimer* _redirectNotificationTimer;
	BOOL _hostApplicationIsForeground;
	SFSystemAlert* _webAuthenticationDataSharingConfirmation;
	NSString* _hostApplicationCallbackURLScheme;

}

@property (nonatomic,retain) SFSystemAlert * webAuthenticationDataSharingConfirmation;              //@synthesize webAuthenticationDataSharingConfirmation=_webAuthenticationDataSharingConfirmation - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationCallbackURLScheme;                             //@synthesize hostApplicationCallbackURLScheme=_hostApplicationCallbackURLScheme - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_dismiss;
-(void)_willAppearInRemoteViewController;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(void)setDisplayMode:(long long)arg1 ;
-(id)processPool;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadURL:(id)arg1 ;
-(void)_didLoadWebView;
-(void)startResolveRedirectionForURL:(id)arg1 ;
-(void)setDismissButtonStyle:(long long)arg1 ;
-(unsigned long long)_persona;
-(void)browserViewDidReceiveTouchEvent:(id)arg1 ;
-(void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(BOOL)arg2 ;
-(void)decideCookieSharingForURL:(id)arg1 callbackURLScheme:(id)arg2 ;
-(void)repostNotificationInViewService:(id)arg1 ;
-(void)didFetchCustomActivities:(id)arg1 excludedActivityTypes:(id)arg2 ;
-(void)setIsRunningTransitionAnimation:(BOOL)arg1 ;
-(void)didDetectRemoteViewControllerViewIsHidden;
-(void)didDetectUserInteractionFromHostApp;
-(void)openCurrentURLInSafari;
-(void)updateScrollViewIndicatorVerticalInsets:(UIEdgeInsets)arg1 horizontalInsets:(UIEdgeInsets)arg2 ;
-(void)didRequestShowLinkPreviews:(BOOL)arg1 ;
-(id)websiteDataStoreConfiguration;
-(void)_closeDatabasesOnBackgroundingOrDismissal;
-(id)_analyticsHelper;
-(id)processPoolConfiguration;
-(id)_websiteDataStoreURL;
-(void)setHostApplicationCallbackURLScheme:(NSString *)arg1 ;
-(void)setWebAuthenticationDataSharingConfirmation:(SFSystemAlert *)arg1 ;
-(id)_webDataStoreRootURL;
-(BOOL)_ensureWebsiteDataStoreURL:(id)arg1 cookieStoreURL:(id)arg2 ;
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
-(void)_updateRemoteSwipeGestureState;
-(BOOL)_notifyInitialLoadDidFinish:(BOOL)arg1 ;
-(BOOL)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2 ;
-(void)_recordHostAppIdAndURLForTapToRadar:(id)arg1 ;
-(id)bundleIdentifierForProfileInstallation;
-(id)_hostAppBundleId;
-(BOOL)_shouldReloadImmediatelyAfterPageLoadError;
-(SFSystemAlert *)webAuthenticationDataSharingConfirmation;
-(NSString *)hostApplicationCallbackURLScheme;
@end

