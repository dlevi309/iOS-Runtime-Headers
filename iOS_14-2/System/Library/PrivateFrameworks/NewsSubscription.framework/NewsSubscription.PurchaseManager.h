/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/

#import <libobjc.A.dylib/AMSPurchaseResponseProtocol.h>
#import <libobjc.A.dylib/FCPurchaseManagerDelegate.h>

@interface NewsSubscription.PurchaseManager : NSObject <AMSPurchaseResponseProtocol, FCPurchaseManagerDelegate> {

	 purchaseObservers;
	 transactionObservers;
	 internalPurchaseManager;
	 purchaseController;
	 purchaseContextEntriesManager;
	 metricsBuilder;
	 bundleSubscriptionManager;
	 sceneProvider;

}
-(void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleEngagementRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)purchaseSuccessWithProductID:(id)arg1 purchaseReceipt:(id)arg2 chargeCurrencyCode:(id)arg3 ongoingPurchaseEntry:(id)arg4 ;
-(void)purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4 ;
-(void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(id)arg1 ongoingPurchaseEntry:(id)arg2 ;
-(id)init;
@end

