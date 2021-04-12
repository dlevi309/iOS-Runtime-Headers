/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_presentDisplayableError:(id)arg1 ;
-(void)viewDidLoad;
-(void)physicalCardActionController:(id)arg1 didChangeToState:(long long)arg2 withError:(id)arg3 ;
-(void)_setupForCurrentState;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_showSpinner:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 activationCode:(id)arg5 ;
@end

