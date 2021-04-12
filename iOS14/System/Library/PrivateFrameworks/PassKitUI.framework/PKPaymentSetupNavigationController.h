/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKNavigationController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKPaymentSetupDelegate;
@class PKPaymentProvisioningController, NSString;

@interface PKPaymentSetupNavigationController : PKNavigationController <PKPaymentSetupViewControllerDelegate, PKViewControllerPreflightable> {

	long long _context;
	BOOL _rootViewControllerNeedsConfiguration;
	BOOL _showsWelcomeViewController;
	BOOL _allowsManualEntry;
	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupDelegate> _setupDelegate;
	long long _paymentSetupMode;

}

@property (nonatomic,retain,readonly) PKPaymentProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupDelegate> setupDelegate;                                //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsWelcomeViewController;                                                //@synthesize showsWelcomeViewController=_showsWelcomeViewController - In the implementation block
@property (assign,nonatomic) BOOL allowsManualEntry;                                                         //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
@property (assign,nonatomic) long long paymentSetupMode;                                                     //@synthesize paymentSetupMode=_paymentSetupMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerForPresentingPaymentError:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(id)init;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)allowsManualEntry;
-(void)cancel:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id<PKPaymentSetupDelegate>)setupDelegate;
-(BOOL)shouldAutorotate;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(long long)paymentSetupMode;
-(PKPaymentProvisioningController *)provisioningController;
-(void)viewController:(id)arg1 didShowProvisioningError:(id)arg2 ;
-(void)viewControllerDidShowEligibilityIssue:(id)arg1 ;
-(void)viewController:(id)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewController:(id)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 withShouldContinue:(BOOL)arg3 error:(id)arg4 ;
-(void)viewController:(id)arg1 requestPasscodeUpgradeWithCompletion:(/*^block*/id)arg2 ;
-(void)viewController:(id)arg1 didExitPasscodeUpgradeWithShouldContinue:(BOOL)arg2 error:(id)arg3 ;
-(void)loadView;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 ;
-(void)setPaymentSetupMode:(long long)arg1 ;
-(void)setCustomFormSheetPresentationStyleForiPad;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupDelegate>)arg1 ;
-(void)setShowsWelcomeViewController:(BOOL)arg1 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg1 ;
-(long long)_preferredModalPresentationStyle;
-(void)_reconfigureRootViewController;
-(void)_dirtyConfigurationAndReloadIfNeeded;
-(BOOL)showsWelcomeViewController;
@end

