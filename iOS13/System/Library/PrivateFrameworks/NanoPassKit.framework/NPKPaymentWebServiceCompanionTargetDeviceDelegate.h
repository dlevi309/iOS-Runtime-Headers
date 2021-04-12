/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKPaymentWebServiceCompanionTargetDeviceDelegate <NSObject>
@required
-(void)setNewAuthRandom:(/*^block*/id)arg1;
-(void)noteForegroundVerificationObserverActive:(BOOL)arg1;
-(void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
-(void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 preconditionDescription:(id)arg2 shouldUnregister:(BOOL)arg3;
-(void)handlePushToken:(id)arg1;
-(void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1;
-(void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2;
-(void)handlePaymentTransactions:(id)arg1 appletStates:(id)arg2 forUniqueIDs:(id)arg3;
-(void)handleAppletState:(id)arg1 forUniqueID:(id)arg2;
-(void)handleRemoveTransactionsWithIdentifiers:(id)arg1;
-(void)handleBalanceUpdate:(id)arg1 forUniqueID:(id)arg2;
-(void)archiveWebServiceContext:(id)arg1;
-(void)archiveWebServiceBackgroundContext:(id)arg1;
-(void)handlePaymentWebServiceContextFromWatch:(id)arg1;
-(void)sendWebServiceContextToWatch;
-(void)showPaymentSetupForAppDisplayName:(id)arg1;
-(void)sendPaymentOptionsDefaultsToWatch;
-(void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1 account:(id)arg2;
-(void)handleDownloadAllPaymentPasses;
-(void)checkCompanionPeerPaymentRegistrationState;

@end

