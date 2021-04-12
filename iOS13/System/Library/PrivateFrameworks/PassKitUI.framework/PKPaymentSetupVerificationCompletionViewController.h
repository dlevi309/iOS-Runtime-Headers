/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/PKPaymentVerificationObserverDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKActivityTableCell, PKPaymentVerificationObserver, PKTableHeaderView, PKPaymentSetupFooterView, UIColor, PKPaymentVerificationController, PKPaymentProvisioningController, NSString;

@interface PKPaymentSetupVerificationCompletionViewController : PKPaymentSetupTableViewController <UITextFieldDelegate, PKPaymentVerificationObserverDelegate> {

	PKActivityTableCell* _verificationCodeCell;
	BOOL _verificationCodeAccepted;
	BOOL _resignedResponder;
	PKPaymentVerificationObserver* _verificationObserver;
	PKTableHeaderView* _tableHeader;
	PKPaymentSetupFooterView* _tableFooter;
	UIColor* _editableTextFieldColor;
	long long _mode;
	BOOL _offerOtherMethods;
	PKPaymentVerificationController* _verificationController;
	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;

}

@property (nonatomic,readonly) PKPaymentVerificationController * verificationController;                 //@synthesize verificationController=_verificationController - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;                   //@synthesize provisioningController=_provisioningController - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)next:(id)arg1 ;
-(void)verificationObserver:(id)arg1 didObserveVerificationCode:(id)arg2 ;
-(void)verificationObserverDidTimeout:(id)arg1 ;
-(void)_terminateFlow;
-(void)_performAddToWatchFlow;
-(void)_showAddToWatchOfferForPass:(id)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(PKPaymentProvisioningController *)provisioningController;
-(void)_handleNextStep;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(PKPaymentVerificationController *)verificationController;
-(id)initWithVerificationController:(id)arg1 mode:(long long)arg2 offerOtherMethods:(BOOL)arg3 ;
-(void)_handlePassVerifiedNotification:(id)arg1 ;
-(void)_submitVerificationCode;
-(void)_disableUI;
-(void)_showCompletedUIWithNextHandler:(/*^block*/id)arg1 ;
-(void)_showCompletedUIForPass:(id)arg1 ;
-(void)_showActivationError:(id)arg1 ;
-(void)_enableUI;
@end

