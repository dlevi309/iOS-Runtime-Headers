/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIRedeemViewCameraOverrideDelegate.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@protocol SKUIServiceAccountPageViewController, SKAccountPageViewControllerDelegate;
@class NSURL, _UIAsyncInvocation, SURedeemCameraViewController, SKRemoteAccountPageViewController, SKInvocationQueueProxy, ACAccount, NSString;

@interface SKAccountPageViewController : UIViewController <SKUIRedeemViewCameraOverrideDelegate, PSStateRestoration> {

	NSURL* _accountURL;
	_UIAsyncInvocation* _cancelRequest;
	/*^block*/id _prepareBlock;
	/*^block*/id _loadBlock;
	SURedeemCameraViewController* _presentedRedeemCameraViewController;
	SKRemoteAccountPageViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceAccountPageViewController> _serviceProxy;
	BOOL _isRemoteViewControllerReady;
	BOOL _financeInterruptionCalled;
	BOOL _cameraDidShow;
	BOOL _viewHasAppeared;
	BOOL _isRemoteViewControllerSetup;
	/*^block*/id redeemCompletionHandler;
	id<SKAccountPageViewControllerDelegate> _delegate;
	ACAccount* _account;
	NSString* _referrer;
	long long _type;
	SKAccountPageViewController* _preWarmedViewController;
	SKAccountPageViewController* _presentingAccountPageViewController;

}

@property (assign,nonatomic) long long type;                                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) SKAccountPageViewController * preWarmedViewController;                                 //@synthesize preWarmedViewController=_preWarmedViewController - In the implementation block
@property (assign,nonatomic,__weak) SKAccountPageViewController * presentingAccountPageViewController;              //@synthesize presentingAccountPageViewController=_presentingAccountPageViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SKAccountPageViewControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * referrer;                                                                   //@synthesize referrer=_referrer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)isCommerceUIURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id<SKAccountPageViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKAccountPageViewControllerDelegate>)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(NSString *)referrer;
-(void)_addRemoteView;
-(void)setReferrer:(NSString *)arg1 ;
-(void)_dismissViewControllerWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_didPrepareWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_didFinishLoading;
-(void)_financeInterruptionResolved:(BOOL)arg1 ;
-(void)_overrideCreditCardPresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)_overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2 ;
-(void)_overrideRedeemCameraWithCompletion:(/*^block*/id)arg1 ;
-(void)_setBridgedNavigationItemWithOptions:(id)arg1 ;
-(void)_pushBridgedViewControllerAnimated:(BOOL)arg1 options:(id)arg2 ;
-(void)_popBridgedViewControllersToIndex:(unsigned long long)arg1 ;
-(void)_presentBridgedViewController;
-(void)_dismissBridgedViewController;
-(void)_requestRemoteViewController;
-(id)_overrideScheme:(id)arg1 ;
-(void)_setupNotificationCenter;
-(void)_setupNavigationItem;
-(void)_setupRemoteViewController:(BOOL)arg1 ;
-(SKAccountPageViewController *)presentingAccountPageViewController;
-(void)_setupPreWarmedViewController;
-(void)_sk_applicationDidEnterBackground:(id)arg1 ;
-(void)_sk_applicationWillEnterForeground:(id)arg1 ;
-(void)_keyboardDidChangeNotification:(id)arg1 ;
-(void)_keyboardWillChangeNotification:(id)arg1 ;
-(void)_popAllBridgedNavigationViewControllers;
-(void)_bridgedRightButtonPressed:(id)arg1 ;
-(SKAccountPageViewController *)preWarmedViewController;
-(id)initWithAccountURL:(id)arg1 ;
-(void)setPresentingAccountPageViewController:(SKAccountPageViewController *)arg1 ;
-(void)setPreWarmedViewController:(SKAccountPageViewController *)arg1 ;
-(unsigned long long)_indexForFirstBridgedNavigationViewController;
-(void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2 ;
-(void)overrideRedeemOperationWithCode:(id)arg1 cameraRecognized:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
@end

