/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@interface PKPaymentTransactionDetailAmountLineItemGenerator : NSObject
-(id)_lineItemsForPeerPaymentTransaction:(id)arg1 transactionSource:(id)arg2 ;
-(id)lineItemsForInstallmentPlan:(id)arg1 ;
-(id)_lineItemsForPurchaseTransaction:(id)arg1 transactionSource:(id)arg2 associatedReceipt:(id)arg3 ;
-(id)_lineItemsForWithdrawalTransaction:(id)arg1 transactionSource:(id)arg2 ;
-(id)_rewardsLineItemsForRewards:(id)arg1 currencyCode:(id)arg2 ;
-(id)_totalTransferredItemForTransaction:(id)arg1 ;
-(id)_feeLineItemsForFees:(id)arg1 ;
-(id)_totalPaidLineItemForTransaction:(id)arg1 isUnqualified:(BOOL)arg2 ;
-(id)_foreignExchangeLineItemsForExchangeInfo:(id)arg1 ;
-(id)_primaryFundingSourceLineItemForTransaction:(id)arg1 transactionSource:(id)arg2 ;
-(id)_secondaryFundingSourceLineItemForTransaction:(id)arg1 ;
-(id)_totalSentLineItemForTransaction:(id)arg1 ;
-(id)_totalReceivedLineItemForTransaction:(id)arg1 ;
-(id)_subtotalLineItemForTransaction:(id)arg1 ;
-(id)lineItemsForTransaction:(id)arg1 transactionSource:(id)arg2 associatedTransaction:(id)arg3 associatedReceipt:(id)arg4 ;
@end

