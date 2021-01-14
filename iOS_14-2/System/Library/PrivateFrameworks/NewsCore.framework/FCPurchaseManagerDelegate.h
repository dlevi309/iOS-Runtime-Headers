/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCPurchaseManagerDelegate
@required
-(void)purchaseSuccessWithProductID:(id)arg1 purchaseReceipt:(id)arg2 chargeCurrencyCode:(id)arg3 ongoingPurchaseEntry:(id)arg4;
-(void)purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4;
-(void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(id)arg1 ongoingPurchaseEntry:(id)arg2;

@end

