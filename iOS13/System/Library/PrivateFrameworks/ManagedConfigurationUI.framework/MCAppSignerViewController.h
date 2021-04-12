/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol OS_dispatch_group;
@class MCUIAppSigner, UIAlertController, NSObject;

@interface MCAppSignerViewController : UITableViewController {

	BOOL _isNetworkReachable;
	MCUIAppSigner* _appSigner;
	UIAlertController* _activeAlertController;
	NSObject*<OS_dispatch_group> _trustActionGroup;

}

@property (nonatomic,retain) UIAlertController * activeAlertController;                  //@synthesize activeAlertController=_activeAlertController - In the implementation block
@property (assign,nonatomic) BOOL isNetworkReachable;                                    //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> trustActionGroup;              //@synthesize trustActionGroup=_trustActionGroup - In the implementation block
@property (nonatomic,retain) MCUIAppSigner * appSigner;                                  //@synthesize appSigner=_appSigner - In the implementation block
-(void)dealloc;
-(BOOL)isNetworkReachable;
-(void)_setup;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(BOOL)canBeShownFromSuspendedState;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_cancelActiveAlertController:(BOOL)arg1 ;
-(void)setActiveAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)activeAlertController;
-(id)initWithAppSigner:(id)arg1 ;
-(void)effectiveSettingsChanged:(id)arg1 ;
-(void)appSignerApplicationsChanged:(id)arg1 ;
-(MCUIAppSigner *)appSigner;
-(void)networkReachabilityChanged:(id)arg1 ;
-(void)setIsNetworkReachable:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_group>)trustActionGroup;
-(BOOL)_isEnterpriseAppTrustAllowed;
-(void)refreshAppSigner;
-(void)_presentNetworkRequiredAlert;
-(void)_trustActionGroupVerifyAppsAndTrustSigner:(BOOL)arg1 ;
-(BOOL)_isAppRemovalAllowed;
-(BOOL)_isShowingTrustUntrustRowAllowed;
-(void)_presentAppRemovalAlert;
-(void)_presentTrustAlert;
-(void)_presentVerifyAppAlert;
-(void)trustAppSigner;
-(void)verifyApps;
-(void)removeAppSignerApps;
-(void)setAppSigner:(MCUIAppSigner *)arg1 ;
-(void)setTrustActionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

