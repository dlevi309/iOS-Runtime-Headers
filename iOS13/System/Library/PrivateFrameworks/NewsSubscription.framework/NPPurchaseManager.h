/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/


@interface NPPurchaseManager : NSObject {

	 purchaseManager;
	 transactionObservers;
	 purchaseObservers;

}
-(id)init;
-(void)addTransactionObserver:(id)arg1 ;
-(void)removeTransactionObserver:(id)arg1 ;
-(void)addPurchaseObserver:(id)arg1 ;
-(void)removePurchaseObserver:(id)arg1 ;
-(id)purchaseMetadataWithPurchaseID:(id)arg1 restorePurchase:(BOOL)arg2 ;
-(BOOL)startPurchaseWithPurchaseModel:(id)arg1 purchaseContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)startBundlePurchaseWithPurchaseModel:(id)arg1 purchaseContext:(id)arg2 error:(id*)arg3 ;
@end

