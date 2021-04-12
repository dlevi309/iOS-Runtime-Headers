/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPhysicalCardActionControllerDelegate.h>

@class PKPhysicalCard, PKPhysicalCardActionController, PKPaymentPass, NSString, PKOrderPhysicalCardHeroView, CLInUseAssertion, CLLocationManager, PKBusinessChatController, SFClient;

@interface PKPhysicalCardManualActivationViewController : PKExplanationViewController <PKPhysicalCardActionControllerDelegate> {

	PKPhysicalCard* _physicalCard;
	PKPhysicalCardActionController* _actionController;
	PKPaymentPass* _paymentPass;
	unsigned long long _feature;
	NSString* _activationCode;
	PKOrderPhysicalCardHeroView* _hero;
	long long _state;
	CLInUseAssertion* _inUseAssertion;
	CLLocationManager* _locationManager;
	PKBusinessChatController* _businessChatController;
	SFClient* _sharingClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_showSpinner:(BOOL)arg1 ;
-(id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 activationCode:(id)arg5 ;
-(void)_presentDisplayableError:(id)arg1 ;
-(void)physicalCardActionController:(id)arg1 didChangeToState:(long long)arg2 withError:(id)arg3 ;
-(void)_setupForCurrentState;
@end

