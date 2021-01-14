/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKUIDelegate.h>
#import <libobjc.A.dylib/WKScriptMessageHandler.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/_WKFullscreenDelegate.h>

@protocol SWReachabilityProvider, SXEmbedDataProvider, SXComponentActionHandler, SXLayoutInvalidator, SXEmbedType, SXProxyAuthenticationHandler, SXSceneStateMonitor;
@class SXEmbedResource, WKWebView, SWCrashRetryThrottler, UILabel, NSString, NSMutableSet, UIActivityIndicatorView, WKNavigation, NFMultiDelegate, WKWebsiteDataStore, SXRelatedWebViewCache;

@interface SXEmbedComponentView : SXComponentView <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, UIGestureRecognizerDelegate, UIScrollViewDelegate, SXViewportChangeListener, _WKFullscreenDelegate> {

	BOOL _failedLoading;
	BOOL _hasRegisteredScriptMessageHandlers;
	id<SWReachabilityProvider> _reachabilityProvider;
	id<SXEmbedDataProvider> _embedDataProvider;
	id<SXComponentActionHandler> _actionHandler;
	id<SXLayoutInvalidator> _layoutInvalidator;
	id<SXEmbedType> _embedConfiguration;
	SXEmbedResource* _embedResource;
	WKWebView* _webView;
	SWCrashRetryThrottler* _webCrashRetryThrottler;
	WKWebView* _webViewPresentingInFullscreen;
	UILabel* _errorLabel;
	NSString* _HTML;
	NSString* _userScript;
	NSMutableSet* _expectedMessages;
	UIActivityIndicatorView* _activityIndicator;
	WKNavigation* _initialNavigation;
	NFMultiDelegate* _scriptMessageHandler;
	WKWebsiteDataStore* _dataStore;
	SXRelatedWebViewCache* _relatedWebViewCache;
	id<SXProxyAuthenticationHandler> _proxyAuthenticationHandler;
	id<SXSceneStateMonitor> _sceneStateMonitor;
	CGSize _currentlyLayoutingForSize;
	CGSize _currentLayoutSize;
	CGSize _currentViewportSize;

}

@property (nonatomic,readonly) id<SWReachabilityProvider> reachabilityProvider;                          //@synthesize reachabilityProvider=_reachabilityProvider - In the implementation block
@property (nonatomic,readonly) id<SXEmbedDataProvider> embedDataProvider;                                //@synthesize embedDataProvider=_embedDataProvider - In the implementation block
@property (nonatomic,readonly) id<SXComponentActionHandler> actionHandler;                               //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,readonly) id<SXLayoutInvalidator> layoutInvalidator;                                //@synthesize layoutInvalidator=_layoutInvalidator - In the implementation block
@property (nonatomic,retain) id<SXEmbedType> embedConfiguration;                                         //@synthesize embedConfiguration=_embedConfiguration - In the implementation block
@property (nonatomic,retain) SXEmbedResource * embedResource;                                            //@synthesize embedResource=_embedResource - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                                                        //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) SWCrashRetryThrottler * webCrashRetryThrottler;                             //@synthesize webCrashRetryThrottler=_webCrashRetryThrottler - In the implementation block
@property (nonatomic,retain) WKWebView * webViewPresentingInFullscreen;                                  //@synthesize webViewPresentingInFullscreen=_webViewPresentingInFullscreen - In the implementation block
@property (nonatomic,retain) UILabel * errorLabel;                                                       //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) NSString * HTML;                                                            //@synthesize HTML=_HTML - In the implementation block
@property (nonatomic,retain) NSString * userScript;                                                      //@synthesize userScript=_userScript - In the implementation block
@property (nonatomic,retain) NSMutableSet * expectedMessages;                                            //@synthesize expectedMessages=_expectedMessages - In the implementation block
@property (assign,nonatomic) BOOL failedLoading;                                                         //@synthesize failedLoading=_failedLoading - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) CGSize currentlyLayoutingForSize;                                           //@synthesize currentlyLayoutingForSize=_currentlyLayoutingForSize - In the implementation block
@property (assign,nonatomic) CGSize currentLayoutSize;                                                   //@synthesize currentLayoutSize=_currentLayoutSize - In the implementation block
@property (assign,nonatomic) CGSize currentViewportSize;                                                 //@synthesize currentViewportSize=_currentViewportSize - In the implementation block
@property (nonatomic,retain) WKNavigation * initialNavigation;                                           //@synthesize initialNavigation=_initialNavigation - In the implementation block
@property (assign,nonatomic) BOOL hasRegisteredScriptMessageHandlers;                                    //@synthesize hasRegisteredScriptMessageHandlers=_hasRegisteredScriptMessageHandlers - In the implementation block
@property (nonatomic,readonly) NFMultiDelegate * scriptMessageHandler;                                   //@synthesize scriptMessageHandler=_scriptMessageHandler - In the implementation block
@property (nonatomic,readonly) WKWebsiteDataStore * dataStore;                                           //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,readonly) SXRelatedWebViewCache * relatedWebViewCache;                              //@synthesize relatedWebViewCache=_relatedWebViewCache - In the implementation block
@property (nonatomic,readonly) id<SXProxyAuthenticationHandler> proxyAuthenticationHandler;              //@synthesize proxyAuthenticationHandler=_proxyAuthenticationHandler - In the implementation block
@property (nonatomic,readonly) id<SXSceneStateMonitor> sceneStateMonitor;                                //@synthesize sceneStateMonitor=_sceneStateMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebsiteDataStore *)dataStore;
-(WKWebView *)webView;
-(UIActivityIndicatorView *)activityIndicator;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(NSString *)HTML;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)_webViewDidEnterElementFullscreen:(id)arg1 ;
-(void)_webViewDidExitElementFullscreen:(id)arg1 ;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
-(void)handleError:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(id<SXComponentActionHandler>)actionHandler;
-(void)showActivityIndicator:(BOOL)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 ;
-(void)_webViewDidExitFullscreen:(id)arg1 ;
-(void)_webViewDidEnterFullscreen:(id)arg1 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(void)discardContents;
-(NSMutableSet *)expectedMessages;
-(id<SXEmbedDataProvider>)embedDataProvider;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)initialScale;
-(void)setHTML:(NSString *)arg1 ;
-(void)setWebView:(WKWebView *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)renderContents;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(id<SWReachabilityProvider>)reachabilityProvider;
-(UILabel *)errorLabel;
-(BOOL)allowHierarchyRemoval;
-(void)loadComponent:(id)arg1 ;
-(id<SXLayoutInvalidator>)layoutInvalidator;
-(void)willPresentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(id<SXSceneStateMonitor>)sceneStateMonitor;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 reachabilityProvider:(id)arg5 embedDataProvider:(id)arg6 actionHandler:(id)arg7 layoutInvalidator:(id)arg8 websiteDataStore:(id)arg9 relatedWebViewCache:(id)arg10 proxyAuthenticationHandler:(id)arg11 sceneStateMonitor:(id)arg12 ;
-(void)removeScriptMessageHandlers;
-(void)prewarmWebView;
-(void)loadEmbedIfNeeded;
-(WKWebView *)webViewPresentingInFullscreen;
-(BOOL)shouldLayoutWebView;
-(BOOL)hasLoadedEmbedData;
-(void)loadEmbedData;
-(void)displayEmbedIfNeeded;
-(id<SXEmbedType>)embedConfiguration;
-(void)setUserScript:(NSString *)arg1 ;
-(NSString *)userScript;
-(SXEmbedResource *)embedResource;
-(void)setFailedLoading:(BOOL)arg1 ;
-(BOOL)failedLoading;
-(void)loadWebViewIfNeeded;
-(void)layoutWebViewForSize:(CGSize)arg1 ;
-(void)reloadEmbed;
-(BOOL)shouldShowWebView;
-(void)loadWebView;
-(unsigned long long)userActionMediaTypes;
-(SXRelatedWebViewCache *)relatedWebViewCache;
-(void)setCurrentlyLayoutingForSize:(CGSize)arg1 ;
-(void)addScriptMessageHandlers;
-(id)enclosingHTML;
-(id)HTMLByEnclosingHTML:(id)arg1 withHTML:(id)arg2 ;
-(void)setInitialNavigation:(WKNavigation *)arg1 ;
-(void)setCurrentLayoutSize:(CGSize)arg1 ;
-(void)setCurrentViewportSize:(CGSize)arg1 ;
-(void)finalizeLayoutForSize:(CGSize)arg1 ;
-(CGSize)currentLayoutSize;
-(id)unableToLoadMessage;
-(void)webViewEnteredFullscreen:(id)arg1 ;
-(void)webViewExitedFullscreen:(id)arg1 ;
-(SWCrashRetryThrottler *)webCrashRetryThrottler;
-(WKNavigation *)initialNavigation;
-(BOOL)shouldAllowRequestToURL:(id)arg1 ;
-(id<SXProxyAuthenticationHandler>)proxyAuthenticationHandler;
-(CGSize)currentlyLayoutingForSize;
-(BOOL)hasRegisteredScriptMessageHandlers;
-(NFMultiDelegate *)scriptMessageHandler;
-(void)setHasRegisteredScriptMessageHandlers:(BOOL)arg1 ;
-(void)setWebViewPresentingInFullscreen:(WKWebView *)arg1 ;
-(void)setEmbedConfiguration:(id<SXEmbedType>)arg1 ;
-(void)setEmbedResource:(SXEmbedResource *)arg1 ;
-(void)setWebCrashRetryThrottler:(SWCrashRetryThrottler *)arg1 ;
-(void)setExpectedMessages:(NSMutableSet *)arg1 ;
-(CGSize)currentViewportSize;
@end

