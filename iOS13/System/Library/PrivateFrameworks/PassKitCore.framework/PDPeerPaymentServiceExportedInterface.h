/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PDPeerPaymentServiceExportedInterface <PDXPCServiceExportedInterface>
@optional
-(void)initalizeCloudStoreIfNecessaryWithCompletion:(/*^block*/id)arg1;

@required
-(void)sharedPeerPaymentWebServiceContextWithHandler:(/*^block*/id)arg1;
-(void)setSharedPeerPaymentWebServiceContext:(id)arg1 handler:(/*^block*/id)arg2;
-(void)accountWithCompletion:(/*^block*/id)arg1;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1;
-(void)deleteAccountWithCompletion:(/*^block*/id)arg1;
-(void)registerDeviceWithCompletion:(/*^block*/id)arg1;
-(void)registerDeviceWithForceReregister:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)unregisterDeviceWithCompletion:(/*^block*/id)arg1;
-(void)registrationStatusWithCompletion:(/*^block*/id)arg1;
-(void)presentIdentityVerificationFlowWithResponseData:(id)arg1 orientation:(id)arg2 completion:(/*^block*/id)arg3;
-(void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 completion:(/*^block*/id)arg6;
-(void)presentPeerPaymentTermsAndConditionsWithTermsURL:(id)arg1 termsIdentifier:(id)arg2 passUniqueID:(id)arg3 orientation:(id)arg4 completion:(/*^block*/id)arg5;
-(void)noteAccountDeletedWithCompletion:(/*^block*/id)arg1;
-(void)receivedPeerPaymentMessageData:(id)arg1 handler:(/*^block*/id)arg2;
-(void)updateMessageReceivedDate:(id)arg1 forTransactionWithIdentifier:(id)arg2 handler:(/*^block*/id)arg3;
-(void)balanceForPass:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1 handler:(/*^block*/id)arg2;
-(void)lastUsedAlternateFundingSourcePassUniqueIdentifier:(/*^block*/id)arg1;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1;
-(void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1;
-(void)initalizeCloudStoreIfNecessaryWithHandler:(/*^block*/id)arg1;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1;

@end

