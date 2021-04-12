/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol SUPurchaseManagerDelegate <NSObject>
@optional
-(void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
-(void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
-(void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
-(void)purchaseManager:(id)arg1 didFinishPurchaseRequest:(id)arg2 withError:(id)arg3;
-(void)purchaseManagerDidEndUpdates:(id)arg1;
-(void)purchaseManagerWillBeginUpdates:(id)arg1;
-(id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2;
-(id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2;

@end

