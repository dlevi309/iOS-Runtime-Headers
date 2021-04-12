/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/


@interface NPPurchaseManager : NSObject {

	 purchaseManager;
	 transactionObservers;
	 purchaseObservers;

}
-(id)init;
-(void)addTransactionObserver:(id)arg1 ;
-(BOOL)startBundlePurchaseWithPurchaseModel:(id)arg1 purchaseContext:(id)arg2 error:(id*)arg3 ;
-(void)addPurchaseObserver:(id)arg1 ;
-(id)purchaseMetadataWithPurchaseID:(id)arg1 restorePurchase:(BOOL)arg2 ;
-(void)removeTransactionObserver:(id)arg1 ;
-(BOOL)startPurchaseWithPurchaseModel:(id)arg1 purchaseContext:(id)arg2 error:(id*)arg3 ;
-(void)removePurchaseObserver:(id)arg1 ;
@end

