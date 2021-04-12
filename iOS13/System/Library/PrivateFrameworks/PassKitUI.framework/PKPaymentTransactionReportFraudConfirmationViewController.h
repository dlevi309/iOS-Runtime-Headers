/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>

@protocol PKPaymentDataProvider, PKPaymentTransactionReportFraudConfirmationViewControllerDelegate;
@class PKPaymentTransaction;

@interface PKPaymentTransactionReportFraudConfirmationViewController : PKExplanationViewController {

	PKPaymentTransaction* _transaction;
	id<PKPaymentDataProvider> _dataProvider;
	id<PKPaymentTransactionReportFraudConfirmationViewControllerDelegate> _fraudDelegate;

}
-(void)viewDidLoad;
-(void)reportFraud:(id)arg1 ;
-(id)initWithContext:(long long)arg1 transaction:(id)arg2 dataProvider:(id)arg3 fraudDelegate:(id)arg4 ;
@end

