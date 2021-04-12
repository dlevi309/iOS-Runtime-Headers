/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/ICQPageDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <libobjc.A.dylib/ICQServerHookDelegate.h>

@protocol ICQUpgradeFlowManagerDelegate;
@class ICQUpgradeOfferViewController, AAUIServerUIHookHandler, ICQOffer, NSDictionary, ICQUpgradeFlowOptions, UINavigationController, ICQAlertController, AAUIRemoteUIController, NSString;

@interface ICQUpgradeFlowManager : NSObject <UINavigationControllerDelegate, ICQPageDelegate, RemoteUIControllerDelegate, ICQServerHookDelegate> {

	/*^block*/id _didComplete;
	BOOL _didReceiveiTunesCode;
	BOOL _didCompleteICQAction;
	ICQUpgradeOfferViewController* _busyOfferViewController;
	int _renewCredentialsCount;
	AAUIServerUIHookHandler* _serverHookHandler;
	BOOL _shouldNavigationControllerBeDismissed;
	BOOL _completedFamilySetup;
	ICQOffer* _offer;
	NSDictionary* _bindings;
	ICQUpgradeFlowOptions* _flowOptions;
	id<ICQUpgradeFlowManagerDelegate> _delegate;
	UINavigationController* _hostingNavigationController;
	ICQAlertController* _upgradeAlertController;
	AAUIRemoteUIController* _remoteUIController;

}

@property (assign,nonatomic) BOOL completedFamilySetup;                                         //@synthesize completedFamilySetup=_completedFamilySetup - In the implementation block
@property (nonatomic,retain) AAUIRemoteUIController * remoteUIController;                       //@synthesize remoteUIController=_remoteUIController - In the implementation block
@property (nonatomic,readonly) ICQOffer * offer;                                                //@synthesize offer=_offer - In the implementation block
@property (nonatomic,retain) NSDictionary * bindings;                                           //@synthesize bindings=_bindings - In the implementation block
@property (nonatomic,copy) ICQUpgradeFlowOptions * flowOptions;                                 //@synthesize flowOptions=_flowOptions - In the implementation block
@property (assign,nonatomic,__weak) id<ICQUpgradeFlowManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldNavigationControllerBeDismissed;                        //@synthesize shouldNavigationControllerBeDismissed=_shouldNavigationControllerBeDismissed - In the implementation block
@property (nonatomic,retain) UINavigationController * hostingNavigationController;              //@synthesize hostingNavigationController=_hostingNavigationController - In the implementation block
@property (nonatomic,retain) ICQAlertController * upgradeAlertController;                       //@synthesize upgradeAlertController=_upgradeAlertController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowForOffer:(id)arg1 ;
+(Class)subclassForOfferType:(long long)arg1 ;
+(BOOL)shouldSubclassShowForOffer:(id)arg1 ;
+(void)needsToRunWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(id<ICQUpgradeFlowManagerDelegate>)delegate;
-(void)setDelegate:(id<ICQUpgradeFlowManagerDelegate>)arg1 ;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(AAUIRemoteUIController *)remoteUIController;
-(void)setRemoteUIController:(AAUIRemoteUIController *)arg1 ;
-(ICQOffer *)offer;
-(id)initWithOffer:(id)arg1 ;
-(void)setFlowOptions:(ICQUpgradeFlowOptions *)arg1 ;
-(void)beginFlowWithPresentingViewController:(id)arg1 ;
-(NSDictionary *)bindings;
-(BOOL)needsNetwork;
-(id)initSubclassWithOffer:(id)arg1 ;
-(void)_performPageButtonActionWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendDelegateCancel;
-(void)_sendDelegateComplete;
-(void)_tappedAlertLink:(id)arg1 ;
-(BOOL)_shouldPresentRemoteFlow;
-(ICQUpgradeFlowOptions *)flowOptions;
-(void)_configurePresentingViewController:(id)arg1 ;
-(id)_ICQNavigationControllerWithRootViewController:(id)arg1 ;
-(void)_sendDelegateDidPresentViewController:(id)arg1 ;
-(void)_addAlertActionForAlertSpec:(id)arg1 buttonIndex:(long long)arg2 ;
-(id)_whitelistedInProcessClients;
-(id)initBaseclassWithOffer:(id)arg1 ;
-(void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3 ;
-(UINavigationController *)hostingNavigationController;
-(void)_presentPageWithSpecification:(id)arg1 ;
-(BOOL)shouldNavigationControllerBeDismissed;
-(void)_setBusyOfferViewController:(id)arg1 ;
-(void)_clearBusyOfferViewController;
-(void)_initiateFamilySetupFlow;
-(void)dismissUpgradeFlowWithSuccess:(BOOL)arg1 ;
-(void)showUpgradeFailurePage;
-(void)showNetworkFailurePage;
-(void)_cancelFlow;
-(BOOL)completedFamilySetup;
-(void)setCompletedFamilySetup:(BOOL)arg1 ;
-(void)_simulateDoneButton;
-(void)_presentUpgradeComplete;
-(void)setBindings:(NSDictionary *)arg1 ;
-(void)setShouldNavigationControllerBeDismissed:(BOOL)arg1 ;
-(void)setHostingNavigationController:(UINavigationController *)arg1 ;
-(ICQAlertController *)upgradeAlertController;
-(void)setUpgradeAlertController:(ICQAlertController *)arg1 ;
-(void)presentFlowHostedInNavigationController:(id)arg1 ;
@end

