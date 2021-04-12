/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <libobjc.A.dylib/PKPaymentVerificationControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentWebService, PKTableHeaderView, PKPassView, UIImage, PKPaymentVerificationController, PKPaymentProvisioningController, PKPass, NSString;

@interface PKPassSetupAutomaticPresentationController : PKPaymentSetupTableViewController <PKPaymentVerificationControllerDelegate> {

	PKPaymentWebService* _webService;
	unsigned long long _selectedIndex;
	PKTableHeaderView* _headerView;
	PKPassView* _passView;
	UIImage* _passSnapshot;
	PKPaymentVerificationController* _verificationController;
	PKPaymentProvisioningController* _provisioningController;
	PKPass* _pass;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;

}

@property (nonatomic,readonly) PKPass * pass;                                                            //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)passNeedsAutomaticPresentationSetup:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(void)_dismissView;
-(PKPass *)pass;
-(void)_showAddToWatchOfferForPass:(id)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)_terminateSetupFlow;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)logAggDContextSpecificCheckpointForKey:(id)arg1 ;
-(id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(long long)arg3 provisioningController:(id)arg4 ;
-(long long)_paymentPassState;
-(id)_buttonTitleForPaymentPassState:(long long)arg1 ;
-(void)_saveSettings;
-(void)_showVerificationForPass:(id)arg1 ;
-(BOOL)_shouldShowMakeDefaultViewControllerForPass:(id)arg1 ;
-(void)_presentMakeDefaultViewControllerForPass:(id)arg1 ;
-(void)_presentNextCredentialWithCompletion:(/*^block*/id)arg1 ;
-(id)_contextSpecificStringForAggDKey:(id)arg1 ;
-(void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2 ;
@end

