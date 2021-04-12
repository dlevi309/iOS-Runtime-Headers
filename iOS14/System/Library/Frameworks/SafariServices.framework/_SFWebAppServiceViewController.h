/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned long long _mediaStateIconBeforeSuspension;
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
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(NSString *)URLString;
-(void)navigationBarDoneButtonWasTapped:(id)arg1 ;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)loadWebAppWithIdentifier:(id)arg1 ;
-(void)webAppDidBecomeActive;
-(void)webAppWillResignActive;
-(void)webViewControllerDidChangeLoadingState:(id)arg1 ;
-(BOOL)canPrint;
-(void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1 ;
-(void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(BOOL)_isURLOutOfManifestScope:(id)arg1 ;
-(BOOL)_isURLOutOfLegacyScope:(id)arg1 withLoginURLExempted:(BOOL)arg2 ;
-(void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)_loadNextFallbackURL;
-(void)webViewController:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)_updateDisplayMode;
-(void)_hostApplicationDidEnterBackground;
-(BOOL)audioOnly;
-(id)processPool;
-(BOOL)canOverrideStatusBar;
-(void)muteMediaCapture;
-(void)statusBarIndicatorTappedWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)_persona;
-(void)_fetchApplicationManifestIfNeeded;
-(void)webViewControllerDidChangeURL:(id)arg1 ;
-(BOOL)_isURLOutOfScope:(id)arg1 withLoginURLExempted:(BOOL)arg2 ;
-(id)_canonicalPageURL;
-(id)websiteDataStoreConfiguration;
-(id)webViewConfiguration;
-(void)setWebViewController:(id)arg1 ;
-(void)_initialLoadFinishedWithSuccess:(BOOL)arg1 ;
-(BOOL)_clientIsWebApp;
-(void)viewDidLoad;
-(void)_loadWebClipPageURL:(id)arg1 ;
-(void)_handleHostStateUpdate:(id)arg1 ;
-(BOOL)_usesScrollToTopView;
-(long long)preferredStatusBarStyle;
-(id)websiteDataStore;
-(void)setMediaStateIcon:(unsigned long long)arg1 ;
-(void)dealloc;
@end

