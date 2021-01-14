/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

