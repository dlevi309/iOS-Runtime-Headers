/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <ShareSheet/UIActivity.h>

@class PKPaymentTransaction, PKPaymentPass;

@interface PKReprocessMerchantActivity : UIActivity {

	PKPaymentTransaction* _transaction;
	PKPaymentPass* _paymentPass;

}
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(id)initWithTransaction:(id)arg1 paymentPass:(id)arg2 ;
@end

