/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFBrowserViewDelegate.h>
#import <libobjc.A.dylib/SFReaderEnabledWebViewControllerDelegate.h>
#import <libobjc.A.dylib/SFReaderViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFAppleConnectExtensionUIDelegate.h>
#import <libobjc.A.dylib/_SFBarManagerDelegate.h>
#import <libobjc.A.dylib/_SFDownloadDelegate.h>
#import <libobjc.A.dylib/_SFDynamicBarAnimatorDelegate.h>
#import <libobjc.A.dylib/_SFFindOnPageViewDelegate.h>
#import <libobjc.A.dylib/_SFMailContentProviderDataSource.h>
#import <libobjc.A.dylib/_SFNavigationBarDelegate.h>
#import <libobjc.A.dylib/_SFPageLoadErrorControllerDelegate.h>
#import <libobjc.A.dylib/_SFPrintControllerDelegate.h>
#import <libobjc.A.dylib/_SFSingleBookmarkNavigationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WBSFluidProgressControllerWindowDelegate.h>
#import <libobjc.A.dylib/WBSFluidProgressStateSource.h>
#import <libobjc.A.dylib/WBSDigitalHealthManagerDelegate.h>
#import <libobjc.A.dylib/PKAddPassesViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFLinkPreviewHandler.h>
#import <libobjc.A.dylib/_SFActivityItemCustomizationDelegate.h>
#import <libobjc.A.dylib/_SFActivityViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFQuickLookDocumentSource.h>
#import <libobjc.A.dylib/_SFSaveToFilesOperationDelegate.h>
#import <libobjc.A.dylib/_SFBrowserContentController.h>
#import <libobjc.A.dylib/_SFBrowserDocument.h>
#import <libobjc.A.dylib/_SFBrowserKeyCommandSafariViewControllerMethods.h>

@protocol _SFBrowserContentViewControllerDelegate;
@class _SFPerSitePreferencesVendor, _SFPageZoomPreferenceManager, _SFWebView, _SFReloadOptionsController, NSURL, WBSDigitalHealthManager, _SFDigitalHealthViewController, _SFBrowserView, SFReaderViewController, WKBackForwardListItem, _SFNavigationBar, _SFToolbar, _SFMailContentProvider, _WKUserInitiatedAction, _SFBarManager, SFNanoDomainContainerView, NSTimer, _SFDynamicBarAnimator, _SFNavigationBarItem, WBSURLSpoofingMitigator, WBSFluidProgressState, WBSFluidProgressController, _SFFluidProgressView, UITapGestureRecognizer, _SFPageLoadErrorController, _SFCalendarEventDetector, _SFDownload, NSString, _SFSafariSharingExtensionController, _SFTelephonyNavigationMitigationPolicy, _SFPrintController, _SFSecIdentityPreferencesController, SFReaderEnabledWebViewController, _SFAppleConnectExtensionPageController, _SFQuickLookDocument, _SFQuickLookDocumentController, _SFQuickLookDocumentWriter, _SFSaveToFilesOperation, _SFActivityViewController, _SFPageFormatMenuController, UIPanGestureRecognizer, NSError, _SFFindOnPageView, WKPreferences, NSArray, _WKActivatedElementInfo, UIColor, SFSafariViewControllerConfiguration, SFBrowserPersonaAnalyticsHelper, _SFNavigationUtilitiesManager, WKWebView;

@interface _SFBrowserContentViewController : UIViewController <SFBrowserViewDelegate, SFReaderEnabledWebViewControllerDelegate, SFReaderViewControllerDelegate, _SFAppleConnectExtensionUIDelegate, _SFBarManagerDelegate, _SFDownloadDelegate, _SFDynamicBarAnimatorDelegate, _SFFindOnPageViewDelegate, _SFMailContentProviderDataSource, _SFNavigationBarDelegate, _SFPageLoadErrorControllerDelegate, _SFPrintControllerDelegate, _SFSingleBookmarkNavigationControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, WBSFluidProgressControllerWindowDelegate, WBSFluidProgressStateSource, WBSDigitalHealthManagerDelegate, PKAddPassesViewControllerDelegate, _SFLinkPreviewHandler, _SFActivityItemCustomizationDelegate, _SFActivityViewControllerDelegate, _SFQuickLookDocumentSource, _SFSaveToFilesOperationDelegate, _SFBrowserContentController, _SFBrowserDocument, _SFBrowserKeyCommandSafariViewControllerMethods> {

	WBSDigitalHealthManager* _cachedDigitalHealthManager;
	_SFDigitalHealthViewController* _digitalHealthViewController;
	NSURL* _currentUsageTrackingURL;
	_SFBrowserView* _browserView;
	SFReaderViewController* _readerViewController;
	BOOL _showingReader;
	WKBackForwardListItem* _lastBackFowardListItemOnWhichReaderWasActivated;
	unsigned long long _lastReaderDeactivationMode;
	_SFNavigationBar* _navigationBar;
	_SFToolbar* _bottomToolbar;
	_SFMailContentProvider* _cachedMailContentProvider;
	_WKUserInitiatedAction* _lastUserInitiatedAction;
	BOOL _canOpenDownloadForInitialLoad;
	unsigned long long _externalAppRedirectState;
	_SFBarManager* _barManager;
	SFNanoDomainContainerView* _nanoDomainContainerView;
	NSTimer* _updateContinuityTimer;
	_SFDynamicBarAnimator* _dynamicBarAnimator;
	BOOL _scrollViewIsDragging;
	unsigned long long _cachedMediaCaptureDeviceIcon;
	_SFNavigationBarItem* _navigationBarItem;
	WBSURLSpoofingMitigator* _URLSpoofingMitigator;
	WBSFluidProgressState* _fluidProgressState;
	WBSFluidProgressController* _fluidProgressController;
	_SFFluidProgressView* _cachedFluidProgressView;
	UITapGestureRecognizer* _showBarsFromBottomBarRecognizer;
	BOOL _pageScrollsWithBottomBar;
	BOOL _interfaceFillsScreen;
	BOOL _usesNarrowLayout;
	_SFPageLoadErrorController* _pageLoadErrorController;
	_SFCalendarEventDetector* _calendarEventDetector;
	_SFDownload* _activeDownload;
	BOOL _showingCrashBanner;
	double _crashBannerDraggingOffset;
	BOOL _shouldDismissReaderInReponseToSameDocumentNavigation;
	BOOL _EVOrganizationNameIsValid;
	NSString* _EVOrganizationName;
	BOOL _isShowingHTTPAuthenticationDialog;
	BOOL _isSuppressingPreviewProgressAnimation;
	_SFSafariSharingExtensionController* _sharingExtensionController;
	BOOL _didReceivePolicyForInitialLoad;
	long long _customPreferredStatusBarStyle;
	BOOL _isDisplayingTelephonyPrompt;
	_SFTelephonyNavigationMitigationPolicy* _telephonyNavigationPolicy;
	_SFPrintController* _printController;
	_SFSecIdentityPreferencesController* _secIdentityPreferencesController;
	_SFPerSitePreferencesVendor* _perSitePreferencesVendor;
	BOOL _wasLoadedWithContentBlockersEnabled;
	NSURL* _urlToReloadForcingContentBlockers;
	BOOL _enableContentBlockersWhenReloading;
	SFReaderEnabledWebViewController* _ownerWebViewController;
	UIEdgeInsets _verticalScrollIndicatorBaseInsets;
	UIEdgeInsets _horizontalScrollIndicatorBaseInsets;
	_SFAppleConnectExtensionPageController* _appleConnectPageController;
	BOOL _autoHidingHomeIndicatorPermitted;
	BOOL _prefersHomeIndicatorAutoHidden;
	BOOL _shouldAutoHideHomeIndicator;
	NSURL* _originalRequestURL;
	_SFQuickLookDocument* _quickLookDocument;
	_SFQuickLookDocumentController* _quickLookDocumentController;
	_SFQuickLookDocumentWriter* _quickLookDocumentWriter;
	_SFDownload* _downloadToShowInQuickLook;
	BOOL _quickLookDocumentCheckCompleted;
	_SFSaveToFilesOperation* _saveToFilesOperation;
	_SFActivityViewController* _activityViewController;
	_SFPageFormatMenuController* _pageFormatMenuController;
	BOOL _keepBarsMinimized;
	UIPanGestureRecognizer* _hideNavigationBarGestureRecognizer;
	NSError* _lastLoadErrorForFormatMenu;
	BOOL _loadWasUserDriven;
	BOOL _webViewIsInFullScreen;
	/*^block*/id _pendingNavigationActionDueToExternalSchemePromptHandler;
	BOOL _gestureRequiresGoingBackToOwnerWebView;
	BOOL _remoteSwipeGestureEnabled;
	BOOL _webViewLayoutUnderlapsStatusBar;
	BOOL _didNotifyInitialLoadFinish;
	BOOL _viewDidAppearInHostApp;
	id<_SFBrowserContentViewControllerDelegate> _delegate;
	long long _displayMode;
	_SFReloadOptionsController* _reloadOptionsController;
	_SFFindOnPageView* _findOnPageView;
	SFReaderEnabledWebViewController* _webViewController;
	WKPreferences* _wkPreferences;
	NSArray* _linkActions;
	_WKActivatedElementInfo* _activatedElementInfo;
	UIColor* _preferredBarTintColor;
	UIColor* _preferredControlTintColor;
	long long _hostAppModalPresentationStyle;
	long long _dismissButtonStyle;
	SFSafariViewControllerConfiguration* _configuration;
	NSString* _bundleIdentifierForProfileInstallation;
	unsigned long long __persona;
	SFBrowserPersonaAnalyticsHelper* __analyticsHelper;
	long long _safariDataSharingMode;
	_SFNavigationUtilitiesManager* __navigationUtilitiesManager;

}

@property (nonatomic,readonly) _SFBrowserView * browserView; 
@property (nonatomic,readonly) SFReaderEnabledWebViewController * rootWebViewController; 
@property (nonatomic,retain) SFReaderEnabledWebViewController * webViewController;                     //@synthesize webViewController=_webViewController - In the implementation block
@property (nonatomic,readonly) WKPreferences * wkPreferences;                                          //@synthesize wkPreferences=_wkPreferences - In the implementation block
@property (nonatomic,copy) NSArray * linkActions;                                                      //@synthesize linkActions=_linkActions - In the implementation block
@property (nonatomic,retain) _WKActivatedElementInfo * activatedElementInfo;                           //@synthesize activatedElementInfo=_activatedElementInfo - In the implementation block
@property (assign,nonatomic) BOOL remoteSwipeGestureEnabled;                                           //@synthesize remoteSwipeGestureEnabled=_remoteSwipeGestureEnabled - In the implementation block
@property (nonatomic,retain) UIColor * preferredBarTintColor;                                          //@synthesize preferredBarTintColor=_preferredBarTintColor - In the implementation block
@property (nonatomic,retain) UIColor * preferredControlTintColor;                                      //@synthesize preferredControlTintColor=_preferredControlTintColor - In the implementation block
@property (assign,nonatomic) long long hostAppModalPresentationStyle;                                  //@synthesize hostAppModalPresentationStyle=_hostAppModalPresentationStyle - In the implementation block
@property (assign,nonatomic) long long dismissButtonStyle;                                             //@synthesize dismissButtonStyle=_dismissButtonStyle - In the implementation block
@property (nonatomic,copy) SFSafariViewControllerConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL webViewLayoutUnderlapsStatusBar;                                     //@synthesize webViewLayoutUnderlapsStatusBar=_webViewLayoutUnderlapsStatusBar - In the implementation block
@property (nonatomic,readonly) BOOL canPrint; 
@property (nonatomic,readonly) BOOL isBlockedByScreenTime; 
@property (nonatomic,readonly) NSString * bundleIdentifierForProfileInstallation;                      //@synthesize bundleIdentifierForProfileInstallation=_bundleIdentifierForProfileInstallation - In the implementation block
@property (nonatomic,readonly) BOOL _usesScrollToTopView; 
@property (nonatomic,readonly) BOOL _isUsedForAuthentication; 
@property (nonatomic,readonly) unsigned long long _persona;                                            //@synthesize _persona=__persona - In the implementation block
@property (nonatomic,readonly) SFBrowserPersonaAnalyticsHelper * _analyticsHelper;                     //@synthesize _analyticsHelper=__analyticsHelper - In the implementation block
@property (nonatomic,readonly) NSString * _hostAppBundleId; 
@property (nonatomic,readonly) BOOL _shouldReloadImmediatelyAfterPageLoadError; 
@property (assign,nonatomic) long long safariDataSharingMode;                                          //@synthesize safariDataSharingMode=_safariDataSharingMode - In the implementation block
@property (nonatomic,readonly) BOOL didNotifyInitialLoadFinish;                                        //@synthesize didNotifyInitialLoadFinish=_didNotifyInitialLoadFinish - In the implementation block
@property (nonatomic,readonly) BOOL isShowingErrorPage; 
@property (assign,nonatomic) BOOL viewDidAppearInHostApp;                                              //@synthesize viewDidAppearInHostApp=_viewDidAppearInHostApp - In the implementation block
@property (nonatomic,retain) _SFNavigationUtilitiesManager * _navigationUtilitiesManager;              //@synthesize _navigationUtilitiesManager=__navigationUtilitiesManager - In the implementation block
@property (assign,nonatomic,__weak) id<_SFBrowserContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long displayMode;                                                    //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) _SFReloadOptionsController * reloadOptionsController;                     //@synthesize reloadOptionsController=_reloadOptionsController - In the implementation block
@property (nonatomic,retain) _SFFindOnPageView * findOnPageView;                                       //@synthesize findOnPageView=_findOnPageView - In the implementation block
@property (nonatomic,readonly) WKWebView * webView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<_SFBrowserDocument> activeDocument; 
@property (getter=isShowingReader,nonatomic,readonly) BOOL showingReader; 
@property (assign,nonatomic) BOOL keepBarsMinimized; 
@property (nonatomic,readonly) _SFPerSitePreferencesVendor * perSitePreferencesVendor; 
@property (nonatomic,readonly) _SFPageZoomPreferenceManager * pageZoomManager; 
@property (nonatomic,readonly) _SFWebView * activeWebView; 
@property (nonatomic,readonly) id<SFReaderContext> readerContext; 
@property (nonatomic,readonly) NSURL * URLForPerSitePreferences; 
@property (nonatomic,readonly) BOOL wasLoadedWithContentBlockersEnabled; 
@property (nonatomic,readonly) BOOL canHideToolbar; 
+(void)createDefaultWebsiteDataStore;
-(void)dealloc;
-(id<_SFBrowserContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_SFBrowserContentViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setConfiguration:(SFSafariViewControllerConfiguration *)arg1 ;
-(SFSafariViewControllerConfiguration *)configuration;
-(void)stopLoading;
-(void)downloadDidFinish:(id)arg1 ;
-(void)loadView;
-(WKWebView *)webView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)becomeFirstResponder;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(void)_dismiss;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
-(long long)displayMode;
-(id)keyCommands;
-(BOOL)_isSecure;
-(void)decreaseSize:(id)arg1 ;
-(void)increaseSize:(id)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(_SFBrowserView *)browserView;
-(void)_setWebView:(id)arg1 ;
-(void)setDisplayMode:(long long)arg1 ;
-(double)estimatedProgress;
-(id)processPool;
-(id)websiteDataStore;
-(void)_invalidateEVOrganizationName;
-(id)_EVOrganizationName;
-(void)_updateNavigationBar;
-(void)_updateUI;
-(void)_updateUserActivity;
-(void)_goForward;
-(void)_goBack;
-(id<_SFBrowserDocument>)activeDocument;
-(void)_didLoadWebView;
-(void)setDismissButtonStyle:(long long)arg1 ;
-(unsigned long long)_persona;
-(void)contextMenuConfigurationForReaderViewController:(id)arg1 element:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readerViewController:(id)arg1 contextMenuWillPresentForElement:(id)arg2 ;
-(void)readerViewController:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3 ;
-(void)readerViewController:(id)arg1 contextMenuDidEndForElement:(id)arg2 ;
-(void)pageLoadErrorController:(id)arg1 setAllowsSpecificHTTPSCertificate:(id)arg2 forHost:(id)arg3 ;
-(id)pageLoadErrorControllerGetSecIdentityPreferencesController:(id)arg1 ;
-(BOOL)pageLoadErrorControllerShouldHandleCertificateError:(id)arg1 ;
-(BOOL)pageLoadErrorControllerShouldReloadAfterError:(id)arg1 ;
-(void)pageLoadErrorController:(id)arg1 loadFailedRequestAfterError:(id)arg2 ;
-(void)pageLoadErrorControllerClosePage:(id)arg1 ;
-(BOOL)pageLoadErrorControllerShouldPermanentlyAcceptCertificate:(id)arg1 ;
-(void)pageLoadErrorController:(id)arg1 presentViewController:(id)arg2 ;
-(void)setPreferredControlTintColor:(UIColor *)arg1 ;
-(void)addBookmarkNavController:(id)arg1 didFinishWithResult:(BOOL)arg2 bookmark:(id)arg3 ;
-(BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1 ;
-(id)_currentWebView;
-(BOOL)canPrint;
-(id)dataForQuickLookDocument:(id)arg1 ;
-(id)suggestedFileNameForQuickLookDocument:(id)arg1 ;
-(id)suggestedFileExtensionForQuickLookDocument:(id)arg1 ;
-(void)navigationBar:(id)arg1 didCreateLeadingToolbar:(id)arg2 trailingToolbar:(id)arg3 ;
-(void)navigationBarMetricsDidChange:(id)arg1 ;
-(void)navigationBarReloadButtonWasTapped:(id)arg1 ;
-(void)navigationBarFormatMenuButtonStartedInteraction:(id)arg1 ;
-(void)navigationBarReaderButtonWasTapped:(id)arg1 ;
-(void)navigationBarStopLoadingButtonWasTapped:(id)arg1 ;
-(void)compressedNavigationBarWasTapped:(id)arg1 ;
-(void)navigationBarFormatMenuButtonWasTapped:(id)arg1 ;
-(void)navigationBarMediaCaptureMuteButtonWasTapped:(id)arg1 ;
-(void)navigationBarCancelButtonWasTapped:(id)arg1 ;
-(void)navigationBarDoneButtonWasTapped:(id)arg1 ;
-(unsigned long long)mediaCaptureDeviceIcon;
-(void)navigationBarFormatMenuButtonBecameUnavailable:(id)arg1 ;
-(id)navigationBarURLForSharing:(id)arg1 ;
-(unsigned long long)browserPersonaForActivityViewController:(id)arg1 ;
-(id)quickLookDocument;
-(void)activityViewController:(id)arg1 prepareActivity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)customizationControllerCustomizationsDidChange:(id)arg1 ;
-(id)webViewForCustomizationController:(id)arg1 ;
-(BOOL)isContentObscuredByDigitalHealthForCustomizationController:(id)arg1 ;
-(BOOL)isDisplayingQuickLookDocumentForCustomizationController:(id)arg1 ;
-(BOOL)isReaderAvailableForCustomizationController:(id)arg1 ;
-(NSArray *)linkActions;
-(void)setLinkActions:(NSArray *)arg1 ;
-(_WKActivatedElementInfo *)activatedElementInfo;
-(void)setActivatedElementInfo:(_WKActivatedElementInfo *)arg1 ;
-(BOOL)printControllerPageIsLoading:(id)arg1 ;
-(BOOL)printControllerShouldPrintReader:(id)arg1 ;
-(BOOL)printControllerCanPresentPrintUI:(id)arg1 ;
-(void)printController:(id)arg1 didCreatePrintInfo:(id)arg2 ;
-(id)presentingViewControllerForPrintController:(id)arg1 ;
-(void)navigateBackKeyPressed;
-(void)navigateForwardKeyPressed;
-(void)dismissSFSafariViewControllerKeyPressed;
-(void)reloadKeyPressed;
-(void)cancelKeyPressed;
-(void)findKeyPressed;
-(void)resetPageZoomLevelAndFontSize;
-(void)toggleReaderKeyPressed;
-(void)nextFindResultKeyPressed;
-(void)previousFindResultKeyPressed;
-(void)saveWebpageKeyPressed;
-(void)saveWebpageAlternativeKeyPressed;
-(void)takeFindStringKeyPressed;
-(void)emailCurrentPage;
-(void)reloadFromOriginKeyPressed;
-(UIColor *)preferredBarTintColor;
-(long long)dismissButtonStyle;
-(void)setRemoteSwipeGestureEnabled:(BOOL)arg1 ;
-(void)setPreferredBarTintColor:(UIColor *)arg1 ;
-(void)setHostAppModalPresentationStyle:(long long)arg1 ;
-(void)beginDigitalHealthTracking;
-(void)stopDigitalHealthTracking;
-(void)setWebViewLayoutUnderlapsStatusBar:(BOOL)arg1 ;
-(SFReaderEnabledWebViewController *)webViewController;
-(void)webViewControllerDidChangeLoadingState:(id)arg1 ;
-(void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1 ;
-(_SFNavigationUtilitiesManager *)_navigationUtilitiesManager;
-(void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewController:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webViewControllerDidChangeURL:(id)arg1 ;
-(SFReaderEnabledWebViewController *)rootWebViewController;
-(BOOL)isShowingErrorPage;
-(BOOL)isBlockedByScreenTime;
-(id)websiteDataStoreConfiguration;
-(id)webViewConfiguration;
-(void)setWebViewController:(SFReaderEnabledWebViewController *)arg1 ;
-(id)newProcessPool;
-(void)_initialLoadFinishedWithSuccess:(BOOL)arg1 ;
-(void)_goBackToOwnerWebView;
-(void)setSafariDataSharingMode:(long long)arg1 ;
-(void)setMediaCaptureDeviceIcon:(unsigned long long)arg1 ;
-(BOOL)_usesScrollToTopView;
-(void)visibilityWillChangeForFindOnPageView:(id)arg1 ;
-(id)webViewForFindOnPageView:(id)arg1 ;
-(void)linkPreviewHelper:(id)arg1 commitPreviewViewControllerForAction:(long long)arg2 ;
-(void)linkPreviewHelper:(id)arg1 didProduceNavigationIntent:(id)arg2 forAction:(long long)arg3 ;
-(id)linkPreviewHelper:(id)arg1 previewViewControllerForURL:(id)arg2 ;
-(id)linkPreviewHelper:(id)arg1 resultOfLoadingURL:(id)arg2 ;
-(void)linkPreviewHelper:(id)arg1 redirectToExternalNavigationResult:(id)arg2 ;
-(BOOL)linkPreviewHelper:(id)arg1 supportsAction:(long long)arg2 forURL:(id)arg3 ;
-(void)_invalidateUserActivity;
-(SFBrowserPersonaAnalyticsHelper *)_analyticsHelper;
-(BOOL)viewDidAppearInHostApp;
-(void)setViewDidAppearInHostApp:(BOOL)arg1 ;
-(id)processPoolConfiguration;
-(void)_updateScrollIndicatorVerticalInsets:(UIEdgeInsets)arg1 horizontalInsets:(UIEdgeInsets)arg2 ;
-(void)_didReceiveAllQueuedMessages;
-(void)_setUpWebViewControllerIfNeeded;
-(void)_openCurrentURLInSafari;
-(long long)safariDataSharingMode;
-(BOOL)_isUsedForAuthentication;
-(_SFFindOnPageView *)findOnPageView;
-(BOOL)remoteSwipeGestureEnabled;
-(BOOL)_redirectToHostAppWithExpectedCallbackSchemeIfPossible:(id)arg1 ;
-(void)_showBars;
-(id)_applicationPayloadForOpeningInSafari;
-(void)webViewController:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2 ;
-(void)webViewControllerDidCancelClientRedirect:(id)arg1 ;
-(void)webViewController:(id)arg1 willPerformClientRedirectToURL:(id)arg2 withDelay:(double)arg3 ;
-(void)webViewController:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webViewController:(id)arg1 didFinishDocumentLoadForNavigation:(id)arg2 ;
-(void)webViewController:(id)arg1 didChangeFullScreen:(BOOL)arg2 ;
-(void)webViewControllerWebProcessDidCrash:(id)arg1 ;
-(void)_didResolveDestinationURL:(id)arg1 pendingAppLinkCheck:(BOOL)arg2 ;
-(void)_getSafariDataSharingModeWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateRemoteSwipeGestureState;
-(BOOL)_notifyInitialLoadDidFinish:(BOOL)arg1 ;
-(BOOL)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2 ;
-(void)_recordHostAppIdAndURLForTapToRadar:(id)arg1 ;
-(NSString *)bundleIdentifierForProfileInstallation;
-(NSString *)_hostAppBundleId;
-(BOOL)_shouldReloadImmediatelyAfterPageLoadError;
-(id<SFReaderContext>)readerContext;
-(id)presentingViewControllerForWebViewController:(id)arg1 ;
-(void)webViewControllerDidChangeEstimatedProgress:(id)arg1 ;
-(void)webViewControllerDidChangeHasOnlySecureContent:(id)arg1 ;
-(void)webViewControllerWebProcessDidBecomeResponsive:(id)arg1 ;
-(void)webViewControllerWebProcessDidBecomeUnresponsive:(id)arg1 ;
-(void)webViewController:(id)arg1 didCommitNavigation:(id)arg2 ;
-(void)webViewController:(id)arg1 didSameDocumentNavigation:(id)arg2 ofType:(long long)arg3 ;
-(void)webViewController:(id)arg1 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(long long)arg2 forExtension:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)webViewController:(id)arg1 willEndNavigationGestureToBackForwardListItem:(id)arg2 ;
-(void)webViewController:(id)arg1 didEndNavigationGestureToBackForwardListItem:(id)arg2 ;
-(void)webViewController:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webViewController:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewControllerUpdateNavigationBar:(id)arg1 ;
-(void)webViewController:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)webViewController:(id)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg2 uti:(id)arg3 ;
-(void)webViewController:(id)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(id)arg2 ;
-(unsigned long long)browserPersonaForWebViewController:(id)arg1 ;
-(void)webViewController:(id)arg1 webViewDidClose:(id)arg2 ;
-(void)webViewController:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)webViewController:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)webViewController:(id)arg1 contextMenuWillPresentForElement:(id)arg2 ;
-(void)webViewController:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3 ;
-(void)webViewController:(id)arg1 contextMenuDidEndForElement:(id)arg2 ;
-(void)webViewController:(id)arg1 printFrame:(id)arg2 ;
-(void)webViewControllerDidChangeSafeAreaShouldAffectObscuredInsets:(id)arg1 ;
-(void)webViewController:(id)arg1 mediaCaptureStateDidChange:(unsigned long long)arg2 ;
-(long long)webViewController:(id)arg1 presentationPolicyForDialog:(id)arg2 ;
-(void)webViewControllerWillPresentJavaScriptDialog:(id)arg1 ;
-(void)webViewControllerDidChangeSafeAreaInsets:(id)arg1 ;
-(id)webViewController:(id)arg1 didStartDownload:(id)arg2 ;
-(void)saveToFilesOperation:(id)arg1 presentViewController:(id)arg2 ;
-(void)saveToFilesOperation:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1 ;
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1 ;
-(void)dynamicBarAnimatorStateDidChange:(id)arg1 ;
-(void)dynamicBarAnimatorOutputsDidChange:(id)arg1 ;
-(BOOL)dynamicBarAnimator:(id)arg1 canTransitionToState:(long long)arg2 byDraggingWithOffset:(double)arg3 ;
-(double)dynamicBarAnimator:(id)arg1 minimumTopBarHeightForOffset:(double)arg2 ;
-(BOOL)isShowingReader;
-(void)toggleShowingReaderForUserAction;
-(_SFReloadOptionsController *)reloadOptionsController;
-(void)setKeepBarsMinimized:(BOOL)arg1 ;
-(_SFPageZoomPreferenceManager *)pageZoomManager;
-(_SFPerSitePreferencesVendor *)perSitePreferencesVendor;
-(BOOL)canHideToolbar;
-(BOOL)wasLoadedWithContentBlockersEnabled;
-(void)reloadEnablingContentBlockers:(BOOL)arg1 ;
-(void)perSiteSettingsUIPresentSettings;
-(NSURL *)URLForPerSitePreferences;
-(UIColor *)preferredControlTintColor;
-(void)setReloadOptionsController:(_SFReloadOptionsController *)arg1 ;
-(id)webViewForMailContentProvider:(id)arg1 ;
-(BOOL)readerViewIsVisibleForMailContentProvider:(id)arg1 ;
-(id)readerControllerForMailContentProvider:(id)arg1 ;
-(void)_updateWebKitExperimentalFeatures;
-(void)set_navigationUtilitiesManager:(_SFNavigationUtilitiesManager *)arg1 ;
-(void)_perSiteAutomaticReaderActivationPreferenceDidChange:(id)arg1 ;
-(void)_perSitePageZoomPreferenceDidChange:(id)arg1 ;
-(void)_showBarsFromBottomBarTap:(id)arg1 ;
-(void)_updateTrackerProtectionPreferences;
-(void)_setUpTopBarAndBottomBar;
-(void)_updateStatusBarStyleForced:(BOOL)arg1 ;
-(BOOL)_canShowPageFormatMenu;
-(BOOL)_canSaveWebpage;
-(void)_setUpReloadOptionsControllerIfNeeded;
-(void)_setUpCalendarEventDetectorIfNeeded;
-(void)_setUpFindOnPageViewIfNeeded;
-(void)_setUpAppleConnectPageControllerIfNeeded;
-(void)_setUpToolbar;
-(BOOL)_isPreviewing;
-(void)_setSuppressingPreviewProgressAnimation:(BOOL)arg1 ;
-(void)_layOutBrowserViewForSizeTransition;
-(void)_didCompleteViewSizeTransition;
-(BOOL)isSafariRestricted;
-(BOOL)_dismissTransientUIAnimated:(BOOL)arg1 ;
-(BOOL)_shouldGoBackToOwnerWebView;
-(void)_hideNavigationBarGestureRecognized:(id)arg1 ;
-(void)_updateDynamicBarGeometry;
-(void)_updateBarTheme;
-(void)_cancelPendingUpdateUserActivityTimer;
-(void)_updateInterfaceFillsScreen;
-(void)_updateUsesNarrowLayout;
-(void)_updateScrollToTopView;
-(void)_updateWebViewLayoutSize;
-(void)_updateWebViewShrinkToFit;
-(void)_updateCurrentScrollViewInsets;
-(BOOL)_safeAreaShouldAffectWebViewObscuredInsets;
-(UIEdgeInsets)_effectiveWebViewSafeAreaInsets;
-(BOOL)_isSplitScreen;
-(double)_maximumHeightObscuredByBottomBar;
-(BOOL)_canScrollToTopInView:(id)arg1 ;
-(void)_scrollToTopFromScrollToTopView;
-(void)_updateHomeIndicatorAutoHideState;
-(BOOL)_effectiveBarCollapsingEnabled;
-(double)_offsetForDynamicBarAnimator;
-(void)_setShowingReader:(BOOL)arg1 deactivationMode:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)_readerViewControllerNeedsSetUp;
-(void)_updateUserActivitySoon;
-(void)_setUpReaderViewController;
-(BOOL)isPageEligibileToShowNotSecureWarning;
-(void)didUpdateNavigationBarItem:(id)arg1 ;
-(void)_updateBarItems;
-(void)_updatePreviewLoadingUI;
-(void)_setShowingCrashBanner:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_hideCrashBanner;
-(void)_updateCrashBannerOffset;
-(void)setQuickLookDocumentForCurrentBackForwardListItem:(id)arg1 ;
-(id)quickLookDocumentForCurrentBackForwardListItem;
-(void)_hideReaderAnimated:(BOOL)arg1 deactivationMode:(unsigned long long)arg2 ;
-(void)_updatePageZoomWithPreference;
-(void)_showQuickLookDocumentView;
-(void)_hideQuickLookDocumentView;
-(void)_updateDigitalHealthTracking;
-(void)_showReaderAnimated:(BOOL)arg1 ;
-(id)_committedDomainForPreferences;
-(BOOL)_shouldAllowAutomaticReader;
-(void)_cleanUpAfterRedirectToExternalApp;
-(void)_redirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 promptPolicy:(long long)arg3 isMainFrame:(BOOL)arg4 userAction:(id)arg5 ;
-(void)_completeRedirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 userCancelled:(BOOL)arg3 ;
-(void)_queueAlertForRedirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 isMainFrame:(BOOL)arg3 promptPolicy:(long long)arg4 userAction:(id)arg5 ;
-(id)resultOfLoadingRequest:(id)arg1 inMainFrame:(BOOL)arg2 disallowRedirectToExternalApps:(BOOL)arg3 ;
-(id)_quickLookDocumentForDownload:(id)arg1 ;
-(id)_openNewWebViewIfNeededWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 ;
-(id)_contextMenuConfigurationForWebView:(id)arg1 element:(id)arg2 ;
-(void)_willPresentContextMenu;
-(void)_willCommitContextMenuForWebView:(id)arg1 withAnimator:(id)arg2 ;
-(id)expectedOrCurrentURL;
-(void)updateBottombarOffset:(double)arg1 topBarHeight:(double)arg2 ;
-(double)_crashBannerDraggingOffsetForContentOffset:(CGPoint)arg1 ;
-(void)_reloadFromOrigin:(BOOL)arg1 ;
-(BOOL)_canShowDownloadWithoutPrompting:(id)arg1 ;
-(void)_showDownload:(id)arg1 ;
-(void)_showPassBookControllerForPass:(id)arg1 ;
-(void)_showGenericDownloadAlert;
-(BOOL)_showICSControllerForPath:(id)arg1 sourceURL:(id)arg2 ;
-(id)_itemProviderCollectionForSharingURL:(id)arg1 title:(id)arg2 ;
-(void)_fetchSharingURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_mailContentProvider;
-(void)_updateUserActivityTimerFired;
-(id)handoffURL;
-(void)_presentSaveWebpageViewController;
-(void)_emailCurrentPageWithPreferredContentType:(long long)arg1 ;
-(void)_increasePageZoomSetting;
-(void)_decreasePageZoomSetting;
-(void)_resetPageZoomSetting;
-(BOOL)_personaShouldUseScreenTime;
-(id)_digitalHealthManager;
-(void)_showDigitalHealthOverlay;
-(void)_hideDigitalHealthOverlay;
-(void)_presentActivityViewController;
-(BOOL)_canSaveWebpageForURL:(id)arg1 ;
-(void)webViewControllerDidDetermineReaderAvailability:(id)arg1 dueTo:(long long)arg2 ;
-(void)webViewController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2 ;
-(void)createReaderWebViewForWebViewController:(id)arg1 ;
-(void)appleConnectExtensionPageController:(id)arg1 presentViewController:(id)arg2 ;
-(void)appleConnectExtensionPageController:(id)arg1 dismissViewController:(id)arg2 ;
-(void)barManager:(id)arg1 didReceiveTapForBarItem:(long long)arg2 ;
-(void)downloadDidFail:(id)arg1 ;
-(void)downloadDidStart:(id)arg1 ;
-(void)downloadDidReceiveResponse:(id)arg1 ;
-(id)printControllerForContentProvider:(id)arg1 ;
-(void)fluidProgressRocketAnimationDidComplete;
-(id)currentFluidProgressStateSource;
-(BOOL)createFluidProgressState;
-(void)clearFluidProgressState;
-(id)progressState;
-(BOOL)hasFailedURL;
-(void)policyDidChangeForDigitalHealthManager:(id)arg1 ;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
-(BOOL)keepBarsMinimized;
-(_SFWebView *)activeWebView;
-(void)setFindOnPageView:(_SFFindOnPageView *)arg1 ;
-(WKPreferences *)wkPreferences;
-(long long)hostAppModalPresentationStyle;
-(BOOL)webViewLayoutUnderlapsStatusBar;
-(BOOL)didNotifyInitialLoadFinish;
@end

