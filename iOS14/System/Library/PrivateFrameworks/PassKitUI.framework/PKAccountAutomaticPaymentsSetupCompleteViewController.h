/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>

@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsSetupCompleteViewController : PKExplanationViewController {

	PKAccountAutomaticPaymentsController* _controller;
	unsigned long long _featureIdentifier;

}
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_doneButton;
-(void)viewDidLoad;
-(id)bodyString;
-(id)initWithController:(id)arg1 ;
-(id)_paymentDateString;
-(long long)_paymentDay;
-(id)_paymentDayString;
-(id)_paymentDayNameString;
-(void)_donePressed;
@end

