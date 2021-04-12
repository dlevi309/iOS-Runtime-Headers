/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/SUClientInterfaceDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/SUPurchaseManagerDelegate.h>

@protocol OS_dispatch_queue;
@class SUClientInterface, NSObject, SUImageCache, ISURLOperationPool, NSString, MFMailComposeViewController, NSArray, UIViewController, SUScriptExecutionContext, NSMutableDictionary;

@interface SUClientController : NSObject <SUClientInterfaceDelegate, MFMailComposeViewControllerDelegate, SUPurchaseManagerDelegate> {

	BOOL _active;
	SUClientInterface* _clientInterface;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SUImageCache* _imageCache;
	ISURLOperationPool* _imagePool;
	NSString* _localStoreFrontAtLastSuspend;
	MFMailComposeViewController* _mailComposeViewController;
	CFArrayRef _offeredAssetTypes;
	NSArray* _overlayConfigurations;
	UIViewController* _rootViewController;
	SUScriptExecutionContext* _scriptExecutionContext;
	NSString* _synchedStoreFrontAtLastSuspend;
	NSMutableDictionary* _urlBagKeys;

}

@property (nonatomic,retain) SUImageCache * imageCache;                                        //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) ISURLOperationPool * imageOperationPool;                          //@synthesize imagePool=_imagePool - In the implementation block
@property (nonatomic,readonly) SUScriptExecutionContext * scriptExecutionContext;              //@synthesize scriptExecutionContext=_scriptExecutionContext - In the implementation block
@property (nonatomic,readonly) NSString * storeContentLanguage; 
@property (nonatomic,readonly) BOOL storeFrontDidChangeSinceLastSuspend; 
@property (copy) SUClientInterface * clientInterface; 
@property (getter=isStoreEnabled,nonatomic,readonly) BOOL storeEnabled; 
@property (nonatomic,retain) UIViewController * rootViewController;                            //@synthesize rootViewController=_rootViewController - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                                    //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setSharedController:(id)arg1 ;
+(id)sharedController;
-(void)cancelAllOperations;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(id)init;
-(id)initWithClientIdentifier:(id)arg1 ;
-(BOOL)isActive;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(void)becomeActive;
-(UIViewController *)rootViewController;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(SUImageCache *)imageCache;
-(void)setImageCache:(SUImageCache *)arg1 ;
-(id)viewControllerFactory;
-(id)userAgent;
-(BOOL)openURL:(id)arg1 ;
-(void)setUserAgent:(id)arg1 ;
-(SUClientInterface *)clientInterface;
-(void)resignActive;
-(id)clientIdentifier;
-(void)dealloc;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(void)setViewControllerFactory:(id)arg1 ;
-(void)clientInterface:(id)arg1 exitStoreWithReason:(long long)arg2 ;
-(void)clientInterface:(id)arg1 presentDialog:(id)arg2 ;
-(void)clientInterface:(id)arg1 setStatusBarHidden:(BOOL)arg2 withAnimation:(long long)arg3 ;
-(void)clientInterface:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(BOOL)arg3 ;
-(id)scriptInterfaceForClientInterface:(id)arg1 ;
-(void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2 ;
-(void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2 ;
-(void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2 ;
-(void)purchaseManagerDidEndUpdates:(id)arg1 ;
-(void)purchaseManagerWillBeginUpdates:(id)arg1 ;
-(void)_memoryWarningNotification:(id)arg1 ;
-(SUScriptExecutionContext *)scriptExecutionContext;
-(BOOL)openClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3 ;
-(BOOL)isStoreEnabled;
-(id)initWithClientInterface:(id)arg1 ;
-(id)overlayBackgroundViewController;
-(BOOL)presentOverlayBackgroundViewController:(id)arg1 ;
-(void)dismissOverlayBackgroundViewController;
-(void)_presentDialog:(id)arg1 ;
-(void)composeEmailWithSubject:(id)arg1 body:(id)arg2 ;
-(id)overlayConfigurationForStorePage:(id)arg1 ;
-(id)newScriptInterface;
-(BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)URLBagKeyForIdentifier:(id)arg1 ;
-(BOOL)dismissTopViewControllerAnimated:(BOOL)arg1 ;
-(id)_newComposeReviewViewControllerForButtonAction:(id)arg1 ;
-(id)_newAccountViewControllerForButtonAction:(id)arg1 ;
-(void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_purgeCaches;
-(void)exitStoreWithReason:(long long)arg1 ;
-(BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1 ;
-(void)composeEmailByRestoringAutosavedMessage;
-(void)presentExternalURLViewController:(id)arg1 ;
-(BOOL)isComposingEmail;
-(void)presentMailComposeViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissMailComposeViewControllerAnimated:(BOOL)arg1 ;
-(NSString *)storeContentLanguage;
-(void)bagDidLoadNotification:(id)arg1 ;
-(void)_dialogNotification:(id)arg1 ;
-(BOOL)displayClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3 ;
-(CFArrayRef)offeredAssetTypes;
-(void)_reloadOverlayConfigurationsFromURLBag;
-(BOOL)presentAccountViewController:(id)arg1 showNavigationBar:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)composeEmailWithSubject:(id)arg1 body:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)presentAccountViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)openClientURL:(id)arg1 ;
-(void)_reloadScriptExecutionContextFromURLBag;
-(void)_reloadUserDefaultsFromURLBag;
-(BOOL)performActionForDialog:(id)arg1 button:(id)arg2 ;
-(BOOL)displayClientURL:(id)arg1 ;
-(BOOL)ignoresExpectedClientsProtocol;
-(BOOL)openURL:(id)arg1 inClientWithIdentifier:(id)arg2 ;
-(void)setIgnoresExpectedClientsProtocol:(BOOL)arg1 ;
-(void)setOfferedAssetTypes:(CFArrayRef)arg1 ;
-(void)autosaveMessageWithCompletionBlock:(/*^block*/id)arg1 ;
-(ISURLOperationPool *)imageOperationPool;
-(BOOL)storeFrontDidChangeSinceLastSuspend;
-(void)setImageOperationPool:(ISURLOperationPool *)arg1 ;
@end

