/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <libobjc.A.dylib/SUClientDelegate.h>
#import <libobjc.A.dylib/SUPurchaseManagerDelegate.h>
#import <libobjc.A.dylib/SUTabBarControllerDelegate.h>
#import <UIKit/UIApplicationDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class SUClient, SUSectionsResponse, NSURL, ISOperation, NSString, NSArray, SUTabBarController, MFMailComposeViewController, NSDictionary, UINavigationController, UIWindow;

@interface SUStoreController : NSObject <SUClientDelegate, SUPurchaseManagerDelegate, SUTabBarControllerDelegate, UIApplicationDelegate, MFMailComposeViewControllerDelegate> {

	SUClient* _client;
	SUSectionsResponse* _lastBackgroundSectionsResponse;
	SUSectionsResponse* _lastSectionsResponse;
	NSURL* _launchURL;
	ISOperation* _loadSectionsOperation;
	NSString* _localStoreFrontAtLastSuspend;
	id _locationObserver;
	NSArray* _overlayConfigurations;
	BOOL _reloadForStorefrontChangeAfterAccountSetup;
	BOOL _reloadSectionsOnNextLaunch;
	NSString* _synchedStoreFrontAtLastSuspend;
	SUTabBarController* _tabBarController;
	MFMailComposeViewController* _mailComposeViewController;
	NSDictionary* _storeFrontLanguages;

}

@property (nonatomic,retain) NSURL * launchURL;                                                          //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,readonly) NSString * defaultPNGNameForSuspend; 
@property (getter=isTabBarControllerLoaded,nonatomic,readonly) BOOL tabBarControllerLoaded; 
@property (nonatomic,readonly) SUTabBarController * tabBarController;                                    //@synthesize tabBarController=_tabBarController - In the implementation block
@property (nonatomic,readonly) UINavigationController * topNavigationController; 
@property (getter=isStoreEnabled,nonatomic,readonly) BOOL storeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)cancelAllOperations;
-(void)connect;
-(double)defaultImageSnapshotExpiration;
-(SUTabBarController *)tabBarController;
-(void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3 ;
-(BOOL)application:(id)arg1 handleOpenURL:(id)arg2 ;
-(NSURL *)launchURL;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(void)setupUI;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)prepareForSuspend;
-(void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2 ;
-(void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2 ;
-(void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2 ;
-(void)purchaseManagerDidEndUpdates:(id)arg1 ;
-(void)purchaseManagerWillBeginUpdates:(id)arg1 ;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(id)copySuspendSettings;
-(void)exitStoreAfterDialogsDismiss;
-(BOOL)isStoreEnabled;
-(id)overlayBackgroundViewController;
-(BOOL)presentOverlayBackgroundViewController:(id)arg1 ;
-(void)dismissOverlayBackgroundViewController;
-(void)composeEmailWithSubject:(id)arg1 body:(id)arg2 ;
-(BOOL)selectSectionWithIdentifier:(id)arg1 ;
-(BOOL)isTabBarControllerLoaded;
-(void)handleApplicationURL:(id)arg1 ;
-(void)_reloadForNetworkTypeChange:(id)arg1 ;
-(BOOL)matchesClientApplication:(id)arg1 ;
-(id)overlayConfigurationForStorePage:(id)arg1 ;
-(id)newScriptInterface;
-(void)_bagDidLoadNotification:(id)arg1 ;
-(BOOL)client:(id)arg1 presentModalViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)topViewControllerForClient:(id)arg1 ;
-(BOOL)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)client:(id)arg1 openInternalURL:(id)arg2 ;
-(void)exitStoreWithReason:(long long)arg1 ;
-(BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1 ;
-(void)_selectFooterSectionNotification:(id)arg1 ;
-(void)_storeFrontChangedNotification:(id)arg1 ;
-(void)_accountControllerDisappearedNotification:(id)arg1 ;
-(void)tearDownUI;
-(void)_cancelLoadSectionsOperation;
-(void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1 ;
-(BOOL)_loadSectionsAllowingCache:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_presentSectionFetchUI;
-(void)_handleFinishedLoadSectionsOperation:(id)arg1 ;
-(UINavigationController *)topNavigationController;
-(void)_cancelSuspendAfterDialogsDismissed;
-(void)_dialogDidFinishNotification:(id)arg1 ;
-(BOOL)_isAccountViewControllerVisible;
-(void)_saveArchivedNavigationPath;
-(id)_resumableViewController;
-(BOOL)_reloadForStorefrontChange;
-(void)_reloadOverlayConfigurations;
-(void)_retrySectionsAfterNetworkTransition;
-(void)_mainThreadStoreFrontChangedNotification:(id)arg1 ;
-(BOOL)_showWildcatAccountViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)endPurchaseBatch;
-(void)beginPurchaseBatch;
-(void)_handleSearchURL:(id)arg1 ;
-(void)_handleAccountURL:(id)arg1 ;
-(void)_defaultHandleApplicationURLRequestProperties:(id)arg1 ;
-(void)composeEmailByRestoringAutosavedMessage;
-(void)_handleSectionsLoadFailedWithError:(id)arg1 ;
-(void)_reloadWithSectionsResponse:(id)arg1 ;
-(void)presentExternalURLViewController:(id)arg1 ;
-(BOOL)isComposingEmail;
-(void)presentMailComposeViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissMailComposeViewControllerAnimated:(BOOL)arg1 ;
-(id)downloadQueueForClient:(id)arg1 downloadKinds:(id)arg2 ;
-(BOOL)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2 ;
-(BOOL)showDialogForCapabilities:(id)arg1 mismatches:(id)arg2 ;
-(NSString *)defaultPNGNameForSuspend;
-(id)storeContentLanguage;
@end
