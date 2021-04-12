/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMediaComponentView.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>
#import <libobjc.A.dylib/WKUIDelegate.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>

@protocol SXComponentActionHandler;
@class WKWebView, SWCrashRetryThrottler, WKWebsiteDataStore, UIActivityIndicatorView, NSString;

@interface SXEmbedVideoComponentView : SXMediaComponentView <WKNavigationDelegate, WKNavigationDelegatePrivate, WKUIDelegate, SXViewportChangeListener> {

	BOOL _webViewIsLoaded;
	BOOL _isPresentingFullscreen;
	id<SXComponentActionHandler> _actionHandler;
	WKWebView* _webView;
	SWCrashRetryThrottler* _webCrashRetryThrottler;
	WKWebsiteDataStore* _dataStore;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,readonly) id<SXComponentActionHandler> actionHandler;                //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                                         //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) SWCrashRetryThrottler * webCrashRetryThrottler;              //@synthesize webCrashRetryThrottler=_webCrashRetryThrottler - In the implementation block
@property (assign,nonatomic) BOOL webViewIsLoaded;                                        //@synthesize webViewIsLoaded=_webViewIsLoaded - In the implementation block
@property (assign,nonatomic) BOOL isPresentingFullscreen;                                 //@synthesize isPresentingFullscreen=_isPresentingFullscreen - In the implementation block
@property (nonatomic,readonly) WKWebsiteDataStore * dataStore;                            //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;               //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConfiguration;
-(void)handleError:(id)arg1 ;
-(WKWebView *)webView;
-(id<SXComponentActionHandler>)actionHandler;
-(void)layoutSubviews;
-(CGRect)visibleFrame;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)discardContents;
-(WKWebsiteDataStore *)dataStore;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
-(id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 ;
-(void)_webViewDidEnterFullscreen:(id)arg1 ;
-(void)_webViewDidExitFullscreen:(id)arg1 ;
-(SWCrashRetryThrottler *)webCrashRetryThrottler;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)renderContents;
-(BOOL)allowHierarchyRemoval;
-(unsigned long long)analyticsMediaType;
-(CGRect)transitionContentFrame;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 actionHandler:(id)arg7 websiteDataStore:(id)arg8 ;
-(unsigned long long)analyticsVideoType;
-(BOOL)shouldAllowRequestToURL:(id)arg1 ;
-(void)setWebCrashRetryThrottler:(SWCrashRetryThrottler *)arg1 ;
-(BOOL)webViewIsLoaded;
-(void)updateWebViewToWidth:(double)arg1 ;
-(void)initializeWebViewWithURL:(id)arg1 ;
-(BOOL)isPresentingFullscreen;
-(void)setWebViewIsLoaded:(BOOL)arg1 ;
-(void)setIsPresentingFullscreen:(BOOL)arg1 ;
@end

