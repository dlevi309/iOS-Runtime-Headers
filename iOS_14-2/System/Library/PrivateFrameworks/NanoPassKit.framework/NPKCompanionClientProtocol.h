/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKCompanionClientProtocol <NSObject>
@required
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
-(void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithBalances:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalance:(id)arg3;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithCredentials:(id)arg2;

@end

