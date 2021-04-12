/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMediaComponentView.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>
#import <libobjc.A.dylib/WKUIDelegate.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/_WKFullscreenDelegate.h>

@protocol SXComponentActionHandler, SXProxyAuthenticationHandler, SXSceneStateMonitor;
@class WKWebView, SWCrashRetryThrottler, WKWebsiteDataStore, UIActivityIndicatorView, NSString;

@interface SXEmbedVideoComponentView : SXMediaComponentView <WKNavigationDelegate, WKNavigationDelegatePrivate, WKUIDelegate, SXViewportChangeListener, _WKFullscreenDelegate> {

	BOOL _webViewIsLoaded;
	BOOL _isPresentingFullscreen;
	id<SXComponentActionHandler> _actionHandler;
	WKWebView* _webView;
	SWCrashRetryThrottler* _webCrashRetryThrottler;
	WKWebsiteDataStore* _dataStore;
	UIActivityIndicatorView* _activityIndicator;
	id<SXProxyAuthenticationHandler> _proxyAuthenticationHandler;
	id<SXSceneStateMonitor> _sceneStateMonitor;

}

@property (nonatomic,readonly) id<SXComponentActionHandler> actionHandler;                               //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                                                        //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) SWCrashRetryThrottler * webCrashRetryThrottler;                             //@synthesize webCrashRetryThrottler=_webCrashRetryThrottler - In the implementation block
@property (assign,nonatomic) BOOL webViewIsLoaded;                                                       //@synthesize webViewIsLoaded=_webViewIsLoaded - In the implementation block
@property (assign,nonatomic) BOOL isPresentingFullscreen;                                                //@synthesize isPresentingFullscreen=_isPresentingFullscreen - In the implementation block
@property (nonatomic,readonly) WKWebsiteDataStore * dataStore;                                           //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;                              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) id<SXProxyAuthenticationHandler> proxyAuthenticationHandler;              //@synthesize proxyAuthenticationHandler=_proxyAuthenticationHandler - In the implementation block
@property (nonatomic,readonly) id<SXSceneStateMonitor> sceneStateMonitor;                                //@synthesize sceneStateMonitor=_sceneStateMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConfiguration;
-(WKWebsiteDataStore *)dataStore;
-(WKWebView *)webView;
-(CGRect)visibleFrame;
-(UIActivityIndicatorView *)activityIndicator;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)_webViewDidEnterElementFullscreen:(id)arg1 ;
-(void)_webViewDidExitElementFullscreen:(id)arg1 ;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
-(void)handleError:(id)arg1 ;
-(id<SXComponentActionHandler>)actionHandler;
-(id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 ;
-(void)_webViewDidExitFullscreen:(id)arg1 ;
-(void)_webViewDidEnterFullscreen:(id)arg1 ;
-(void)layoutSubviews;
-(void)discardContents;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)renderContents;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(BOOL)allowHierarchyRemoval;
-(unsigned long long)analyticsMediaType;
-(CGRect)transitionContentFrame;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 sceneStateMonitor:(id)arg7 actionHandler:(id)arg8 websiteDataStore:(id)arg9 proxyAuthenticationHandler:(id)arg10 ;
-(unsigned long long)analyticsVideoType;
-(id<SXSceneStateMonitor>)sceneStateMonitor;
-(void)webViewEnteredFullscreen:(id)arg1 ;
-(void)webViewExitedFullscreen:(id)arg1 ;
-(SWCrashRetryThrottler *)webCrashRetryThrottler;
-(BOOL)shouldAllowRequestToURL:(id)arg1 ;
-(id<SXProxyAuthenticationHandler>)proxyAuthenticationHandler;
-(void)setWebCrashRetryThrottler:(SWCrashRetryThrottler *)arg1 ;
-(BOOL)webViewIsLoaded;
-(void)updateWebViewToWidth:(double)arg1 ;
-(void)initializeWebViewWithURL:(id)arg1 ;
-(BOOL)isPresentingFullscreen;
-(void)setWebViewIsLoaded:(BOOL)arg1 ;
-(void)setIsPresentingFullscreen:(BOOL)arg1 ;
@end

