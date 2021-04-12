/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol PKPaymentServiceDelegate <NSObject>
@optional
-(void)featureApplicationChanged:(id)arg1;
-(void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
-(void)paymentDeviceDidExitField;
-(void)didRecieveCredentialInvitation:(id)arg1;
-(void)featureApplicationAdded:(id)arg1;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCredential:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
-(void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2;
-(void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
-(void)transactionBatch:(id)arg1 moreComing:(BOOL)arg2 readyForNextBatch:(/*^block*/id)arg3;
-(void)featureApplicationRemoved:(id)arg1;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
-(void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalanceWithIdentifier:(id)arg3;
-(void)paymentServiceEstablishedConnection;
-(void)paymentServiceReceivedInterruption;

@end

