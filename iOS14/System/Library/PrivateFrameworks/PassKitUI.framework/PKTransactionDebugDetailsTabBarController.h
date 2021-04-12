/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITabBarController.h>

@class UIBarButtonItem, PKPaymentTransaction, PKTransactionSource, PKTransactionCloudKitDebugDetailsViewController, PKTransactionSpotlightDebugDetailsViewController;

@interface PKTransactionDebugDetailsTabBarController : UITabBarController {

	UIBarButtonItem* _shareButton;
	PKPaymentTransaction* _transaction;
	PKTransactionSource* _transactionSource;
	PKTransactionCloudKitDebugDetailsViewController* _cloudKitViewController;
	PKTransactionSpotlightDebugDetailsViewController* _spotlightViewController;

}
-(void)_handleShareButton:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 transactionSource:(id)arg2 ;
@end

