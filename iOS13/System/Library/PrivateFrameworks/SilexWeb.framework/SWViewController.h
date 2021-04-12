/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKUIDelegate.h>

@protocol SWScriptsManager, SWMessageHandlerManager, SWNavigationManager, SWSetupManager, SWErrorReporting, SWDocumentStateReporting, SWTimeoutManager, SWProcessTerminationManager, SWContentRuleManager, SWReachabilityProvider, SWLogger, SWSessionManager, SWDatastoreSynchronizationManager;
@class WKWebView, SWLoader, NSString;

@interface SWViewController : UIViewController <WKNavigationDelegate, WKUIDelegate> {

	id<SWScriptsManager> _scriptsManager;
	id<SWMessageHandlerManager> _messageHandlerManager;
	id<SWNavigationManager> _navigationManager;
	WKWebView* _webView;
	id<SWSetupManager> _setupManager;
	id<SWErrorReporting> _errorReporter;
	id<SWDocumentStateReporting> _documentStateReporter;
	id<SWTimeoutManager> _timeoutManager;
	id<SWProcessTerminationManager> _terminationManager;
	id<SWContentRuleManager> _contentRuleManager;
	id<SWReachabilityProvider> _reachabilityProvider;
	id<SWLogger> _logger;
	SWLoader* _loader;
	id<SWSessionManager> _sessionManager;
	id<SWDatastoreSynchronizationManager> _datastoreSynchronizationManager;

}

@property (nonatomic,readonly) WKWebView * webView;                                                                //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) id<SWSetupManager> setupManager;                                                    //@synthesize setupManager=_setupManager - In the implementation block
@property (nonatomic,readonly) id<SWErrorReporting> errorReporter;                                                 //@synthesize errorReporter=_errorReporter - In the implementation block
@property (nonatomic,readonly) id<SWDocumentStateReporting> documentStateReporter;                                 //@synthesize documentStateReporter=_documentStateReporter - In the implementation block
@property (nonatomic,readonly) id<SWTimeoutManager> timeoutManager;                                                //@synthesize timeoutManager=_timeoutManager - In the implementation block
@property (nonatomic,readonly) id<SWProcessTerminationManager> terminationManager;                                 //@synthesize terminationManager=_terminationManager - In the implementation block
@property (nonatomic,readonly) id<SWContentRuleManager> contentRuleManager;                                        //@synthesize contentRuleManager=_contentRuleManager - In the implementation block
@property (nonatomic,readonly) id<SWReachabilityProvider> reachabilityProvider;                                    //@synthesize reachabilityProvider=_reachabilityProvider - In the implementation block
@property (nonatomic,readonly) id<SWLogger> logger;                                                                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) SWLoader * loader;                                                                    //@synthesize loader=_loader - In the implementation block
@property (nonatomic,readonly) id<SWSessionManager> sessionManager;                                                //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,readonly) id<SWDatastoreSynchronizationManager> datastoreSynchronizationManager;              //@synthesize datastoreSynchronizationManager=_datastoreSynchronizationManager - In the implementation block
@property (nonatomic,readonly) id<SWScriptsManager> scriptsManager;                                                //@synthesize scriptsManager=_scriptsManager - In the implementation block
@property (nonatomic,readonly) id<SWMessageHandlerManager> messageHandlerManager;                                  //@synthesize messageHandlerManager=_messageHandlerManager - In the implementation block
@property (nonatomic,readonly) id<SWNavigationManager> navigationManager;                                          //@synthesize navigationManager=_navigationManager - In the implementation block
@property (assign,nonatomic) BOOL allowsRemoteInspection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SWLogger>)logger;
-(WKWebView *)webView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(BOOL)webView:(id)arg1 shouldPreviewElement:(id)arg2 ;
-(id)webView:(id)arg1 previewingViewControllerForElement:(id)arg2 defaultActions:(id)arg3 ;
-(void)webView:(id)arg1 commitPreviewingViewController:(id)arg2 ;
-(SWLoader *)loader;
-(BOOL)allowsRemoteInspection;
-(void)setAllowsRemoteInspection:(BOOL)arg1 ;
-(void)setLoader:(SWLoader *)arg1 ;
-(void)loadURL:(id)arg1 ;
-(id<SWSessionManager>)sessionManager;
-(id<SWReachabilityProvider>)reachabilityProvider;
-(id<SWNavigationManager>)navigationManager;
-(id<SWSetupManager>)setupManager;
-(id<SWErrorReporting>)errorReporter;
-(id<SWScriptsManager>)scriptsManager;
-(id)initWithWebView:(id)arg1 setupManager:(id)arg2 scriptsManager:(id)arg3 messageHandlerManager:(id)arg4 navigationManager:(id)arg5 errorReporter:(id)arg6 documentStateReporter:(id)arg7 timeoutManager:(id)arg8 terminationManager:(id)arg9 contentRuleManager:(id)arg10 reachabilityProvider:(id)arg11 logger:(id)arg12 sessionManager:(id)arg13 datastoreSynchronizationManager:(id)arg14 ;
-(id<SWContentRuleManager>)contentRuleManager;
-(void)initiateLoadingWithLoader:(id)arg1 ;
-(id<SWProcessTerminationManager>)terminationManager;
-(id<SWDocumentStateReporting>)documentStateReporter;
-(id<SWMessageHandlerManager>)messageHandlerManager;
-(id<SWTimeoutManager>)timeoutManager;
-(id<SWDatastoreSynchronizationManager>)datastoreSynchronizationManager;
@end

