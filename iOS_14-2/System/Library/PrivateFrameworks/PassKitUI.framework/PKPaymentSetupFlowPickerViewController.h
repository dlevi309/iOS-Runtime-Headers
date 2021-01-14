/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupActivitySpinnerProtocol.h>
#import <libobjc.A.dylib/PKPaymentSetupBrowseProductsViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupHideSetupLaterButtonProtocol.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKTableHeaderView, PKPaymentSetupFooterView, NSMutableArray, NSSet, PKPaymentSetupFlowController, PKPaymentProvisioningController, NSString;

@interface PKPaymentSetupFlowPickerViewController : PKPaymentSetupTableViewController <PKPaymentSetupActivitySpinnerProtocol, PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentSetupPresentationProtocol> {

	PKTableHeaderView* _headerView;
	PKPaymentSetupFooterView* _footerView;
	NSMutableArray* _pickerSections;
	NSSet* _betaNetworks;
	PKPaymentSetupFlowController* _flowController;
	BOOL _hideSetupLaterButton;
	BOOL _allowsManualEntry;
	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	long long _setupContext;

}

@property (nonatomic,readonly) PKPaymentProvisioningController * provisioningController;                   //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,__weak,readonly) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,readonly) PKTableHeaderView * headerView; 
@property (nonatomic,readonly) long long setupContext;                                                     //@synthesize setupContext=_setupContext - In the implementation block
@property (assign,nonatomic) BOOL hideSetupLaterButton;                                                    //@synthesize hideSetupLaterButton=_hideSetupLaterButton - In the implementation block
@property (assign,nonatomic) BOOL allowsManualEntry;                                                       //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_filteredPaymentSetupProducts:(id)arg1 localCredential:(id)arg2 setupContext:(long long)arg3 webService:(id)arg4 mobileCarrierRegion:(id)arg5 ;
+(id)filteredPaymentSetupProductsForProvisioningController:(id)arg1 setupContext:(long long)arg2 ;
+(BOOL)_localCredentials:(id)arg1 containProduct:(id)arg2 ;
+(id)paymentSetupFlowPickerWithSetupDelegate:(id)arg1 context:(long long)arg2 provisioningController:(id)arg3 ;
-(id)footerView;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)hideSetupLaterButton;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)allowsManualEntry;
-(void)setHideSetupLaterButton:(BOOL)arg1 ;
-(id)paymentSetupMarker;
-(long long)setupContext;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)viewDidLoad;
-(PKPaymentProvisioningController *)provisioningController;
-(id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 provisioningController:(id)arg3 ;
-(void)addPickerSection:(id)arg1 ;
-(void)_didSelectProducts:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)addPickerItem:(id)arg1 toSection:(id)arg2 ;
-(void)productSelectionViewController:(id)arg1 didSelectProduct:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)insertPickerSection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_setupLater:(id)arg1 ;
-(void)provisioningViewController:(id)arg1 pushViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)showActivitySpinner;
-(void)_prepareViewControllerForProvsioningFlow:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)browseProductsViewController:(id)arg1 didSelectProduct:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)addPickerItems:(id)arg1 toSection:(id)arg2 ;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(PKTableHeaderView *)headerView;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(void)hideActivitySpinner;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)_terminateSetupFlow;
-(void)viewDidLayoutSubviews;
@end

