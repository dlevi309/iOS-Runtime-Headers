/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/SXSubscribeActionHandler.h>

@interface NewsArticles.SubscribeActionHandler : NSObject <SXSubscribeActionHandler> {

	 headline;
	 actionModel;
	 purchaseStarter;
	 purchasingSpinnerViewControllerFactory;
	 $__lazy_storage_$_purchasingSpinnerViewController;
	 $__lazy_storage_$_verifyingSpinnerViewController;
	 bundleSubscriptionManager;
	 configurationManager;
	 router;
	 familySharingLandingPageLauncher;
	 offerManager;
	 presenter;

}
-(void)handleSubscribeActionOnPresenter:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)handleAMSPurchaseCompletion;
-(id)init;
@end

