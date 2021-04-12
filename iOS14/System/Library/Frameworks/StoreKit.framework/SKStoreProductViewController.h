/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKScreenTrackingDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/SKRemoteDismissingViewController.h>

@protocol SKStoreProductViewControllerDelegatePrivate, SKUIServiceProductPageViewController;
@class NSString, _UIAsyncInvocation, SKRemoteProductViewController, SKInvocationQueueProxy, NSDictionary, SKScrollDetector, GKGame;

@interface SKStoreProductViewController : UIViewController <SKScreenTrackingDelegate, UIViewControllerTransitioningDelegate, SKRemoteDismissingViewController> {

	NSString* _additionalBuyParameters;
	NSString* _affiliateIdentifier;
	BOOL _automaticallyDismisses;
	_UIAsyncInvocation* _cancelRequest;
	NSString* _clientIdentifier;
	id<SKStoreProductViewControllerDelegatePrivate> _delegate;
	/*^block*/id _loadBlock;
	long long _originalStatusBarStyle;
	long long _productPageStyle;
	SKRemoteProductViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceProductPageViewController> _serviceProxy;
	NSDictionary* _scriptContextDictionary;
	BOOL _showsStoreButton;
	NSString* _cancelButtonTitle;
	NSString* _rightBarButtonTitle;
	BOOL _showsRightBarButton;
	BOOL _askToBuy;
	NSString* _promptString;
	SKScrollDetector* _scrollDetector;
	BOOL _viewWasOnScreen;
	/*^block*/id _dismissalCompleted;
	NSString* _hostBundleIdentifier;
	NSString* _usageContext;

}

@property (nonatomic,retain) GKGame * _gkGame; 
@property (nonatomic,copy) id _gkCompletionHandler; 
@property (nonatomic,copy) NSString * additionalBuyParameters;                                      //@synthesize additionalBuyParameters=_additionalBuyParameters - In the implementation block
@property (nonatomic,copy) NSString * affiliateIdentifier;                                          //@synthesize affiliateIdentifier=_affiliateIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                             //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostBundleIdentifier;                                         //@synthesize hostBundleIdentifier=_hostBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * scriptContextDictionary;                                  //@synthesize scriptContextDictionary=_scriptContextDictionary - In the implementation block
@property (assign,nonatomic) long long productPageStyle;                                            //@synthesize productPageStyle=_productPageStyle - In the implementation block
@property (nonatomic,copy) NSString * usageContext;                                                 //@synthesize usageContext=_usageContext - In the implementation block
@property (assign,nonatomic) BOOL askToBuy;                                                         //@synthesize askToBuy=_askToBuy - In the implementation block
@property (assign,nonatomic) BOOL showsStoreButton;                                                 //@synthesize showsStoreButton=_showsStoreButton - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;                                            //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * rightBarButtonTitle;                                          //@synthesize rightBarButtonTitle=_rightBarButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL showsRightBarButton;                                              //@synthesize showsRightBarButton=_showsRightBarButton - In the implementation block
@property (nonatomic,copy) NSString * promptString;                                                 //@synthesize promptString=_promptString - In the implementation block
@property (assign,nonatomic) BOOL automaticallyDismisses;                                           //@synthesize automaticallyDismisses=_automaticallyDismisses - In the implementation block
@property (assign,nonatomic,__weak) id<SKStoreProductViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultIXStoreSheetDictionary;
+(void)_validateURL:(id)arg1 withSheetInfo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)getCanLoadURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)getCanLoadURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(GKGame *)_gkGame;
-(void)set_gkGame:(GKGame *)arg1 ;
-(id)_gkCompletionHandler;
-(void)set_gkCompletionHandler:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)finishImmediately;
-(void)viewWillLayoutSubviews;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(long long)modalTransitionStyle;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id<SKStoreProductViewControllerDelegate>)delegate;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_requestRemoteViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)rightBarButtonTitle;
-(void)setRightBarButtonTitle:(NSString *)arg1 ;
-(long long)modalPresentationStyle;
-(int)_preferredStatusBarVisibility;
-(BOOL)askToBuy;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_addRemoteView;
-(void)_resetRemoteViewController;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setDelegate:(id<SKStoreProductViewControllerDelegate>)arg1 ;
-(BOOL)shouldAutorotate;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setScriptContextDictionary:(NSDictionary *)arg1 ;
-(void)loadProductWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_didFinish;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadProductWithParameters:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSString *)affiliateIdentifier;
-(void)setAffiliateIdentifier:(NSString *)arg1 ;
-(long long)preferredStatusBarStyle;
-(NSString *)usageContext;
-(NSString *)cancelButtonTitle;
-(void)setParentViewController:(id)arg1 ;
-(void)loadView;
-(BOOL)_isPeeking;
-(NSString *)clientIdentifier;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)dismissRemoteViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_sk_applicationDidEnterBackground:(id)arg1 ;
-(void)_sk_applicationWillEnterForeground:(id)arg1 ;
-(void)sk_didBecomeOnScreen:(id)arg1 ;
-(void)sk_didBecomeOffScreen:(id)arg1 ;
-(void)setAdditionalBuyParameters:(NSString *)arg1 ;
-(void)setHostBundleIdentifier:(NSString *)arg1 ;
-(void)setProductPageStyle:(long long)arg1 ;
-(void)setShowsStoreButton:(BOOL)arg1 ;
-(void)setAskToBuy:(BOOL)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(void)setShowsRightBarButton:(BOOL)arg1 ;
-(void)setPromptString:(NSString *)arg1 ;
-(void)setUsageContext:(NSString *)arg1 ;
-(void)_viewTapped:(id)arg1 ;
-(void)_configureForFullScreenPresentationOrThrowException;
-(void)setPresentationStyleIfNeeded;
-(void)setNoClippingIfNeeded;
-(void)_forceOrientationBackToSupportedOrientation;
-(void)_throwUnsupportedPresentationException;
-(void)_setLoadBlock:(/*^block*/id)arg1 ;
-(long long)productPageStyle;
-(void)_fireLoadBlockBeforeFinishing;
-(void)_loadDidFinishWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)loadProductWithPageDictionary:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)loadProductWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_didFinishWithResult:(long long)arg1 ;
-(void)_didFinishDismissal;
-(void)_presentPageWithRequest:(id)arg1 animated:(BOOL)arg2 ;
-(NSString *)additionalBuyParameters;
-(NSString *)hostBundleIdentifier;
-(NSDictionary *)scriptContextDictionary;
-(BOOL)showsStoreButton;
-(BOOL)showsRightBarButton;
-(NSString *)promptString;
-(BOOL)automaticallyDismisses;
-(void)setAutomaticallyDismisses:(BOOL)arg1 ;
@end

