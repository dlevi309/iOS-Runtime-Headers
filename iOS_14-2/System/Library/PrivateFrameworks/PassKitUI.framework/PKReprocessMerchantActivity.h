/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <ShareSheet/UIActivity.h>

@class PKPaymentTransaction, PKPaymentPass;

@interface PKReprocessMerchantActivity : UIActivity {

	PKPaymentTransaction* _transaction;
	PKPaymentPass* _paymentPass;

}
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)initWithTransaction:(id)arg1 paymentPass:(id)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
@end

