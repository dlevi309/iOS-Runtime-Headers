/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@interface AppStoreKit.PurchaseHistoryAppStateDataSource : NSObject {

	 delegate;
	 accessQueue;
	 callbackQueue;
	 expectedAppStates;
	 lastAccountId;
	 additionalFamilyMembers;
	 purchaseHistory;
	 hasRequestedPurchaseHistoryUpdate;
	 purchaseHistoryContext;

}
-(id)init;
-(void)accountsDidChange;
-(void)dealloc;
-(void)purchaseHistoryUpdated:(id)arg1 ;
@end

