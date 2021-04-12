/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol SUClientInterfaceDelegatePrivate, OS_dispatch_queue;
@class NSString, SUUIAppearance, UIColor, NSObject, SUPurchaseManager, SUQueueSessionManager, NSMutableDictionary, SUViewControllerFactory, SUPreviewOverlayViewController, SUTabBarController;

@interface SUClientInterface : NSObject {

	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _askToBuyApprovalPrompt;
	SUUIAppearance* _appearance;
	BOOL _inAskToBuyApprovalFlow;
	NSString* _clientIdentifier;
	UIColor* _darkKeyColor;
	id<SUClientInterfaceDelegatePrivate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _ignoresExpectedClientsProtocol;
	UIColor* _lightKeyColor;
	NSString* _localStoragePath;
	SUPurchaseManager* _purchaseManager;
	SUQueueSessionManager* _queueSessionManager;
	BOOL _showDialogOnError;
	NSMutableDictionary* _urlBagKeys;
	NSString* _userAgent;
	SUViewControllerFactory* _viewControllerFactory;
	BOOL _wasLaunchedFromLibrary;
	BOOL _ignoreDefaultKeyboardNotifications;
	BOOL inAskToBuyApprovalFlow;
	BOOL _financeInterruption;
	NSString* _hostApplicationIdentifier;

}

@property (setter=_setIgnoresExpectedClientsProtocol:,getter=_ignoresExpectedClientsProtocol) BOOL _ignoresExpectedClientsProtocol; 
@property (nonatomic,copy) UIColor * darkKeyColor;                                                                                               //@synthesize darkKeyColor=_darkKeyColor - In the implementation block
@property (nonatomic,copy) UIColor * lightKeyColor;                                                                                              //@synthesize lightKeyColor=_lightKeyColor - In the implementation block
@property (copy) NSString * applicationIdentifier; 
@property (copy) NSString * applicationVersion; 
@property (copy) NSString * clientIdentifier; 
@property (assign,nonatomic) id<SUClientInterfaceDelegate> delegate;                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (copy) SUUIAppearance * appearance; 
@property (getter=isFinanceInterruption) BOOL financeInterruption;                                                                               //@synthesize financeInterruption=_financeInterruption - In the implementation block
@property (copy) NSString * hostApplicationIdentifier;                                                                                           //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
@property (assign) BOOL ignoreDefaultKeyboardNotifications;                                                                                      //@synthesize ignoreDefaultKeyboardNotifications=_ignoreDefaultKeyboardNotifications - In the implementation block
@property (copy) NSString * localStoragePath; 
@property (nonatomic,readonly) SUPreviewOverlayViewController * previewOverlay; 
@property (retain) SUPurchaseManager * purchaseManager; 
@property (retain) SUQueueSessionManager * queueSessionManager; 
@property (assign) BOOL showDialogOnError;                                                                                                       //@synthesize showDialogOnError=_showDialogOnError - In the implementation block
@property (nonatomic,readonly) SUTabBarController * tabBarController; 
@property (copy) NSString * userAgent; 
@property (retain) SUViewControllerFactory * viewControllerFactory;                                                                              //@synthesize viewControllerFactory=_viewControllerFactory - In the implementation block
@property (assign) BOOL wasLaunchedFromLibrary; 
@property (assign) BOOL inAskToBuyApprovalFlow; 
@property (nonatomic,copy) NSString * askToBuyApprovalPrompt;                                                                                    //@synthesize askToBuyApprovalPrompt=_askToBuyApprovalPrompt - In the implementation block
+(id)_defaultApplicationIdentifier;
+(id)_defaultApplicationVersion;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)init;
-(id<SUClientInterfaceDelegate>)delegate;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(void)setAppearance:(SUUIAppearance *)arg1 ;
-(SUPurchaseManager *)purchaseManager;
-(NSString *)applicationIdentifier;
-(void)setDelegate:(id<SUClientInterfaceDelegate>)arg1 ;
-(SUTabBarController *)tabBarController;
-(SUViewControllerFactory *)viewControllerFactory;
-(NSString *)applicationVersion;
-(NSString *)userAgent;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(SUUIAppearance *)appearance;
-(NSString *)clientIdentifier;
-(NSString *)hostApplicationIdentifier;
-(void)dealloc;
-(void)setInAskToBuyApprovalFlow:(BOOL)arg1 ;
-(void)setAskToBuyApprovalPrompt:(NSString *)arg1 ;
-(void)setPurchaseManager:(SUPurchaseManager *)arg1 ;
-(void)_showPreviewOverlayAnimated:(BOOL)arg1 ;
-(void)setViewControllerFactory:(SUViewControllerFactory *)arg1 ;
-(UIColor *)darkKeyColor;
-(UIColor *)lightKeyColor;
-(void)_hidePreviewOverlayAnimated:(BOOL)arg1 ;
-(void)_dispatchXEvent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_presentDialog:(id)arg1 ;
-(NSString *)askToBuyApprovalPrompt;
-(BOOL)isFinanceInterruption;
-(BOOL)inAskToBuyApprovalFlow;
-(SUPreviewOverlayViewController *)previewOverlay;
-(void)_exitStoreWithReason:(long long)arg1 ;
-(void)_dispatchOnPageResponseWithData:(id)arg1 response:(id)arg2 ;
-(BOOL)showDialogOnError;
-(BOOL)_ignoresExpectedClientsProtocol;
-(BOOL)ignoreDefaultKeyboardNotifications;
-(void)setIgnoreDefaultKeyboardNotifications:(BOOL)arg1 ;
-(id)_newScriptInterface;
-(SUQueueSessionManager *)queueSessionManager;
-(void)setQueueSessionManager:(SUQueueSessionManager *)arg1 ;
-(NSString *)localStoragePath;
-(void)setLocalStoragePath:(NSString *)arg1 ;
-(id)URLBagKeyForIdentifier:(id)arg1 ;
-(void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_dismissViewControllerFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dismissModalViewControllerFromViewController:(id)arg1 withTransition:(int)arg2 ;
-(void)_presentViewController:(id)arg1 fromViewController:(id)arg2 withTransition:(int)arg3 ;
-(void)_returnToLibrary;
-(void)_setStatusBarHidden:(BOOL)arg1 withAnimation:(long long)arg2 ;
-(void)_setStatusBarStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)wasLaunchedFromLibrary;
-(void)_setIgnoresExpectedClientsProtocol:(BOOL)arg1 ;
-(void)_mediaPlayerViewControllerWillDismiss:(id)arg1 animated:(BOOL)arg2 ;
-(void)setWasLaunchedFromLibrary:(BOOL)arg1 ;
-(void)setDarkKeyColor:(UIColor *)arg1 ;
-(void)setLightKeyColor:(UIColor *)arg1 ;
-(void)setFinanceInterruption:(BOOL)arg1 ;
-(void)setShowDialogOnError:(BOOL)arg1 ;
@end

