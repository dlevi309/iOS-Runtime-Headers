/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>

@class PKPaymentSetupVerificationMethodTableController, PKPaymentVerificationController, PKPaymentProvisioningController, NSString;

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupFieldsViewController {

	PKPaymentSetupVerificationMethodTableController* _methodTableController;
	long long _verificationStatus;
	PKPaymentVerificationController* _verificationController;
	PKPaymentProvisioningController* _provisioningController;
	NSString* _stepIdentifier;

}

@property (nonatomic,readonly) PKPaymentVerificationController * verificationController;              //@synthesize verificationController=_verificationController - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;                //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,copy) NSString * stepIdentifier;                                                 //@synthesize stepIdentifier=_stepIdentifier - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_configure;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)stepIdentifier;
-(void)setStepIdentifier:(NSString *)arg1 ;
-(PKPaymentProvisioningController *)provisioningController;
-(void)_terminateSetupFlow;
-(id)initWithVerificationController:(id)arg1 ;
-(id)initWithVerificationController:(id)arg1 fieldsModel:(id)arg2 ;
-(void)_handleVerificationFinished;
-(void)_loadVerificationOptions;
-(id)defaultHeaderViewTitle;
-(id)_requestErrorAlertController:(id)arg1 ;
-(id)defaultHeaderViewSubTitle;
-(id)_newVerificationRequest;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(id)initWithVerificationController:(id)arg1 verificationChannels:(id)arg2 ;
-(PKPaymentVerificationController *)verificationController;
-(id)_setupAssistantVerificationAlert;
-(id)visibleFieldIdentifiers;
-(void)handleNextButtonTapped:(id)arg1 ;
@end

