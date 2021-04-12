/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPaymentServiceDelegate <NSObject>
@optional
-(void)paymentServiceReceivedInterruption;
-(void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
-(void)paymentDeviceDidExitField;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
-(void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2;
-(void)featureApplicationAdded:(id)arg1;
-(void)featureApplicationRemoved:(id)arg1;
-(void)featureApplicationChanged:(id)arg1;
-(void)didRecieveCredentialInvitation:(id)arg1;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCredential:(id)arg2;
-(void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2;

@end

