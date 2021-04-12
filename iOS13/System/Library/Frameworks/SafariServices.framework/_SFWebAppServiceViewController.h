/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SFBrowserServiceViewController.h>
#import <libobjc.A.dylib/SFWebAppServiceViewControllerProtocol.h>
#import <libobjc.A.dylib/_SFMediaRecordingDocument.h>

@class NSString, UIWebClip, UIView, WKProcessPool, WKWebsiteDataStore, NSMutableArray, BKSApplicationStateMonitor, _SFApplicationManifestFetcher, _SFInjectedJavaScriptController, _SFWebClipMetadataFetcher;

@interface _SFWebAppServiceViewController : SFBrowserServiceViewController <SFWebAppServiceViewControllerProtocol, _SFMediaRecordingDocument> {

	UIWebClip* _webClip;
	UIView* _statusBarBackgroundView;
	WKProcessPool* _processPool;
	WKWebsiteDataStore* _websiteDataStore;
	NSMutableArray* _fallbackURLs;
	BKSApplicationStateMonitor* _stateMonitor;
	unsigned _hostState;
	unsigned long long _captureDeviceIconBeforeSuspension;
	_SFApplicationManifestFetcher* _applicationManifestFetcher;
	_SFInjectedJavaScriptController* _activityJSController;
	_SFWebClipMetadataFetcher* _webClipMetadataFetcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canOverrideStatusBar; 
@property (nonatomic,readonly) BOOL audioOnly; 
@property (nonatomic,readonly) NSString * URLString; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(NSString *)URLString;
-(void)viewDidLoad;
-(long long)preferredStatusBarStyle;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)_hostApplicationDidEnterBackground;
-(id)processPool;
-(id)websiteDataStore;
-(BOOL)audioOnly;
-(unsigned long long)_persona;
-(BOOL)canPrint;
-(void)navigationBarDoneButtonWasTapped:(id)arg1 ;
-(BOOL)canOverrideStatusBar;
-(void)muteMediaCapture;
-(void)statusBarIndicatorTappedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadWebAppWithIdentifier:(id)arg1 ;
-(void)webAppDidBecomeActive;
-(void)webAppWillResignActive;
-(void)webViewControllerDidChangeLoadingState:(id)arg1 ;
-(void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1 ;
-(void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(BOOL)_isURLOutOfManifestScope:(id)arg1 ;
-(BOOL)_isURLOutOfLegacyScope:(id)arg1 withLoginURLExempted:(BOOL)arg2 ;
-(void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)_loadNextFallbackURL;
-(void)webViewController:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)_fetchApplicationManifestIfNeeded;
-(void)_updateDisplayMode;
-(void)webViewControllerDidChangeURL:(id)arg1 ;
-(BOOL)_isURLOutOfScope:(id)arg1 withLoginURLExempted:(BOOL)arg2 ;
-(id)websiteDataStoreConfiguration;
-(id)webViewConfiguration;
-(void)setWebViewController:(id)arg1 ;
-(void)_initialLoadFinishedWithSuccess:(BOOL)arg1 ;
-(BOOL)_clientIsWebApp;
-(void)_loadWebClipPageURL:(id)arg1 ;
-(void)_handleHostStateUpdate:(id)arg1 ;
-(void)setMediaCaptureDeviceIcon:(unsigned long long)arg1 ;
-(BOOL)_usesScrollToTopView;
@end

