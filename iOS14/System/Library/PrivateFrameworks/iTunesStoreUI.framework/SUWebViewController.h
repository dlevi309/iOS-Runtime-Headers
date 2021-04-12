/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>
#import <libobjc.A.dylib/SUWebViewManagerDelegate.h>
#import <libobjc.A.dylib/SUWebViewDelegate.h>

@class SUWebView, SSMutableAuthenticationContext, SUDelayedNavigationItem, NSURL, SUMescalSession, SUObjectPool, ISURLRequestPerformance, SUStorePageProtocol, SUWebViewManager, ACAccount, NSDictionary, SSAuthenticationContext, NSString;

@interface SUWebViewController : SUViewController <SUWebViewManagerDelegate, SUWebViewDelegate> {

	SUWebView* _webView;
	SSMutableAuthenticationContext* _authenticationContext;
	SUDelayedNavigationItem* _delayedNavigationItem;
	NSURL* _displayedURL;
	BOOL _hasEverAppeared;
	long long _lastKnownOrientation;
	/*^block*/id _loadBlock;
	SUMescalSession* _mescalSession;
	SUObjectPool* _objectPool;
	ISURLRequestPerformance* _performanceMetrics;
	long long _scheduledOrientation;
	BOOL _shouldSignRequests;
	SUStorePageProtocol* _storePageProtocol;
	long long _style;
	NSURL* _url;
	BOOL _viewIsReady;
	SUWebViewManager* _webViewManager;
	ACAccount* _account;
	NSDictionary* _tidHeaders;

}

@property (assign,nonatomic) BOOL viewIsReady;                                                                                                     //@synthesize viewIsReady=_viewIsReady - In the implementation block
@property (setter=_setMescalSession:,getter=_mescalSession,nonatomic,retain) SUMescalSession * _mescalSession;                                     //@synthesize mescalSession=_mescalSession - In the implementation block
@property (setter=_setPerformanceMetrics:,getter=_performanceMetrics,nonatomic,retain) ISURLRequestPerformance * _performanceMetrics;              //@synthesize performanceMetrics=_performanceMetrics - In the implementation block
@property (assign,nonatomic) long long style;                                                                                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;                                                                        //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,readonly) SUWebView * webView; 
@property (assign,nonatomic) BOOL shouldSignRequests;                                                                                              //@synthesize shouldSignRequests=_shouldSignRequests - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                                                                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDictionary * tidHeaders;                                                                                            //@synthesize tidHeaders=_tidHeaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(SUWebView *)webView;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_setExistingNavigationItem:(id)arg1 ;
-(ISURLRequestPerformance *)_performanceMetrics;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(NSDictionary *)tidHeaders;
-(void)setTidHeaders:(NSDictionary *)arg1 ;
-(CGRect)documentBounds;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)invalidate;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setStyle:(long long)arg1 ;
-(void)loadView;
-(long long)style;
-(id)_defaultBackgroundColor;
-(void)dealloc;
-(id)copyScriptProperties;
-(void)setScriptProperties:(id)arg1 ;
-(id)displayedURL;
-(id)navigationItemForScriptInterface;
-(void)_finishLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(id)copyArchivableContext;
-(id)copyDefaultScriptProperties;
-(void)parentViewControllerHierarchyDidChange;
-(id)storePageProtocol;
-(void)storePageProtocolDidChange;
-(id)newRotationController;
-(void)keyboardDidHideWithInfo:(id)arg1 ;
-(void)keyboardWillShowWithInfo:(id)arg1 ;
-(void)_loadWithURLOperation:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_setPerformanceMetrics:(id)arg1 ;
-(BOOL)viewIsReady;
-(void)reloadWithStorePage:(id)arg1 forURL:(id)arg2 ;
-(void)_requestWebScriptReloadWithContext:(id)arg1 ;
-(id)copyObjectForScriptFromPoolWithClass:(Class)arg1 ;
-(void)storePageCleanupBeforeTearDown;
-(void)setStorePageProtocol:(id)arg1 ;
-(id)newScriptInterface;
-(void)setShouldSignRequests:(BOOL)arg1 ;
-(void)_applyScriptProperties:(id)arg1 ;
-(CGSize)minimumViewSize;
-(id)_placeholderBackgroundView;
-(void)_reloadPlaceholderBackgroundView;
-(void)_prepareToLoadURL:(id)arg1 ;
-(void)_reloadUI;
-(void)setViewIsReady:(BOOL)arg1 ;
-(void)_sendOrientationWillChangeToInterfaceOrientation:(long long)arg1 ;
-(void)_removePlaceholderBackgroundView;
-(void)_applySavedScrollOffsetIfPossible;
-(void)_loadURLRequest:(id)arg1 ;
-(void)_getURLRequestForOperation:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_reloadBackgroundViewPropertiesWithScriptProperties:(id)arg1 ;
-(void)_addPlaceholderBackgroundView;
-(void)_reloadObjectPool;
-(id)newScriptInterfaceForWebViewManager:(id)arg1 ;
-(id)viewControllerForWebViewManager:(id)arg1 ;
-(void)webViewManager:(id)arg1 didReceiveTitle:(id)arg2 ;
-(void)webViewManager:(id)arg1 didRejectInvalidRequest:(id)arg2 ;
-(void)webViewManager:(id)arg1 didReceivePrimaryResponse:(id)arg2 ;
-(void)webViewManager:(id)arg1 willInjectScriptInterface:(id)arg2 ;
-(void)webViewManager:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewManagerDidFinishLoad:(id)arg1 ;
-(void)webViewManagerDidStartLoad:(id)arg1 ;
-(void)webViewManager:(id)arg1 webDocumentViewDidSetFrame:(CGRect)arg2 ;
-(void)_setLastKnownOrientation:(long long)arg1 ;
-(SUMescalSession *)_mescalSession;
-(void)_setMescalSession:(id)arg1 ;
-(BOOL)shouldSignRequests;
@end

