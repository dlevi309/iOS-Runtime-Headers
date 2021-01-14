/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)_configure;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(PKPaymentProvisioningController *)provisioningController;
-(void)viewDidDisappear:(BOOL)arg1 ;
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
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_terminateSetupFlow;
-(NSString *)stepIdentifier;
-(void)setStepIdentifier:(NSString *)arg1 ;
@end

