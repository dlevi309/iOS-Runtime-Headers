/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKScreenTrackingDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/SKRemoteDismissingViewController.h>

@protocol SKStoreProductViewControllerDelegatePrivate, SKUIServiceProductPageViewController;
@class NSString, _UIAsyncInvocation, SKRemoteProductViewController, SKInvocationQueueProxy, NSDictionary, SKScrollDetector;

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

}

@property (nonatomic,copy) NSString * additionalBuyParameters;                                      //@synthesize additionalBuyParameters=_additionalBuyParameters - In the implementation block
@property (nonatomic,copy) NSString * affiliateIdentifier;                                          //@synthesize affiliateIdentifier=_affiliateIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                             //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * scriptContextDictionary;                                  //@synthesize scriptContextDictionary=_scriptContextDictionary - In the implementation block
@property (assign,nonatomic) long long productPageStyle;                                            //@synthesize productPageStyle=_productPageStyle - In the implementation block
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
-(void)dealloc;
-(id<SKStoreProductViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKStoreProductViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(int)_preferredStatusBarVisibility;
-(long long)preferredStatusBarStyle;
-(void)setParentViewController:(id)arg1 ;
-(long long)modalPresentationStyle;
-(long long)modalTransitionStyle;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(void)_didFinish;
-(NSString *)rightBarButtonTitle;
-(void)setRightBarButtonTitle:(NSString *)arg1 ;
-(void)_addRemoteView;
-(void)_resetRemoteViewController;
-(void)loadProductWithParameters:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)dismissRemoteViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestRemoteViewController;
-(void)_sk_applicationDidEnterBackground:(id)arg1 ;
-(void)_sk_applicationWillEnterForeground:(id)arg1 ;
-(void)sk_didBecomeOnScreen:(id)arg1 ;
-(void)sk_didBecomeOffScreen:(id)arg1 ;
-(void)finishImmediately;
-(void)setAdditionalBuyParameters:(NSString *)arg1 ;
-(void)setAffiliateIdentifier:(NSString *)arg1 ;
-(void)setProductPageStyle:(long long)arg1 ;
-(void)setScriptContextDictionary:(NSDictionary *)arg1 ;
-(void)setShowsStoreButton:(BOOL)arg1 ;
-(void)setAskToBuy:(BOOL)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(void)setShowsRightBarButton:(BOOL)arg1 ;
-(void)setPromptString:(NSString *)arg1 ;
-(void)_configureForFullScreenPresentationOrThrowException;
-(BOOL)_isPeeking;
-(void)setPresentationStyleIfNeeded;
-(void)_forceOrientationBackToSupportedOrientation;
-(void)_throwUnsupportedPresentationException;
-(void)_setLoadBlock:(/*^block*/id)arg1 ;
-(long long)productPageStyle;
-(void)_fireLoadBlockBeforeFinishing;
-(void)_loadDidFinishWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)loadProductWithPageDictionary:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)loadProductWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)loadProductWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_didFinishWithResult:(long long)arg1 ;
-(void)_didFinishDismissal;
-(void)_presentPageWithRequest:(id)arg1 animated:(BOOL)arg2 ;
-(NSString *)additionalBuyParameters;
-(NSString *)affiliateIdentifier;
-(NSDictionary *)scriptContextDictionary;
-(BOOL)askToBuy;
-(BOOL)showsStoreButton;
-(NSString *)cancelButtonTitle;
-(BOOL)showsRightBarButton;
-(NSString *)promptString;
-(BOOL)automaticallyDismisses;
-(void)setAutomaticallyDismisses:(BOOL)arg1 ;
@end

