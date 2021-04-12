/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>

@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsSetupCompleteViewController : PKExplanationViewController {

	PKAccountAutomaticPaymentsController* _controller;
	unsigned long long _featureIdentifier;

}
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_doneButton;
-(id)initWithController:(id)arg1 ;
-(id)bodyString;
-(id)_paymentDateString;
-(long long)_paymentDay;
-(id)_paymentDayString;
-(id)_paymentDayNameString;
-(void)_donePressed;
@end

